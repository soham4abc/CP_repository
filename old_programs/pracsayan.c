/*C project 
TOPIC-Fractional knapsack 
Done by-ANIKET GHOSH(CSE2020/011)
        SAYAN DEY(CSE2020/058)
        */
/*
REFERENCE QUESTION:Given the weight vector(2,3,5,7,1,4,1) and the profit vector(10,5,15,7,6,18,3) and a kanpsack of capacity 
of 15,find the total profit for the knapsack problem of seven objects.*/
        
#include<stdio.h>
#define rep(i,a,b) for(i=a;i<b;i++)

// function for sorting the value per weight ratio in ascending order.
void mysort(float ratio[],int no_items) 
{
    int i,j;
    float temp;
    rep(i,0,no_items)
    {
        rep(j,i+1,no_items)
        {
            if (ratio[i]>ratio[j]) 
            {
                 temp=ratio[i];
                ratio[i]=ratio[j];
                ratio[j]=temp;
            }
        }
    }
    printf("after sorting the ratios :\n");
    rep(i,0,no_items)
    {
        printf("%.3f  ",ratio[i]);               //printing the after sort list.
    }
    printf("\n");
}

int main()
{
    int capacity,no_items,cur_weight,item;
    float ratio[100];
    int used[100];
    float total_profit;
    int i;
    int weight[100];
    int value[100];
    float r;
    
    printf("Enter the capacity of knapsack:\n");
   scanf("%d",&capacity);                                        // scanning the total capacity of the knapsack.

    printf("Enter the number of items:\n");
    scanf("%d",&no_items);                                        //number of items available to us.

    printf("Enter the weight and value of %d item:\n", no_items);
    //scanning the weight and the value of all the items one by one.
    
    rep(i,0,no_items)
    {
        printf("Weight[%d]:\t", i);
        scanf("%d",&weight[i]);
        printf("Value[%d]:\t", i);
        scanf("%d",&value[i]);
    }
    
    //calculating value per weight ratio.
    rep(i,0,no_items)
    {
        r=(float)value[i]/(float)weight[i];
        ratio[i]=r;
        printf("%.3f  ",ratio[i]); 
        printf("\n");                
    }
    //final chart
    rep(i,0,no_items)
    {
        printf("For object[%d]->value[%d] : %d weight[%d] : %d ratio[%d] : %f\n",i+1,i,value[i],i,weight[i],i,ratio[i]);
    }
    // calling the sort function.
    mysort(ratio,no_items);
    
    for (i=0;i<no_items;i++)
    {
        used[i] = 0;
    }
    cur_weight=capacity;
    
    while(cur_weight>0) //loop will run till there is space left in the knapsack.
    {
        item = -1;
        for (i=0;i<no_items;i++)
            if ((used[i]==0) && ((item==-1) || ((float)value[i]/weight[i] > (float)value[item]/weight[item])))
            item=i;
        used[item]=1;
        cur_weight-=weight[item];                          //calculating the remaining weight after adding one by one item.
        total_profit+=value[item];                         //calculating the net profit.
        if (cur_weight>=0)
        printf("Added object %d (%d Rs., %dKg) completely in the bag. Space left: %d.\n",item+1,value[item],weight[item],cur_weight);
        else
        {
            int item_percent = (int) ((1+(float)cur_weight/weight[item])*100);
            printf("Added %d%% (%d Rs., %dKg) of object %d in the bag.\n",item_percent,value[item],weight[item],item + 1);
            total_profit-=value[item];
            total_profit+=(1+(float)cur_weight/weight[item])*value[item];     //calculating the net profit.
        }
    }
    printf("Filled the bag with objects worth %.2f Rs.\n",total_profit); /*finally printing the net profit obtained by filling
                                                                            the knapsack fully.*/
    return 0;
}
/*
ACCORDING TO THE QUESTION->
item:     1        2        3        4        5        6        7
profit: 10        5        15        7        6        18        3
weight: 2        3        5        7        1        4        1
RATIO:  5        1.667    3        1        6        4.5     3

Calculation:
item            profit            weight            weight_left                knapsack capacity=15(given)

5                 6                1                15-1=14
1                10                2                14-2=12
6                18                4                12-4=8
3                15                5                8-5=3
7                 3                1                3-1=2
2        5*(2/3)=3.33            2                2-2=0

Total_profit=6+10+18+15+3+3.33=53.33(final output)
*/
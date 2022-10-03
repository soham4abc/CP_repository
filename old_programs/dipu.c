#include <stdio.h>
#include<limits.h>
int answer=0,score=0;
int main()
{
    int i;
    
    printf("Welcome to the QUIZ !!!\nIn this Quiz there will be 10 questions on India-Pakistan Wars.\n");
    printf("\nInstruction:Choose the option number of the right answer.\n            For each correct answer +4 points and for each wrong answer -1 point.\n\n");
    printf("> Press 1 to start\n> Press 0 to quit\n");
    scanf("%d",&i);
    if(i==1)
        printf("\nThe Quiz has started\n");
    else if(i==0)
        printf("\nYou have quited the Quiz.\n");
    else
        printf("\nInvalid !!!\n");
        
    if(i==1)
    {    
        int ran= rand() % (11 + 1 - 1) + 1;

        int arr [11];
        int count=0;

        for (int i=ran;i<=11;i++){
        if (i==1)
        ques1();
        else if (i==2)
        ques2()
        ;else if (i==3)
        ques3();
        else if (i==4)
        ques4();
        else if (i==5)
        ques5();
        else if (i==6)
        ques6();
        else if (i==7)
        ques7();
        else if (i==8)
        ques8();
        else if (i==9)
        ques9();
        else if (i==10)
        ques10();
        else if (i==11)
        ques11();
        }
        for (int i=1;i<ran;i++){
        if (i==1)
        ques1();
        else if (i==2)
        ques2()
        ;else if (i==3)
        ques3();
        else if (i==4)
        ques4();
        else if (i==5)
        ques5();
        else if (i==6)
        ques6();
        else if (i==7)
        ques7();
        else if (i==8)
        ques8();
        else if (i==9)
        ques9();
        else if (i==10)
        ques10();
        else if (i==11)
        ques11();
        }

        
        
    }
    
    if(i==1)
    {
        printf("\n\nTotal score is %d out of 40\n\n",score);
    
        if(score<=0)
            printf("Very Poor Performace !");
        else
        if(0<score<=10)
            printf("Poor Performace !");
        else
        if(10<score<=20)
            printf("Fair Performace !");
        else
        if(20<score<=30)
            printf("Good Performace !");
        else
        if(30<score<=40)
            printf("Excellent Performace !");
    
        printf("\n\nThanks for participating in the QUIZ !!!");
    }
    
    printf("\nStay Safe, Stay Healthy !");

    return 0;
}


void ques1()
{
    printf("\nA) Which of the four Indo-Pak wars did not involve any conflict in the disputed region of Kashmir ?\n");
        printf("1) 1965 War\n2) 1971 War\n3) 1999 Kargil War\n4) 1948 Kashmir War");
        printf("\nAnswer:- ");
        scanf("%d",&answer);
        if(answer==2)
        {
            printf("Correct Answer !");
            score=score+4;
        }
        else
        {
            printf("Wrong Answer !\nCorrect Answer: 2) 1971 War");
            score=score-1;
        }

}

void ques2()
{
    printf("\n\nB) Which of the Indo-Pak wars resulted in the creation of Bangladesh ?\n");
        printf("1) 1948 War\n2) 1965 War\n3) 1971 War\n4) 1999 War");
        printf("\nAnswer:- ");
        scanf("%d",&answer);
        if(answer==3)
        {
            printf("Correct Answer !");
            score=score+4;
        }
        else
        {
            printf("Wrong Answer !\nCorrect Answer: 3) 1971 War");
            score=score-1;
        }
}
void ques3()
{
    printf("\n\nB) Which of the Indo-Pak wars resulted in the creation of Bangladesh ?\n");
        printf("1) 1948 War\n2) 1965 War\n3) 1971 War\n4) 1999 War");
        printf("\nAnswer:- ");
        scanf("%d",&answer);
        if(answer==3)
        {
            printf("Correct Answer !");
            score=score+4;
        }
        else
        {
            printf("Wrong Answer !\nCorrect Answer: 3) 1971 War");
            score=score-1;
        }
}

void ques4()
{
    printf("\n\nC) The 1965 War between India and Pakistan, saw what for the first time in South Asia ?\n");
        printf("1) Tanks in the battlefield\n2) Supersonic aircraft in action against each other\n3) The use of biological and chemical weapons in combat\n4) American made weapons against Soviet weapons");
        printf("\nAnswer:- ");
        scanf("%d",&answer);
        if(answer==2)
        {
            printf("Correct Answer !");
            score=score+4;
        }
        else
        {
            printf("Wrong Answer !\nCorrect Answer: 2) Supersonic aircraft in action against each other");
            score=score-1;
        }
}

void ques5()
{
     printf("\n\nD) Who, among the following, was NOT the Prime Minister of India during any of the Indo-Pak wars ?\n");
        printf("1) Rajiv Gandhi\n2) Indira Gandhi\n3) Lal Bahadur Shastri\n4) Jawaharlal Nehru");
        printf("\nAnswer:- ");
        scanf("%d",&answer);
        if(answer==1)
        {
            printf("Correct Answer !");
            score=score+4;
        }
        else
        {
            printf("Wrong Answer !\nCorrect Answer: 1) Rajiv Gandhi");
            score=score-1;
        }
}

void ques6()
{
    printf("\n\nE) China invaded India in 1965 to help Pakistan during the war.\n");
        printf("1) True\n2) False");
        printf("\nAnswer:- ");
        scanf("%d",&answer);
        if(answer==2)
        {
            printf("Correct Answer !");
            score=score+4;
        }
        else
        {
            printf("Wrong Answer !\nCorrect Answer: 2) False");
            score=score-1;
        }
}

void ques7()
{
    printf("\n\nF) Who was the Prime Minister of Pakistan, when the Kargil War broke out ?\n");
        printf("1) Ayub Khan\n2) Benazir Bhutto\n3) Nawaz Sharif\n4) Pervez Musharraf");
        printf("\nAnswer:- ");
        scanf("%d",&answer);
        if(answer==3)
        {
            printf("Correct Answer !");
            score=score+4;
        }
        else
        {
            printf("Wrong Answer !\nCorrect Answer: 3) Nawaz Sharif");
            score=score-1;
        }
    
}

void ques8()
{
    printf("\n\nG) In the 1999 Kargil War, the Indian Air Force suffered no casualties.\n");
        printf("1) True\n2) False");
        printf("\nAnswer:- ");
        scanf("%d",&answer);
        if(answer==2)
        {
            printf("Correct Answer !");
            score=score+4;
        }
        else
        {
            printf("Wrong Answer !\nCorrect Answer: 2) False");
            score=score-1;
        }
}
void ques9()
{
    printf("\n\nH) The Pakistani Navy was the first country in the sub-continent to acquire a submarine.\n");
        printf("1) True\n2) False");
        printf("\nAnswer:- ");
        scanf("%d",&answer);
        if(answer==1)
        {
            printf("Correct Answer !");
            score=score+4;
        }
        else
        {
            printf("Wrong Answer !\nCorrect Answer: 1) True");
            score=score-1;
        }
}

void ques10()
{
    printf("\n\nI) WHich of the following aircraft was NOT in service with the Pakistani Air Force during any of the Indo-Pak Wars ?\n");
        printf("1) F-16 Falcon\n2) F-15 Eagle\n3) Mirage III\n4) F-7M");
        printf("\nAnswer:- ");
        scanf("%d",&answer);
        if(answer==2)
        {
            printf("Correct Answer !");
            score=score+4;
        }
        else
        {
            printf("Wrong Answer !\nCorrect Answer: 2) F-15 Eagle");
            score=score-1;
        }
}

void ques11()
{
    printf("\n\nJ) The tank battle of Assal Uttar, one of the largest tank battles fought in recent times was fought during which Indo-Pak War ?\n");
        printf("1) 1965\n2) 1948\n3) 1971\n4) Kargil War in 1999");
        printf("\nAnswer:- ");
        scanf("%d",&answer);
        if(answer==1)
        {
            printf("Correct Answer !");
            score=score+4;
        }
        else
        {
            printf("Wrong Answer !\nCorrect Answer: 1) 1965");
            score=score-1;
        }
}
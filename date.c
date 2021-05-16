//by buggeduplife02
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[10];
    printf("Enter date in the format DD/MM/YYYY: ");
    scanf("%s",&str);
	int init_size = strlen(str);
	char delim[] = "/";

	char *ptr = strtok(str, delim);
    int ar[3];
    int i=0;

	while(ptr != NULL)
	{
		
        ar[i]=atoi(ptr);
        i++;
		ptr = strtok(NULL, delim);
	}

    if ((ar[1]==1)||(ar[1]==3)||(ar[1]==5)||(ar[1]==7)||(ar[1]==8)||(ar[1]==10)||(ar[1]==12))
    {
        if(ar[0]<=31)
        {
            printf("\n Valid Date!!");
        }
        else 
        printf("\n Not a valid date!!");
    }
    else if (ar[1]==2)
    {
        if(((ar[2]%4)==0)&&(ar[0])<=29)
        printf("valid date");
        else if (((ar[2]%4)!=0)&&(ar[0])<=28)
        printf("valid date");
        else 
        printf("not valid date!!");

    }
    else if(ar[1]<=12)
    {
        if(ar[0]<=30)
        printf("valid date");
        else
        printf("not a valid date");
    }
    else
    printf("not a valid date!");

	

	return 0;
}

//by buggeduplife02
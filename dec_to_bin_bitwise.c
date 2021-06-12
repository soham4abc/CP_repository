#include<stdio.h>
void binary(unsigned int);

int main()
{
	unsigned int num,r;
	printf("Enter the decimal integer:");
	scanf("%u,&num");
	binary(num);
}
void binary(unsigned int num)
{
	unsigned int m=32768;  //[1000 0000 0000 0000]
	while(m > 0)
	{
		if((num & m)==0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		m=m>>1;
	}
}
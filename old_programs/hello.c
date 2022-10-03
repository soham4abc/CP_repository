#include<stdio.h>
int main()
{
	int quality;
	printf("enter no. of qualities of nunu:<=8\n");
	scanf("%d",&quality);
	switch(quality)
	{
		case 1:
			printf("bokachoda");
			break;
		case 2:
			printf("nakachoda");
			break;	
		case 3:
			printf("dhuti r aishik");
			break;
		case 4:
			printf("nick name nunu");
			break;
		case 5:
		 	printf("naihati aslai barandai asai darash");
			break;
		case 6:
			printf("44 kg weight");
			break;		
		case 7:
			printf("hat trick in masterbating/day");
			break;			
		case 8:
			printf("bokachoda");
			printf("\nnakachoda");
			printf("\ndhuti r aishik");
			printf("\nnick name nunu");
			printf("\nnaihati aslai barandai asai darash");
			printf("\n44 kg weight");
			printf("\nhat trick in masterbating/day");
			break;
		default:
			printf("\n Haringatar Donn!!");
	}
	return 0;
}
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

double TwoPointDist(int x1, int y1, int x2, int y2)
{
	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

double TriangleArea(int x1, int y1, int x2, int y2, int x3, int y3)
{
	double a = TwoPointDist(x1,y1,x2,y2);
	double b = TwoPointDist(x2,y2,x3,y3);
	double c = TwoPointDist(x3,y3,x1,y1);
	
//	printf("%lf\n",a);
//	printf("%lf\n",b);
//	printf("%lf\n",c);
	
	
	double s = (a+b+c)/2;
	
//	printf("%lf\n",s);
	
	if((s<a || s<b) ||(s<b || s<c) || (s<c || s<a) || (s<a && s<b && s<c))
		return sqrt(-1*(s*(s-a)*(s-b)*(s-c)));
	
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int CheckPointInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{
	double A1 = TriangleArea(x1, y1, x2, y2, x, y);
//	printf("\n%lf\n",A1);
	double A2 = TriangleArea(x2, y2, x, y, x3, y3);
//	printf("%lf\n",A2);
	double A3 = TriangleArea(x1, y1, x, y, x3, y3);
//	printf("%lf\n",A3);
	
	float A = (float)TriangleArea(x1, y1, x2, y2, x3, y3);
//	printf("%lf\n",A);
	
	float total = A1+A2+A3;
	printf("\n%f",total);
    printf("\n%f",A);


	if(total==A)
	return 1;
    else
	return 0;
}


int main()
{
	
	double d = TriangleArea(1,0,6,0,4,3);
	printf("\n%lf",d);
	bool b = CheckPointInside(1,0,6,0,4,3,4,2);
	printf("\n%d",b);
	
	return  0;
}
#include<stdio.h> 
#include<stdlib.h> 
#include<math.h> 
struct point 
{ 
float x,y; 
}a,b,c; 
float distance(struct point a,struct point b); 
struct point mid(struct point a,struct point b); 
float ar(struct point a,struct point b,struct point c); 
int main() 
{ 
printf("Enter 1 for finding the distance \n 2 for finding the middle point \n 3 for finding the area of the triangle \n"); 
int a1; 
float d1,area; 
struct point a,b,c,d; 
scanf("%d",&a1); 
switch(a1) 
{ 
case 1: 
printf("Enter the coordinates of the first point:-\n"); 
scanf("%f%f",&a.x,&a.y); 
printf("Enter the cordinates of the second point:-\n"); 
scanf("%f%f",&b.x,&b.y); 
d1=distance(a,b); 
printf(" DISTANCE :-%f \n:",d1); 
break; 
case 2: 
printf("Enter the coordinates of the first point:-\n"); 
scanf("%f%f",&a.x,&a.y); 
printf("Enter the cordinates of the second point:-\n"); 
scanf("%f%f",&b.x,&b.y); 
d=mid(a,b); 
printf("The point is:- %f,%f",d.x,d.y); 
break; 
case 3: 
printf("Enter the coordinates of the first point:\n"); 
scanf("%f%f",&a.x,&a.y); 
printf("Enter the cordinates of the second point:\n"); 
scanf("%f%f",&b.x,&b.y); 
printf("Enter the coordinates of the third point:\n"); 
scanf("%f%f",&c.x,&c.y); 
area=ar(a,b,c); 
printf(" AREA :-%f",area); 
} 
} 
float distance(struct point a1,struct point b1) 
{ 
float d1=sqrt(((b1.x-a1.x)*(b1.x-a1.x))+((b1.y-a1.y)*(b1.y-a1.y))); 
return d1; 
} 
struct point mid(struct point a,struct point b) 
{ 
struct point c; 
c.x=(a.x+b.x)/2; 
c.y=(a.y+b.y)/2; 
return c; 
} 
float ar(struct point a,struct point b,struct point c) 
{ 
float v=(a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y))/2; 
if(v<0) 
v=v*-1; 
return v; 
}
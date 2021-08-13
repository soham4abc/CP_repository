#include<stdio.h> 
#include<stdlib.h> 
struct point 
{ 
float x,y; 
}; 
struct point addition(struct point a,struct point b); 
struct point subtraction(struct point a,struct point b); 
struct point multiplication(struct point a,struct point b); 
struct point division(struct point a,struct point b); 
int main() 
{ 
printf("Enter 1 for addition 2 for subtraction 3 for multiplication and 4 for division\n"); 
printf("Enter your choice:-"); 
int a; 
scanf("%d",&a); 
struct point c,d; 
printf("\nEnter the real and imaginary part of the first complex number:-"); 
scanf("%f%f",&c.x,&c.y); 
printf("\nEnter the real and imaginary part of the second complex number"); 
scanf("%f%f",&d.x,&d.y); 
struct point f,m,di,s; 
switch(a) 
{ 
case 1: 
f=addition(c,d); 
printf("The Answer is :%f+%fj",f.x,f.y); 
break; 
case 2: 
s=subtraction(c,d); 
printf("The answer is: %f+%fj",s.x,s.y); 
break; 
case 3: 
m=multiplication(c,d); 
printf("The answer is: %f+%fj",m.x,m.y); 
break; 
case 4: 
di=division(c,d); 
printf("The answer is :%f+%fj",di.x,di.y); 
break; 
default: 
printf("Wrong Input"); 
} 
} 
struct point addition(struct point c,struct point d) 
{ 
struct point y; 
y.x=c.x+d.x; 
y.y=c.y+d.y; 
return y; 
} 
struct point subtraction(struct point c,struct point d) 
{ 
struct point y; 
y.x=c.x-d.x; 
y.y=c.y-d.y; 
return y; 
} 
struct point multiplication(struct point c,struct point d) 
{ 
struct point y; 
y.x=((c.x*d.x)-(c.y*d.y)); 
y.y=((c.x*d.y)+(c.y*d.x)); 
return y; 
} 
struct point division(struct point c,struct point d) 
{ 
struct point y;
// (x+iy) * (u+iv) = (xu-yv) + i(yu+xv)
y.x=((c.x*d.x)+(c.y*d.y))/(d.x*d.x+d.y*d.y); 
y.y=((c.y*d.x)-(c.x*d.y))/(d.x*d.x+d.y*d.y); 
return y; 
} 
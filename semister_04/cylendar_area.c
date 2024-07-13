#include<stdio.h>

int main(){
    float r,h;
    printf("Please Input The Radius Of The Cylendar : ");
    scanf("%f",&r); 
    printf("Please Input The Height Of The Cylendar : ");
    scanf("%f",&h); 
    float area=3.1416*(r*r)*h;
    printf("The Area Of The Circle Is : %f\n",area);
}
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value for A: ");
    scanf("%d", &a);
    printf("Enter the value for B: ");
    scanf("%d", &b);
    printf("Enter the value for C: ");
    scanf("%d", &c);
    int sum,avg;
    sum=a+b+c;
    printf("%d\n",sum);
    avg=sum/3;
    printf("%d",avg);
}

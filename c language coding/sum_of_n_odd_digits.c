//  Write a c program to find the sum of N odd digits using for loop 

#include<stdio.h>
int main(){
    int n,sum=0,count=0,i=1;
    scanf("%d",&n);
    while(count!=n){
        printf("%d ",i);
        sum=sum+i;
        i=i+2;
        count=count+1;
        }
    printf("\n%d",sum);
    return 0;
}
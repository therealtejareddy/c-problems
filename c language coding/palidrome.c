// Write a C program to check the input entered by the user is palindrome or not using while loop.

#include<stdio.h>
int main(){
    int n,a,r,s=0;
    scanf("%d",&n);
    a=n;
    while(a>0){
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    if(n==s){
        printf("Palindrome Number");
    } else {
        printf("Not a Palindrome Number");
    }
}
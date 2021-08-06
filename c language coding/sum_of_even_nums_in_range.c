// Write a c program to find the sum of even digits using while loop in a Given range


#include<stdio.h>  
int main()  
{  
    int sum = 0,start,end;
    scanf("%d%d",&start,&end);
    while(start <= end)  
    {  
        if(start % 2==0 )  
        {  
            sum = sum + start;  
        }  
        start++;
         
    }  
    printf("%d",sum);
    return 0;  
}  
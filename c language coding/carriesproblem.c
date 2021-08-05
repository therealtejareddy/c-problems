// Write a C program for a function that accepts x = 898718, y = 10024. 
// Calculate the sum and return the total number of carries.

#include<stdio.h>
int numberOfCarries(int num1 , int num2)
{
    int carry = 0, sum, p, q, count = 0;
    while((num1!=0)&&(num2!=0))
    {
        p = num1 % 10;
        q = num2 % 10;
        sum = carry + p + q;
        if(sum>9)
        {
            carry = 1;
            count++;
        }
        else
        {
            carry = 0;
        }
        num1 = num1/10;
        num2 = num2/10;
    }
    return count;
}

int main()
{
   int x = 898718, y = 10024, a;
   a = numberOfCarries(x, y);
   printf("%d",a);
   return 0;
}
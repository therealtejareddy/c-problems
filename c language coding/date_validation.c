// write a program to check whether the given date is valid or not using function with out return type with arguments?

#include <stdio.h>
void date_validation(int dd,int mm,int yyyy);
int dd,mm,yyyy;
int main() {
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    date_validation(dd,mm,yyyy);
    return 0;
}
void date_validation(int dd,int mm,int yyyy) {//check year
    if(yyyy>=1900 && yyyy<=9999) {
        //check month
        if(mm>=1 && mm<=12) {
            //check days
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=28) && (mm==2))
                printf("Date is valid.\n");
            else if(dd==29 && mm==2 && (yyyy%400==0 ||(yyyy%4==0 && yyyy%100!=0)))
                printf("Date is valid.\n");
            else
                printf("Day is invalid.\n");
        } else {
            printf("Month is not valid.\n");
        }
    } else {
        printf("Year is not valid.\n");
    }
}
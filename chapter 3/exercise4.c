/*
 * Name: @7thCoder
 * Description: This program returns the date number of the year
 * Date: 04/08/2023
*/

#include<stdio.h>
#include<stdlib.h>

int day_to_year(int day, int month, int year){ 

    int i,leap;

    static int daytab[2][13] = { 
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} 
    };

    int (*ptr)[13]=daytab;


    leap = year%4 == 0 && year%100 != 0 || year%400 == 0; 

    for(i=0;i<month;i++){
        day+= ptr[leap][i];
    }

    return day;
}

int main(){
     
    printf("the day is : %d",day_to_year(7,7,2003));

    return 0;
}


/* 
   File:   main.cpp
   Author: Jamil Batshoun
   Created: October 3rd, 2016, 9:50 AM
   Purpose:  Leap Year
 */


#include <iostream>   
using namespace std; 

int main(int argc, char** argv) {
 
    unsigned short year,month;
    
    cout<<"Type in year and month to return the number of days in a month"<<endl;
    cout<<"Month 1 to 12 and Year 1500 to 3000"<<endl;
    cin>>year>>month;
    
    if(year<1500||year>3000){
        cout<<"Bad Year "<<endl;
        return 1;
    }
    if(month<1||month>12){
        cout<<"Bad Month"<<endl;
        return 1;
    }
    
    switch(month){
        case 1: cout<<"There are 31 days in January, "<<year<<endl;break;
        case 2: {
            cout<<"There are "<<
                  ((((year%4==0)&&(year%100!=0))||(year%400==0))?"29":"28")<<
                  " days in February, "<<year<<endl;
            break;
        }
        case 3: cout<<"There are 31 days in March, "<<year<<endl;break;
        case 4: cout<<"There are 30 days in April, "<<year<<endl;break;
        case 5: cout<<"There are 31 days in May, "<<year<<endl;break;
        case 6: cout<<"There are 30 days in June, "<<year<<endl;break;
        case 7: cout<<"There are 31 days in July, "<<year<<endl;break;
        case 8: cout<<"There are 31 days in August, "<<year<<endl;break;
        case 9: cout<<"There are 30 days in September, "<<year<<endl;break;
        case 10: cout<<"There are 31 days in October, "<<year<<endl;break;
        case 11: cout<<"There are 30 days in November, "<<year<<endl;break;
        case 12: cout<<"There are 31 days in December, "<<year<<endl;break;
    }
    
    
    return 0;
}
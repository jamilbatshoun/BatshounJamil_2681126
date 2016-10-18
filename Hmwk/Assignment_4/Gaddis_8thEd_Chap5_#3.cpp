/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on October 17, 2016, 6:01 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int year=1;
    float increasePerYear=1.5;
    float totalIncreasingLevel=0;
    cout<<"---------------"<<endl;
    cout<<"Year\t\t\tTotal Increasing Level"<<endl;
    cout<<"---------------"<<endl;
    
    while(year<=25)   //Problem asks to go no further than 25 years.
    {
        totalIncreasingLevel+=increasePerYear;
        cout<<year<<"\t\t\t"<<totalIncreasingLevel<<"\tmillimeters"<<endl;
        
        year++;  //Increment year to find next value
    }
   
    
    return 0;
}


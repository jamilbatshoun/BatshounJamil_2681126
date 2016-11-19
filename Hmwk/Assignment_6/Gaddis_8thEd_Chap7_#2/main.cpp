/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 18, 2016, 4:00 PM
 * Purpose: chapter 7 #2
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    const int size = 12;
    float rain[size];
    int count;
    float total = 0, avg;
    float highest = rain[0];
    float lowest = rain[0];
    string month[]={"January", "February", "March", "April", "May", "June",
                    "July", "August", "September", "October", "November", 
                    "December"};
    for(count = 0; count < size; count++){
        cout << "Please enter the rain fall for the month of "<<month[count]
                <<": ";
        cin >> rain[count];
        if(rain[count]<0){
            cout<<"Please only enter only numbers greater than zero."<<
                    "The program will stop now.";
            return 0;
        }    
    }
    
    for(count = 0; count < size; count++){
        total += rain[count];
        
    }
    
    avg = 1.0f*total/size;
    
    for(count = 1; count < size; count++){
        
        if(rain[count] > highest)
            highest = rain[count];
        
    }
    
    for (count = 1; count < size; count++){
        if (rain[count] < lowest)
            lowest = rain[count];
    }
    cout<<"The total rainfall for the year was: "<<total<<" inches."<<endl;
    cout<<"The average rainfall for the year was: "<<avg<<" inches."<<endl;
    cout<<"The highest rainfall for the year was: "<<highest<<" inches."<<endl;
    cout<<"The lowest rainfall for the year was: "<<lowest<<" inches."<<endl;
   
    return 0;
}


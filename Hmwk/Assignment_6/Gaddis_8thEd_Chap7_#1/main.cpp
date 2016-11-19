/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 18, 2016, 2:10 PM
 * Purpose: chapter 7 #1
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
   const int size = 10;
    int arr[size];
    int highest = arr[0];
    int count;
    cout<<"Please enter 10 numbers in order to see which one is the largest."
            <<" Press enter after every number."<<endl;
    for(count = 0; count < size; count++){
        cin>>arr[count];
    }
    
    for(count = 0; count < size; count++){
        if(arr[count]>highest)
            highest = arr[count];
    }
    
    cout<<"The highest value is "<<highest<<".";
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 23, 2016, 8:46 AM
 * Purpose: chapter 8 #1
 */

#include <iostream>

using namespace std;


void linsearch(int[],int,int);

int main1(int argc, char** argv) {
    //18 elements in array
    int size = 18;
    //user input
    int num;
    //acntNum stores 18 account numbers in a single-dimensional array.
    int acntNum[size]= { 
        5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002
    };
    
    cout<<"Enter a valid charge account number: ";
    cin>>num;
    cout<<endl<<endl<<endl;
    
    linsearch(acntNum,size,num);
    
    return 0;
}

void linsearch(int arr1[],int size, int num){
    int index = 0;
    //we do not need a position variable to return the number's position in the 
    //index because we are only telling the user whether or not the number
    //they're looking for exists.
    bool found = false;
    
    while(index < size && !found){
        if (arr1[index] == num){
            found = true;
            cout<<"That is a valid account number."<<endl;
        }
        
        //If after the entire array is searched and no match number is found
        //The user is notified that their number is invalid.
        else if(arr1[index] == arr1[size-1] && !found){
          cout<<"That is not a valid account number."<<endl;
        }
        index++;
    }
}
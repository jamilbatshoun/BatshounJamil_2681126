/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 23, 2016, 10:23 AM
 * Purpose: chapter 8 #2
 */

#include <iostream>

using namespace std;

void linsearch2(int[],int,int);

int main(int argc, char** argv) {
    //10 elements in array
    int size = 10;
    //user input
    int num;
    //acntNum stores 10 account numbers in a single-dimensional array.
    int lottoNum[size]= { 
        13579,  26791,  26792,  33445,  55555,
        62483,  77777,  79422,  85647,  93121

    };
    
    cout<<"Enter the winning 5 digit lottery number: ";
    cin>>num;
    cout<<endl<<endl<<endl;
    
    linsearch2(lottoNum,size,num);
    
    return 0;
}

void linsearch2(int arr1[],int size, int num){
    int index = 0;
    //we do not need a position variable to return the number's position in the 
    //index because we are only telling the user whether or not the number
    //they're looking for exists.
    bool found = false;
    
    while(index < size && !found){
        if (arr1[index] == num){
            found = true;
            cout<<"You won the lottery!"<<endl;
        }
        
        //If after the entire array is searched and no match number is found
        //The user is notified that their number is invalid.
        else if(arr1[index] == arr1[size-1] && !found){
          cout<<"None of your lottery tickets have the winning number."<<endl;
        }
        index++;
    }
}
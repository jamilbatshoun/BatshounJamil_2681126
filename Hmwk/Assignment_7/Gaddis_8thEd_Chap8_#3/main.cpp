
/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 23, 2016, 10:43 AM
 */

#include <iostream>

using namespace std;

void binSearch( int[], int, int);

int main(int argc, char** argv) {
    const int size = 10; //10 elements in array
    int num; //user input
    //lottoNum stores 10 account numbers in a single-dimensional array.
    int lottoNum[size]= { 
        13579,  26791,  26792,  33445,  55555,
        62483,  77777,  79422,  85647,  93121
    };
    
    cout<<"Enter the winning 5 digit lottery number: ";
    cin>>num;
    cout<<endl<<endl<<endl;
    
    binSearch( lottoNum, size, num);
    
    return 0;
}

void binSearch(int arr2[],int size, int num){
    int first = 0,
        last = size -1,
        middle,
        position = -1;
    
    bool found = false;
    
    while(!found && first <= last){
        middle = (first + last) / 2;
        if(arr2[middle] == num){
            found = true;
            position = middle;
        }
        else if(arr2[middle] > num)
            last = middle - 1;
        else if(arr2[middle] < num)
            first = middle + 1;
        
        //cout<<"Congratulations! You won!";
            //cout<<"That is not one of your lotto numbers.";
        
    }
    if(position != -1){
        cout<<"Congratulations! You won!";
    }
    else
        cout<<"You didn't win this time.";
}


/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on December 2, 2016, 3:49 PM
 * Purpose: chapter 8 #4
 */

#include <iostream>

using namespace std;

void selsort4(int [], int, int);
void binsearch4(int[],int,int);

int main(int argc, char** argv) {
    //18 elements in array
    const int SIZE = 18;
    //user input
    int num;
    //acntNum stores 18 account numbers in a single-dimensional array.
    int acntNum4[SIZE]= { 
        5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002
    };
    
    cout<<"Enter a valid charge account number: ";
    cin>>num;
    cout<<endl<<endl<<endl;
    
    selsort4(acntNum4,SIZE,num);
    
    binsearch4(acntNum4,SIZE,num);
    
    return 0;
}

void selsort4(int arr4[], int size, int num){
    int startScan, minIndex, minValue;
    for (startScan = 0; startScan < (size - 1); startScan++){
        minIndex = startScan;
        minValue = arr4[startScan];
        for(int index = startScan + 1; index < size; index++){
            if(arr4[index] < minValue){
                minValue = arr4[index];
                minIndex = index;
            }
        }
        arr4[minIndex] = arr4[startScan];
        arr4[startScan] = minValue;
    }
}

void binsearch4(int arr4[],int size, int num){
    int first = 0,
        last = size -1,
        middle,
        position = -1;
    
    bool found = false;
    
    while(!found && first <= last){
        middle = (first + last) / 2;
        if(arr4[middle] == num){
            found = true;
            position = middle;
        }
        else if(arr4[middle] > num)
            last = middle - 1;
        else if(arr4[middle] < num)
            first = middle + 1;
    }
    if(position == -1)
        cout<<"That is not a valid account number.";
    else
        cout<<"That account number is valid.";
}
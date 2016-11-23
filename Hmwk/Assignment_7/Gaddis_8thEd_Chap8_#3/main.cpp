/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 23, 2016, 10:43 AM
 */

#include <iostream>

using namespace std;

void binSearch( int[], int, int);

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
    
    binSearch( lottoNum, size, num);
    return 0;
}

void binSearch(int arr2[],int size, int num){

}
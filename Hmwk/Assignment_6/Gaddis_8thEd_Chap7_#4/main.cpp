/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 18, 2016, 6:32 PM
 * Purpose: chapter 7 #4
 */

#include <iostream>

using namespace std;

int arrFunc(int);
int main(int argc, char** argv) {
    int n;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<"This program  shows which numbers between 1 and 10 are larger than"
            <<" a number you choose within that range."<<endl;
    cout<<" Please enter a number: ";
    cin>>n;
    
    arrFunc(n);
    return 0;
}

int arrFunc(int n){
    int count = 0;
   
    
    for(count = 0; count < 10; count++){
        int  arr[]={1,2,3,4,5,6,7,8,9,10};
        if(n < arr[count])
            cout<<arr[count]<<endl;
    }

}

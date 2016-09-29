/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 28, 2016, 6:47 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int gasTank;
    int miles;
    cout <<"Please enter the capacity of the gas tank."<< endl;
    
    cin >> gasTank;
    
    cout <<"How many miles can the car be driven on a full tank?"<<endl;
    
    cin>> miles;
    
    cout<<"The car gets "<<miles/gasTank<<" miles per gallon."<<endl;
    return 0;
}


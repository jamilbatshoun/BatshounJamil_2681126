/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 19, 2016, 1:13 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int a=28;
    int b=32;
    int c=37;
    int d=24;
    int e=33;
    float sum;
    float avg;
    
    sum=a+b+c+d+e;
    avg= sum/5;
    
    cout<<"The average of 28,32,37,24,33 is "<<avg<<endl;
    
    return 0;
}


/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on October 10, 2016, 10:30 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int n;
    int sum =0;
    
    cout<<"Enter a Positive integer:";
    cin >> n;
    for(int i=1;i<=n;++i){
        sum+=i;
    }
    cout<<"Sum = "<< sum;
    return 0;
}


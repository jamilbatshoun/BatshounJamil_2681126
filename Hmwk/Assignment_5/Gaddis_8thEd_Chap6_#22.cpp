/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 2, 2016, 8:25 AM
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool isPrime(int);
float aprxSqrt(int);

int main(int argc, char** argv) {
    int count =0, columns=10;
    for(int i=-100;i<=10000;i++){
        if(isPrime(i)){
            cout<<setw(3)<<i<<" ";
            count++;
            if(count==columns){
                cout<<endl;
            }
        }
    }

    return 0;
}
float aprxSqrt(int n){
    float guess=n/2,r;
    float tol=1e-1f;
    do{
        r=n/guess;
        guess=(r+guess)/2;
        
    }while((guess-r)>tol);
        return guess;
}

bool isPrime(int n){
    if(n<2) return false;
    
    float sqrtn=aprxSqrt(n);
    
    //float sqrtn=sqrt(n);
    //for(int i=2;i<=n-1;i++) //inefficient
    for(int i=2;i<=sqrtn;i++)//efficient
        if(n%i==0)return false;
}

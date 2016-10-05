/* 
 * File:   a b sort.cpp
 * Author: Jamil Batshoun
 *
 * Created on October 5, 2016, 10:27 PM
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    char a,b;                  //char is used for storing letters. int does not
    
    cout<<"Enter two letters and they will be alphabetically sorted"<<endl;
    
    cout<<"First letter: ";
    cin >>a;
    
    cout<< "Second letter:";
    cin>> b;
    
    if( a<b){                   //The values of a and b are compared
        cout<< a<<","<<b<<endl; //If a is less than b then a is placed first
    }                           //and vise versa
    else{
        cout<<b<<","<<a<<endl;
    }
    return 0;
}


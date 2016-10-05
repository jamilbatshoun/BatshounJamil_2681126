/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 *
 * Created on October 5, 2016, 10:27 PM
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    char a,b,c;                
    
    cout<<"Enter two letters and they will be alphabetically sorted"<<endl;
    
    cout<<"First letter: ";
    cin >>a;
    
    cout<< "Second letter: ";
    cin>> b;
    
    cout<< "Third letter: ";
    cin>> c;
    
    if( a<b&&a<c&&b<c){                   
        cout<< a<<","<<b<<","<<c<<endl;
    }                          
   
    return 0;
}
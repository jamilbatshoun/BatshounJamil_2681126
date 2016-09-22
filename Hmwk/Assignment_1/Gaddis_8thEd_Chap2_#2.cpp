
/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 *
 * Created on September 14, 2016, 12:46 PM
 * Purpose: Chapter 2 programming challenges #2: Compute 58 percent of $8.6
 * million dollars.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Create a variable to store the product of 58% or .58 and 8.6.
    int revenue;
    
    //Calculation is here.
    revenue= .58*8.6;
    
    //Output result of prior calculation.
    cout<<"The East Coast division of the company will produce $"<<revenue<<
            " million in sales this year."<<endl;
    
    return 0;
}


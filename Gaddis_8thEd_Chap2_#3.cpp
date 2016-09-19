/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 *
 * Created on September 19, 2016, 11:32 AM
 * Purpose: Chapter 3 #3: Sales Tax
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    int purPrice=95;
    float tax= .06;
    int salesTax;
    
    salesTax=purPrice*tax;
    
    cout<<"The total sales tax of a purchase of $95 with a 4% state sales tax "
            "and a 2% county sales tax is $"<<salesTax<<endl;
    
    return 0;
}


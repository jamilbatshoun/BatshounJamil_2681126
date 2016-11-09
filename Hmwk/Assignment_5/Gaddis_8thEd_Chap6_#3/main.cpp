/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 7, 2016, 10:11 PM
 * Purpose: chapter 6 #3
 */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int getSales(string);
void findHighest(int, int, int, int);

int main(int argc, char** argv) {

    int northE,southE,northW,southW;
    northE=getSales("Northeast");
    southE=getSales("Southeast");
    northW=getSales("Northwest");
    southW=getSales("Southwest");
    
    findHighest(northE,southE,northW,southW);
   
    return 0;
}

int getSales(string division){
    int sales;
    cout<<"Enter the quarterly sales figure for the "<<division
        <<" division."<<endl;
    cin>>sales;
    if(sales<0){
        cout<<"Please rerun the program and enter a positive value."<<endl;
        exit(0);
    }
    return sales;
}

void findHighest(int northE,int southE,int northW,int southW){
    if(northE>=southE&&northE>=northW&&northE>=southW){
        cout<<"The Northeast division had the highest sales with $"<<northE
                <<endl;
    }
    if(northW>=southE&&northW>=northE&&northW>=southW){
        cout<<"The Northwest division had the highest sales with $"<<northW
                <<endl;
    }
    if(southE>=northE&&southE>=northW&&southE>=southW){
        cout<<"The Southeast division had the highest sales with $"<<southE
                <<endl;
    }
    if(southW>=southE&&southW>=northW&&southW>=northE){
        cout<<"The Southwest division had the highest sales with $"<<southW
                <<endl;
    }
}
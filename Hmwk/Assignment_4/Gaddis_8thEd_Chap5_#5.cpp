/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 *
 * Created on October 17, 2016, 6:38 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    float charges=2500;
    cout<<"Projected rate for next six years"<<endl;
    cout<<"----------------"<<endl;
    cout<<"Year\t Charges"<<endl;
    cout<<"----------------"<<endl;
    
    for(int i=1; i<=6;i++)
    {
        cout<<i<<"\t"<<charges<<endl;
        
        charges+=charges*0.04;
    }
    return 0;
}


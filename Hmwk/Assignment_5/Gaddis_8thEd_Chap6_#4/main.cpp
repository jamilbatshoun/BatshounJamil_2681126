/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 7, 2016, 11:45 PM
 * Purpose: chapter 6 #4
 */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int getNumAccidents(string);
void findLowest(int, int, int, int, int);

int main(int argc, char** argv) {
    int north, south, east, west, central;
    north   = getNumAccidents("Northern");
    south   = getNumAccidents("Southern");
    east    = getNumAccidents("Eastern");
    west    = getNumAccidents("Western");
    central = getNumAccidents("Central");
    
    findLowest(north, south, east, west, central);
    return 0;
}

int getNumAccidents( string region){
    int accidents;
    cout<<"Please enter the number of reported automobile accidents last year"<<
          " for the "<<region<<" region."<<endl;
    cin>>accidents;
    if(accidents<0){
        cout<<"Please rerun the program and enter a positive number of"<<
                " reported accidents."<<endl;
        exit(0);
    }
    return accidents;
}

void findLowest(int north, int south, int east, int west, int central){
    if(north<=south&&north<=east&&north<=west&&north<=central){
        cout<<"The Northern region had the fewest reported automobile"<<
                " accidents last year with "<<north<<"."<<endl;
    }
    if(west<=south&&west<=east&&west<=north&&west<=central){
        cout<<"The Western region had the fewest reported automobile"<<
                " accidents last year with "<<west<<"."<<endl;
    }
    if(south<=north&&south<=east&&south<=west&&south<=central){
        cout<<"The Southern region had the fewest reported automobile"<<
                " accidents last year with "<<south<<"."<<endl;
    }
    if(east<=south&&east<=north&&east<=west&&east<=central){
        cout<<"The Eastern region had the fewest reported automobile"<<
                " accidents last year with "<<east<<"."<<endl;
    }
    if(central<=south&&central<=east&&central<=west&&central<=north){
        cout<<"The Central region had the fewest reported automobile"<<
                " accidents last year with "<<central<<"."<<endl;
    }
}
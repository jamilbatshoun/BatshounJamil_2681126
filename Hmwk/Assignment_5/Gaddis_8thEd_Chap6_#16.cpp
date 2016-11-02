/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 2, 2016, 8:53 AM
 * Purpose: Calculate how a population increases or decreases
 */

#include <iostream>

using namespace std;

int population(int,float,float);

int main(int argc, char** argv) {

    int pop,birth,death,years;
    
    cout<<"This program calculates the population as a function of time"<<endl;
    cout<<"Population?"<<endl;
    cin>>pop;
    cout<<"Birth Rate per year?"<<endl;
    cin>>birth;
    cout<<"Death Rate per year?"<<endl;
    cin>>death;
    cout<<"How many years to predict?"<<endl;
    cin>>years;
    
    for(int year=1;year<=years;year++){
        pop=population(pop,1.0f*death/pop,1.0f*birth/pop);
        cout<<"Year "<<year<<" = population of "<<pop<<endl;
    }
    
    return 0;
}

int population(int pop,float death,float birth){
    return pop*(1+birth-death);
}
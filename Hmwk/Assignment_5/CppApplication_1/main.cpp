/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 9, 2016, 10:40 AM
 * Purpose: chapter 6 #5
 */

#include <iostream>
#include <cmath>

using namespace std;

void fallingDistance(int);

int main(int argc, char** argv) {
    int time=1;
    do{
        void fallingDistance(time);
        cout<<"The falling distance after "<<time<<" seconds is"<<dist<<" meters."
            <<endl;
    }while(time<=10);
    return 0;
}

void fallingDistance(int time){
    int dist;
    dist=.5*(time)^2;
    cout<<"The falling distance after "<<time<<" seconds is"<<dist<<" meters."
            <<endl;
}
/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 9, 2016, 10:40 AM
 * Purpose: chapter 6 #5
 */

#include <iostream>
#include <cstdlib>

using namespace std;

float fallingDistance(int);

int main(int argc, char** argv) {
    float dist;
    int time=1;
    
    // Counter is used to repeat statement for each time value
    while(time<=10){
       dist=fallingDistance(time);
       cout<<"After "<<time<<" seconds the object will have fallen "<<dist
               <<" meters."<<endl;
      time++;
    }
  
    return 0;
}

//fallingDistance handles the math
float fallingDistance(int time){
    float g = 9.8;
    float dist;
    dist = 0.5*9.8*time*time;
    
    
    //dist's value is returned to main function
    return dist;
}
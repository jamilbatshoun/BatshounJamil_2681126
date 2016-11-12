/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 11, 2016, 11:09 PM
 * Purpose: chapter 6 #8
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void coinToss();

int main(int argc, char** argv) {
    
    //sets range of random number generator used later
    
    //total tosses
    int ttoss;
    // first toss
    int ftoss=1;
    cout<<"How many times do you want to toss a coin?"<<endl;
    cin>>ttoss;
    do{
        coinToss();
        ftoss++;
    }while (ftoss<=ttoss);
    
    return 0;
}

void coinToss(){
    int side;
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 2;
    unsigned seed = time(0);
    side = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    if(side==1){
        cout<<"Heads"<<endl;
    }
    else {
        cout<<"Tails"<<endl;
    }
    
}
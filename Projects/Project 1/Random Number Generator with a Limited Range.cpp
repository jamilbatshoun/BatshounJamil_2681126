/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on October 25, 2016, 7:31 PM
 * Purpose: Random Number Generator with a Limited Range
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    
    const int MIN_VALUE = 1;    //Possible values range from 1 to 5
    const int MAX_VALUE = 5;
    int num1;
  
    
    unsigned seed = time(0);
    srand(seed);
    
    num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    cout<<num1<<endl;
    return 0;
}


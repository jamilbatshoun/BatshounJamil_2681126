/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 11, 2016, 8:24 PM
 */

#include <iostream>

using namespace std;

float celcius(float);
int main(int argc, char** argv) {
    float ftemp=0;
    float ctemp;
    
    while(ftemp<=20){
    
        ctemp = celcius(ftemp);
        cout<<ftemp<<" degrees Fahrenheit is "<<ctemp<<" Celcius."<<endl;
        ftemp++;
    }
    return 0;
}

 float celcius(float ftemp){
    float ctemp;
    
    ctemp = (ftemp-32)*5/9;
    return ctemp;
}
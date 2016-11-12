/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 11, 2016, 7:08 PM
 */

#include <iostream>

using namespace std;

float kineticEnergy(float, float);
int main(int argc, char** argv) {
    float mass;
    // velocity variable: velo
    float velo;
    // kinetic energy variable: ke
    float ke;
    
    cout<<"Please enter your objects mass in kilograms: ";
    cin>>mass;
    cout<<endl<<"Please enter it's velocity in meters per second: ";
    cin>>velo;
    cout<<endl;
    
    //passing mass and velocity values to kineticEnergy function to calculate
    //the kinetic energy
    ke=kineticEnergy(mass, velo);
    cout<<" The objects kinetic energy is: "<<ke<<" Joules.";
    return 0;
}

// kineticEnergy function calculates kinetic energy function
float kineticEnergy(float mass, float velo){

    float ke;
    ke= 0.5*mass*velo*velo;
    return ke;
}
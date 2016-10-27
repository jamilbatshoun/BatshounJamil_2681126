/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on October 26, 2016, 10:56 PM
 * Purpose: Revised Project 1 with functions included
 */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>

using namespace std;

const int MIN_VALUE = 1;    //Possible values range from 1 to 2
const int MAX_VALUE = 2;

void func1();
void func2();
void func3();
void func4();

int main(int argc, char** argv) {
    
    int num;
    int n = 1;
    char play;
    
    unsigned seed = time(0);
    srand(seed);
    num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    switch(n<=3){
            case 1: func1();break;
            case 2: func2();break;
            case 3: func3();break;
            case 4: func4(); 
    }
    
    cout<<"Welcome! Would you like to play a game of Hangman?"<<endl;
    cout<<"Type 'y' for Yes and 'n' for No."<<endl;
    cin>>play;
    cout<<endl;
    if(play=='y'||play=='Y'){
        cout<<"Alright! Lets play!"<<endl;
        cout<<"Use only lower case letters"<<endl;
        cout<<"Hint: the answers are three letter names of house pets."<<endl;
        cout<<"Good Luck."<<endl;
        
        if (num==1){
            
            
            
        }
    }
    else {
        cout<<"Okay, see you next time!";
    }
    return 0;
}

void func1(){
    
    cout<<"         _____   "<<endl;
    cout<<"        |/    |  "<<endl;
    cout<<"        |        "<<endl;      
    cout<<"        |        "<<endl;
    cout<<"        |        "<<endl;
    cout<<"      __|__      "<<endl;
}

void func1(){
    cout<<"         _____   "<<endl;
    cout<<"        |/    |  "<<endl;
    cout<<"        |     O  "<<endl;      
    cout<<"        |        "<<endl;
    cout<<"        |        "<<endl;
    cout<<"      __|__      "<<endl;
}

void func2(){
    cout<<"         _____   "<<endl;
    cout<<"        |/    |  "<<endl;
    cout<<"        |     O  "<<endl;      
    cout<<"        |    -|- "<<endl;
    cout<<"        |        "<<endl;
    cout<<"      __|__      "<<endl;
}

void func4(){
    cout<<"         _____   "<<endl;
    cout<<"        |/    |  "<<endl;
    cout<<"        |     O  "<<endl;      
    cout<<"        |    -|- "<<endl;
    cout<<"        |    / \\"<<endl;
    cout<<"      __|__      "<<endl;
}
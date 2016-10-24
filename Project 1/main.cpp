/* 
 * File:   project1.cpp
 * Author: Jamil Batshoun
 * Created on October 24, 2016 at 11:42 AM
 * Purpose:  Project 1
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    char play;
    cout<<"Welcome! Would you like to play a game of Hangman?"<<endl;
    cout<<"Type 'y' for Yes and 'n' for No."<<endl;
    cin>>play;
    cout<<endl;
    if(play=='y'||play=='Y'){
        cout<<"Alright! Lets play!"<<endl;
        cout<<"The answers are all names of cities in Italy. Good Luck."<<endl;
        cout<<"Round 1  _____    "<<endl;
        cout<<"        |/    |   "<<endl;
        cout<<"        |     O   "<<endl;
        cout<<"        |    -|-  "<<endl;
        cout<<"        |    / \\ "<<endl;
        cout<<"      __|__       "<<endl;
        cout<<"        _ _ _ _   "<<endl;
        
        
    
    }
    else {
        cout<<"Okay, see you next time!";
    }
    return 0;
}
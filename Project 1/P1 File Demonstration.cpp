/* 
 * File:   main.cpp
 * Author: Family Computer
 * Created on October 25, 2016, 7:55 PM
 * Purpose: Project 1 File Demonstration
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    string name1;
    string name2;
    string name3;
    string name4;
    string name5;
    

    ifstream inputFile;
    inputFile.open("C:\\Users\\Family Computer\\Desktop\\Jamil's computer class\\project1wordbank.txt");
    
    inputFile>>name1;
    cout<<name1<<endl;
    
    inputFile>>name2;
    inputFile>>name3;
    inputFile>>name4;
    inputFile>>name5;
    
    
    cout<<name5<<endl;
    if(name1=="Milan"){
    
        cout<<"Success!!!"<<endl;
    
    }
    
    inputFile.close();
    return 0;
}


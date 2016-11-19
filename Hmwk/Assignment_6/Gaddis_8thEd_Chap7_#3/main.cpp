/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 18, 2016, 5:20 PM
 * Purpose: chapter 7 #3
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    const int size = 5;
    int typesalsa[size];
    int lowest = typesalsa[0];
    int total = 0, highest = typesalsa[0];
    
    string namesalsa[] = {"mild","medium","sweet","hot","zesty"};
    int count;
    string best, worst;
    
    for(count = 0; count < size; count++){
        cout<<"Please enter the number of "<<namesalsa[count]
                <<" jars sold: ";
        cin>> typesalsa[count];
        cout<<endl;
        while(typesalsa[count]<0){
            cout<<"Enter only positive numbers: ";
            cin>> typesalsa[count];
        }
    }
    
    cout<<endl<<endl<<endl;
    
    for(count = 0; count < size; count++){
        cout<<"For the "<<namesalsa[count]<<" type of salsa "<<typesalsa[count]
                        <<" jars were sold."<<endl;
        if(typesalsa[count] < lowest){
            lowest = typesalsa[count];
            worst = namesalsa[count];
        }
        else if(typesalsa[count] > highest){
            highest = typesalsa[count];
            best = namesalsa[count];
        }
        
         total+= typesalsa[count];
    }
    
    cout<<"The best selling salsa was "<<best<<"."<<endl;
    cout<<"The worst performing salsa was "<<worst<<"."<<endl;
    cout<<"The total number of jars sold was "<<total<<".";
    return 0;
}


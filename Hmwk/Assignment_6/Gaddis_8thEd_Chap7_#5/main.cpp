/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 18, 2016, 6:48 PM
 * Purpose: chapter 7 #5
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    int count, count2;
    
    //a variable the total of each monkey and one for all three
    int total;
    
    //two dimensional array that accepts integer values
    int zoo[3][5];
    int highest = zoo[0][0], lowest = zoo[0][0];
    //Assuming Monday through Friday schedule. a second array is made to handle
    //which day is it.
    string day[5] = {"Monday","Tuesday","Wednesday","Thursday","Friday"};
    string order[3] = {"first","second","last"};
    
    for(count = 0; count < 3; count++){
        for(count2 = 0; count2 < 5; count2++){
            cout<<"How many pounds of food did the "<<order[count]
                    <<" monkey eat on "<<day[count2]<<"?"<<endl;
            cin>>zoo[count][count2];
            while(zoo[count][count2] < 0){
                cout<<"Please enter only positive values: ";
                cin>>zoo[count][count2];
            }
            total += zoo[count][count2];
        }
    }
    for(count = 0; count < 3; count++){
        for(count2 = 1; count2 < 5; count2++){
            if(zoo[count][count2] > highest)
                highest = zoo[count][count2];
            if(zoo[count][count2] < lowest)
                lowest = zoo[count][count2];
            else
                lowest = zoo[0][0];
        }
    }
    
    
    cout<<"The average amount of food eaten per day by all three monkeys was "
            <<total-1<<" lbs."<<endl;
    cout<<" The lowest amount of food eaten per day by any one monkey was "
            <<lowest<<" lbs."<<endl;
    cout<<" The highest amount of food eaten per day by any one monkey was "
            <<highest<<" lbs."<<endl;
   
    
    //decides which monkey ate the most
    
    
        
    return 0;
}


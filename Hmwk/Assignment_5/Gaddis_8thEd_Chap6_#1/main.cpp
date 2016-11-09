/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on November 7, 2016, 12:30 PM
 * Purpose: chapter 6 #1
 */

#include <iostream>
#include <cmath>

using namespace std;

void calculateRetail();

int main(int argc, char** argv) {
    float wcost;
    float mper;
  
        calculateRetail();
    
    return 0;
}

void calculateRetail(){
    float wcost;
    float mper;
    float retail;
    cout<<"Please enter the item's wholesale cost: $";
    cin>>wcost;
    cout<<endl;
    cout<<"Please enter its markup percentage without a percentage symbol: ";
    cin>>mper;
    cout<<endl;
    
    if(wcost>0&&mper>0){
        cout<<"The wholesale cost is    $"<<wcost<<endl;
        cout<<"The markup percentage is "<<mper<<"%"<<endl;
        mper=mper/100;
        retail=wcost+(wcost*mper);
        cout<<"The retail cost is:      $"<<retail<<endl;
    }else{
        cout<<"Please input only positive values."<<endl<<endl;
        return calculateRetail();
        
    }
}
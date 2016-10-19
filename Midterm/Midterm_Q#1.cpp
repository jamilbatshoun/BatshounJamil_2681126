/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on October 19, 2016, 1:51 PM
 * Purpose: Midterm question #1
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    int x;
    cout<<"Please enter a number between 1 and 50 to make an X out of number"
            <<endl;
    cin>>x;
    
    if(x%2==0&&x>1&&x<50){
        cout<<"even"<<endl;
        for(int rows=1;rows<=x;rows++){
            for(int cols=1;cols<=x;cols++){
                if(rows==cols||cols==(x+1)-rows)
                    cout<<"x";
                else cout<<" ";
            }cout<<endl;
        }
        
    }
    else if(x%2!=0&&x>1&&x<50){
        cout<<"Odd"<<endl;
        for(int rows=1;rows<=x;rows++){
            for(int cols=1;cols<=x;cols++){
                if(rows==cols||cols==(x+1)-rows)
                    cout<<"x";
                else cout<<" ";
            }cout<<endl;
        }
    }
    else{
        cout<<"Please enter a number between 1 and 50";
    }
    return 0;
}


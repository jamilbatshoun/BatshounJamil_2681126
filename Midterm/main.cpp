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
    int y;
    int z;
    int i=1;
    int temp;
    cout<<"Please enter a number between 1 and 50 to make an X out of number"
            <<endl;
    cin>>x;
    y=x;
    z=x;
    if(x%2==0&&x>1&&x<50){                       //Even Version
        cout<<"even"<<endl;
        for(int rows=1;rows<=x;rows++){          //Rows
            for(int cols=1;cols<=x;cols++){      //Columns
                if(i<=y&&rows==cols||cols==(x+1)-rows){
                    temp=y-(y-i);
                    cout<<temp; }                //We let y handle representing
                else cout<<" ";                  //numbers while x defines the 
            }cout<<endl;                         //size of the x shape pattern.
            i++;                     
        }
        
    }
    else if(x%2!=0&&x>1&&x<50){             //Odd Version
        cout<<"Odd"<<endl;
        for(int rows=1;rows<=x;rows++){
            for(int cols=1;cols<=x;cols++){
                if(rows==cols||cols==(x+1)-rows&&z>=10)
                    cout<<z;
                else if(cols==(x+1)-rows&&z<10)
                    cout<<" "<<z;
                else cout<<" ";
            }cout<<endl;
            z--;                            //Decrement
        }
    }
    else{                                              //If the user does not
        cout<<"Please enter a number between 1 and 50";//enter a value between
    }                                                  //1 and 50
    return 0;
}

//fixed odd alignment sorta need even too
/* 
 * File:   truth table.cpp
 * Author: Jamil Batshoun
 * Created on September 26, 2016, 9:35 AM
 * Purpose: 13 column truth table
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {

    bool x,y;
    
  
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    x=true;
    y=true;
    
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(x^y^y?'T':'F')<<" ";
    cout<<(x^y^x?'T':'F')<<" ";
    cout<<(!(x&&y)?'T':'F')<<" ";
    cout<<(!x||y?'T':'F')<<" ";
    cout<<(!(x||y)?'T':'F')<<" ";
    cout<<(!x&&!y?'T':'F')<<" \n \n";
    

    y=false;
    
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x^y?'T':'F')<<" ";
    cout<<(x^y^y?'T':'F')<<" ";
    cout<<(x^y^x?'T':'F')<<" ";
    cout<<(!(x&&y)?'T':'F')<<" ";
    cout<<(!x||y?'T':'F')<<" ";
    cout<<(!(x||y)?'T':'F')<<" ";
    cout<<(!x&&!y?'T':'F')<<" ";
    return 0;
}


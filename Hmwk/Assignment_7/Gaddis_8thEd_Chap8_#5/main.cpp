

/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on December 2, 2016, 8:21 PM
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void monthsort(string [],float []); 

int main(int argc, char** argv) {
    const int size = 12;
    float rain[size];
    string month[]={"January", "February", "March", "April", "May", "June",
                    "July", "August", "September", "October", "November", 
                    "December"};
     int count;
    
    //for loop to accept user values
    for(count = 0; count < size; count++){
        cout << "Please enter the rain fall for the month of "<<month[count]
                <<": ";
        cin >> rain[count];
        if(rain[count]<0){
            cout<<"Please only enter only numbers greater than zero."<<
                    "The program will stop now.";
            return 0;
        }    
    }
    
    monthsort(month,rain);
    
    for (int index = 0; index < size; index++){
        cout << setw(9) << month[index] << "\t\t";
        cout << setw(9) << rain[index] << endl;
    }
    
    return 0;
}

void monthsort(string month[], float rain[]){

    
    bool swap;
    int temp;
    do{
        swap = false;
        for(int count = 0; count < 12; count++){
            if(rain[count] < rain[count + 1]){
                temp = rain[count];
                rain[count] = rain[count + 1];
                rain[count + 1] = temp;
                string tempmonth = month[count];
                month[count] = month[count + 1];
                month[count + 1] = tempmonth;
                swap = true;
            }
        }
    }while(swap);
}

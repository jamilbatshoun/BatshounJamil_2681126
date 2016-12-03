/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on December 2, 2016, 10:34 PM
 * Purpose: chapter 8 #6
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void selsort2(string[],int);
int main(int argc, char** argv) {
    const int size = 20;
    string names[size] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                          "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                          "Taylor, Terri", "Johnson, Jill",
                          "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                          "James, Jean", "Weaver, Jim", "Pore, Bob",
                          "Rutherford, Greg", "Javens, Renee",
                          "Harrison, Rose", "Setzer, Cathy",
                          "Pike, Gordon", "Holland, Beth" };
    cout<<"Before sort: "<<endl;
    for(int index = 0; index < size; index++)
        cout << setw(10) << names[index] << endl;
    selsort2(names, size);
    cout<<endl<<endl;
    cout<<"After sort: "<<endl;
    for(int index = 0; index < size; index++)
        cout << setw(10) << names[index] << endl;
    return 0;
}

void selsort2(string names[],int size){
    int startScan, minIndex;
    string minValue;
    for(startScan = 0; startScan < (size - 1); startScan++){
        minValue = startScan;
        minValue = names[startScan];
        for(int index = startScan + 1; index < size; index++){
            if(names[index].compare(minValue) < 0){
                minValue = names[index];
                minIndex = index;
            }
        }
        names[minIndex] = names[startScan];
        names[startScan] = minValue;
    }
}

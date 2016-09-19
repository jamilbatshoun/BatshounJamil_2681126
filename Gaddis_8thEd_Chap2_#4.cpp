/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 19, 2016, 12:07 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    float bill= 88.67;  //bill before tax and tip
    float tax = .0675;  //tax percentage
    float tip = .2;     //tip percentage
    float amtTax;       //the dollar amount of tax
    float amtTip;
    float bilTax;       //the bill and tax total
    float biltaxTip;    //the dollar amount of the tip
    float total;
    
    amtTax=bill*tax;    //Multiplying the bill by tax% to find the tax paid in $
    bilTax=bill+amtTax; //adding the bill and tax paid to find the total pre tip
    amtTip=bilTax*tip;  //multiplying the total pre tip by tip% to find tip paid
    total=amtTip+bilTax;//adding the tip paid with bill and tax paid for total
    
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The bill, pre tax and tip, is:     $"<<bill<<"."<<endl;
    cout<<"The tax amount in dollars is:      $"<<amtTax<<"."<<endl;
    cout<<"The tip amount in dollars is:      $"<<amtTip<<"."<<endl;
    cout<<"The total bill with tax and tip is $"<<total<<"."<<endl;
    return 0;
}


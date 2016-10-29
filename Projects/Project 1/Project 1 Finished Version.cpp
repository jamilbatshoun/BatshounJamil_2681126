/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on October 26, 2016, 10:56 PM
 * Purpose: Revised Project 1 with functions included
 */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>

using namespace std;

const int MIN_VALUE = 1;    //Possible values range from 1 to 2
const int MAX_VALUE = 2;

void func1();
void func2();
void func3();
void func4();

int main(int argc, char** argv) {
    
    int num;
    int n = 1;
    char play;
    string g1,g2,g3,g4,g5;
    string w1,w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12,w13,w14,w15,w16,w17,w18,w19,
           w20,w21,w22,w23,w24,w25,w26,w27,w28,w29,w30,w31,w32,w33,w34,w35,w36,
           w37,w38,w39,w40,w41,w42;
    
    unsigned seed = time(0);
    srand(seed);
    num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    ifstream inputFile;
    
    
    cout<<"Welcome! Would you like to play a game of Hangman?"<<endl;
    cout<<"Type 'y' for Yes and 'n' for No."<<endl;
    cin>>play;
    cout<<endl;
    if(play=='y'||play=='Y'){
        cout<<"Alright! Lets play!"<<endl;
        cout<<"Use only lower case letters"<<endl;
        cout<<"Hint: the answers are three letter names of house pets."<<endl;
        cout<<"Good Luck."<<endl;
        
        
            
            //pick "cat"
        ifstream inputFile;
        inputFile.open("C:\\project1wordbank.txt");
        if(num==1){
        inputFile>>w1  >>w2  >>w3  >>w4  >>w5  >>w6  >>w7  >>w8  >>w9  >>w10
                 >>w11 >>w12 >>w13 >>w14 >>w15 >>w16 >>w17 >>w18 >>w19 >>w20
                 >>w21;
        }
        if(num==2){
        inputFile>>w1  >>w2  >>w3  >>w4  >>w5  >>w6  >>w7  >>w8  >>w9  >>w10
                 >>w11 >>w12 >>w13 >>w14 >>w15 >>w16 >>w17 >>w18 >>w19 >>w20
                 >>w21 >>w22 >>w23 >>w24 >>w25 >>w26 >>w27 >>w28 >>w29 >>w30
                >>w31 >>w32 >>w33 >>w34 >>w35 >>w36 >>w37 >>w38 >>w39 >>w40
                 >>w41 >>w42;
        w1=w22;
        w2=w23;
        w3=w24;
        w4=w25;
        w5=w26;
        w6=w27;
        w7=w28;
        w8=w29;
        w9=w30;
        w10=w31;
        w11=w32;
        w12=w33;
        w13=w34;
        w14=w35;
        w15=w36;
        w16=w37;
        w17=w38;
        w18=w39;
        w19=w40;
        w20=w41;
        w21=w42;
        }
        func1();
        cout<<endl;
        cout<<"Make a guess: ";
        cin>>g1;
        cout<<endl;
            
            
        if(g1==w1||g1==w2||g1==w3){
            func1();
            if(g1==w1){
                cout<<"        "<<w16;
            }
            if(g1==w2){
                cout<<"        "<<w17;
            }
            if(g1==w3){
                cout<<"        "<<w18;
            }
            cout<<endl;
            cout<<"Make another guess: ";
            cin>>g2;
            cout<<endl;
            g3=g1+g2;
            if(g3==w4||g3==w5||g3==w6||g3==w7||g3==w8||g3==w9){
                func1();
                if(g3==w4||g3==w7){
                    cout<<"        "<<w19;
                }
                if(g3==w5||g3==w8){
                    cout<<"        "<<w20;
                }
                if(g3==w6||g3==w9){
                    cout<<"        "<<w21;
                }
                cout<<endl;
                cout<<"Make another guess: ";
                cin>>g4;
                cout<<endl;
                g5=g3+g4;
                if(g5==w10||g5==w11||g5==w12||g5==w13||g5==w14||g5==w15){
                    func1();
                    cout<<"        "<<w10;
                    cout<<endl;
                    cout<<"You won!";
                }
                else{
                    func2();
                    if(g3==w4||g3==w7){
                        cout<<"        "<<w19;
                    }
                    if(g3==w5||g3==w8){
                        cout<<"        "<<w20;
                    }
                    if(g3==w6||g3==w9){
                        cout<<"        "<<w21;
                    }
                    cout<<endl;
                    cout<<"Try again: ";
                    cin>>g4;
                    cout<<endl;
                    g5=g3+g4;
                    if(g5==w10||g5==w11||g5==w12||g5==w13||g5==w14||g5==w15){
                        func2();
                        cout<<"        "<<w10;
                        cout<<endl;
                        cout<<"You won!";
                    }
                    else{
                        func3();
                        if(g3==w4||g3==w7){
                            cout<<"        "<<w19;
                        }
                        if(g3==w5||g3==w8){
                            cout<<"        "<<w20;
                        }
                        if(g3==w6||g3==w9){
                            cout<<"        "<<w21;
                        }
                        cout<<endl;
                        cout<<"Try again: ";
                        cin>>g4;
                        cout<<endl;
                        g5=g3+g4;
                        if(g5==w10||g5==w11||g5==w12||g5==w13||g5==w14||g5==w15){
                            func3();
                            cout<<"        "<<w10;
                            cout<<endl;
                            cout<<"You won!";
                        }
                        else{
                            func4();
                            if(g3==w4||g3==w7){
                                cout<<"        "<<w19;
                            }
                            if(g3==w5||g3==w8){
                                cout<<"        "<<w20;
                            }
                            if(g3==w6||g3==w9){
                                cout<<"        "<<w21;
                            }
                            cout<<endl;
                            cout<<"You lost!";
                        }
                    }
                }
            }
            else{
                func2();
                if(g1==w1){
                    cout<<"        "<<w16;
                }
                if(g1==w2){
                    cout<<"        "<<w17;
                }
                if(g1==w3){
                    cout<<"        "<<w18;
                }
                cout<<endl;
                cout<<"Try Again: ";
                cin>>g2;
                cout<<endl;
                g3=g1+g2;
                if(g3==w4||g3==w5||g3==w6||g3==w7||g3==w8||g3==w9){
                    func2();
                    if(g3==w4||g3==w7){
                        cout<<"        "<<w19;
                    }
                    if(g3==w5||g3==w8){
                        cout<<"        "<<w20;
                    }
                    if(g3==w6||g3==w9){
                        cout<<"        "<<w21;
                    }
                    cout<<endl;
                    cout<<"Make another guess: ";
                    cin>>g4;
                    cout<<endl;
                    g5=g3+g4;
                    if(g5==w10||g5==w11||g5==w12||g5==w13||g5==w14||g5==w15){
                        func2();
                        cout<<"        "<<w10;
                        cout<<endl;
                        cout<<"You won!";
                    }
                    else{
                        func3();
                        if(g3==w4||g3==w7){
                            cout<<"        "<<w19;
                        }
                        if(g3==w5||g3==w8){
                            cout<<"        "<<w20;
                        }
                        if(g3==w6||g3==w9){
                            cout<<"        "<<w21;
                        }
                        cout<<endl;
                        cout<<"Make another guess: ";
                        cin>>g4;
                        cout<<endl;
                        g5=g3+g4;
                        if(g5==w10||g5==w11||g5==w12||g5==w13||g5==w14||g5==w15){
                            func2();
                            cout<<"        "<<w10;
                            cout<<endl;
                            cout<<"You won!";
                        }
                        else{
                            func4();
                            if(g3==w4||g3==w7){
                                cout<<"        "<<w19;
                            }
                            if(g3==w5||g3==w8){
                                cout<<"        "<<w20;
                            }
                            if(g3==w6||g3==w9){
                                cout<<"        "<<w21;
                            }
                            cout<<endl;
                            cout<<"You lost!";
                        }
                    }
                }
                else{
                    func3();
                    if(g1==w1){
                        cout<<"        "<<w16;
                    }
                    if(g1==w2){
                        cout<<"        "<<w17;
                    }
                    if(g1==w3){
                        cout<<"        "<<w18;
                    }
                    cout<<endl;
                    cout<<"Try Again: ";
                    cin>>g2;
                    cout<<endl;
                    g3=g1+g2;
                    if(g3==w4||g3==w5||g3==w6||g3==w7||g3==w8||g3==w9){
                        func3();
                        if(g3==w4||g3==w7){
                            cout<<"        "<<w19;
                        }
                        if(g3==w5||g3==w8){
                            cout<<"        "<<w20;
                        }
                        if(g3==w6||g3==w9){
                            cout<<"        "<<w21;
                        }
                        cout<<endl;
                        cout<<"Make another guess: ";
                        cin>>g4;
                        cout<<endl;
                        g5=g3+g4;
                        if(g5==w10||g5==w11||g5==w12||g5==w13||g5==w14||g5==w15){
                            func3();
                            cout<<"        "<<w10;
                            cout<<endl;
                            cout<<"You won!";
                        }
                        else{
                            func4();
                            if(g3==w4||g3==w7){
                                cout<<"        "<<w19;
                            }
                            if(g3==w5||g3==w8){
                                cout<<"        "<<w20;
                            }
                            if(g3==w6||g3==w9){
                                cout<<"        "<<w21;
                            }
                            cout<<endl;
                            cout<<"You Lost!";
                        }
                    }
                    else{
                        func4();
                        if(g1==w1){
                            cout<<"        "<<w16;
                        }
                        if(g1==w2){
                            cout<<"        "<<w17;
                        }
                        if(g1==w3){
                            cout<<"        "<<w18;
                        }
                        cout<<endl;
                        cout<<"You lost!";
                    }
                }
            }
        }
        else{
            func2();
            cout<<endl;
            cout<<"Try again: ";
            cin>>g1;
            cout<<endl;
            if(g1==w1||g1==w2||g1==w3){
                func2();
                if(g1==w1){
                    cout<<"        "<<w16;
                }
                if(g1==w2){
                    cout<<"        "<<w17;
                }
                if(g1==w3){
                    cout<<"        "<<w18;
                }
                cout<<endl;
                cout<<"Make another guess: ";
                cin>>g2;
                cout<<endl;
                g3=g1+g2;
                if(g3==w4||g3==w5||g3==w6||g3==w7||g3==w8||g3==w9){
                    func2();
                    if(g3==w4||g3==w7){
                        cout<<"        "<<w19;
                    }
                    if(g3==w5||g3==w8){
                        cout<<"        "<<w20;
                    }
                    if(g3==w6||g3==w9){
                        cout<<"        "<<w21;
                    }
                    cout<<endl;
                    cout<<"Make another guess: ";
                    cin>>g4;
                    cout<<endl;
                    g5=g3+g4;
                    if(g5==w10||g5==w11||g5==w12||g5==w13||g5==w14||g5==w15){
                        func2();
                        cout<<"        "<<w10;
                        cout<<endl;
                        cout<<"You won!";
                    }
                    else{
                        func3();
                        if(g3==w4||g3==w7){
                            cout<<"        "<<w19;
                        }
                        if(g3==w5||g3==w8){
                            cout<<"        "<<w20;
                        }
                        if(g3==w6||g3==w9){
                            cout<<"        "<<w21;
                        }
                        cout<<endl;
                        cout<<"Make another guess: ";
                        cin>>g4;
                        cout<<endl;
                        g5=g3+g4;
                        if(g5==w10||g5==w11||g5==w12||g5==w13||g5==w14||g5==w15){
                            func3();
                            cout<<"        "<<w10;
                            cout<<endl;
                            cout<<"You won!";
                        }
                        else{
                            func4();
                            if(g3==w4||g3==w7){
                                cout<<"        "<<w19;
                            }
                            if(g3==w5||g3==w8){
                                cout<<"        "<<w20;
                            }
                            if(g3==w6||g3==w9){
                                cout<<"        "<<w21;
                            }
                            cout<<endl;
                            cout<<"You Lost!";
                        }
                    }
                }
                else{
                    func3();
                    if(g1==w1){
                        cout<<"        "<<w16;
                    }
                    if(g1==w2){
                        cout<<"        "<<w17;
                    }
                    if(g1==w3){
                        cout<<"        "<<w18;
                    }
                    cout<<endl;
                    cout<<"Try Again: ";
                    cin>>g2;
                    cout<<endl;
                    g3=g1+g2;
                    if(g3==w4||g3==w5||g3==w6||g3==w7||g3==w8||g3==w9){
                        func3();
                        if(g3==w4||g3==w7){
                            cout<<"        "<<w19;
                        }
                        if(g3==w5||g3==w8){
                            cout<<"        "<<w20;
                        }
                        if(g3==w6||g3==w9){
                            cout<<"        "<<w21;
                        }
                        cout<<endl;
                        cout<<"Make another guess: ";
                        cin>>g4;
                        cout<<endl;
                        g5=g3+g4;
                        if(g5==w10||g5==w11||g5==w12||g5==w13||g5==w14||g5==w15){
                            func3();
                            cout<<"        "<<w10;
                            cout<<endl;
                            cout<<"You won!";
                        }
                        else{
                            func4();
                            if(g3==w4||g3==w7){
                                cout<<"        "<<w19;
                            }
                            if(g3==w5||g3==w8){
                                cout<<"        "<<w20;
                            }
                            if(g3==w6||g3==w9){
                                cout<<"        "<<w21;
                            }
                            cout<<endl;
                            cout<<"You Lost! ";
                        }
                    }
                    else{
                        func4();
                        if(g1==w1){
                            cout<<"        "<<w16;
                        }
                        if(g1==w2){
                            cout<<"        "<<w17;
                        }
                        if(g1==w3){
                            cout<<"        "<<w18;
                        }
                        cout<<endl;
                        cout<<"You lost! ";
                    }
                }
            }
            else{
                func3();
                cout<<endl;
                cout<<"Try again: ";
                cin>>g1;
                cout<<endl;
                if(g1==w1||g1==w2||g1==w3){
                    func3();
                    if(g1==w1){
                        cout<<"        "<<w16;
                    }
                    if(g1==w2){
                        cout<<"        "<<w17;
                    }
                    if(g1==w3){
                        cout<<"        "<<w18;
                    }
                    cout<<endl;
                    cout<<"Make another guess: ";
                    cin>>g2;
                    cout<<endl;
                    g3=g1+g2;
                    if(g3==w4||g3==w5||g3==w6||g3==w7||g3==w8||g3==w9){
                        func3();
                        if(g3==w4||g3==w7){
                            cout<<"        "<<w19;
                        }
                        if(g3==w5||g3==w8){
                            cout<<"        "<<w20;
                        }
                        if(g3==w6||g3==w9){
                            cout<<"        "<<w21;
                        }
                        cout<<endl;
                        cout<<"Make another guess: ";
                        cin>>g4;
                        cout<<endl;
                        g5=g3+g4;
                        if(g5==w10||g5==w11||g5==w12||g5==w13||g5==w14||g5==w15){
                            func3();
                            cout<<"        "<<w10;
                            cout<<endl;
                            cout<<"You won!";
                        }
                        else{
                            func4();
                            if(g3==w4||g3==w7){
                                cout<<"        "<<w19;
                            }
                            if(g3==w5||g3==w8){
                                cout<<"        "<<w20;
                            }
                            if(g3==w6||g3==w9){
                                cout<<"        "<<w21;
                            }
                            cout<<endl;
                            cout<<"Make another guess: ";
                        }
                    }
                    else{
                        func4();
                        if(g1==w1){
                        cout<<"        "<<w16;
                        }
                        if(g1==w2){
                        cout<<"        "<<w17;
                        }
                        if(g1==w3){
                            cout<<"        "<<w18;
                        }
                        cout<<endl;
                        cout<<"You lost! ";
                    }
                }
                else{
                    func4();
                    cout<<endl;
                    cout<<"You lost!";
                }
            }
        }
    }
    else {
        cout<<"Okay, see you next time!";
    }
    return 0;
}

void func1(){
    
    cout<<"         _____   "<<endl;
    cout<<"        |/    |  "<<endl;
    cout<<"        |        "<<endl;      
    cout<<"        |        "<<endl;
    cout<<"        |        "<<endl;
    cout<<"      __|__      "<<endl;
}

void func2(){
    cout<<"         _____   "<<endl;
    cout<<"        |/    |  "<<endl;
    cout<<"        |     O  "<<endl;      
    cout<<"        |        "<<endl;
    cout<<"        |        "<<endl;
    cout<<"      __|__      "<<endl;
}

void func3(){
    cout<<"         _____   "<<endl;
    cout<<"        |/    |  "<<endl;
    cout<<"        |     O  "<<endl;      
    cout<<"        |    -|- "<<endl;
    cout<<"        |        "<<endl;
    cout<<"      __|__      "<<endl;
}

void func4(){
    cout<<"         _____   "<<endl;
    cout<<"        |/    |  "<<endl;
    cout<<"        |     O  "<<endl;      
    cout<<"        |    -|- "<<endl;
    cout<<"        |    / \\"<<endl;
    cout<<"      __|__      "<<endl;
}
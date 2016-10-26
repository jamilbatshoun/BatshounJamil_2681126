/* 
 * File:   main.cpp
 * Author: Jamil Batshoun
 * Created on October 25, 2016, 8:47 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;
void blankhangman(){
    
    cout<<"         _____    "<<endl;
    cout<<"        |/    |   "<<endl;
    cout<<"        |         "<<endl;      //Beginning of round
    cout<<"        |         "<<endl;
    cout<<"        |         "<<endl;
    cout<<"      __|__       "<<endl;
    
}

int main(int argc, char** argv) {
    
    //Random Number Generator to pick 
    /*const int MIN_VALUE = 1;    //Possible values range from 1 to 5
    const int MAX_VALUE = 5;
    int num;
  
    
    unsigned seed = time(0);
    srand(seed);
    
    num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    */
    //General game content starts here.
    char play;
    char guess;
   
    
    
    cout<<"Welcome! Would you like to play a game of Hangman?"<<endl;
    cout<<"Type 'y' for Yes and 'n' for No."<<endl;
    cin>>play;
    cout<<endl;
    if(play=='y'||play=='Y'){
        cout<<"Alright! Lets play!"<<endl;
        cout<<"Use only lower case letters"<<endl;
        cout<<"The answers are all names of cities in Italy. Good Luck."<<endl;
        
        if (play=='y'){
        
            blankhangman();
            cout<<"        _ _ _     "<<endl;
            cout<<" Make a guess:";
            cin>>guess;
            
            if(guess=='c'){
                blankhangman();
                cout<<"        C _ _     "<<endl;
                cout<<" Make another guess:";
                cin>> guess;   
                
               if(guess=='a'){
                    blankhangman();
                    cout<<"        C a _     "<<endl;
                    cout<<" Make another guess:";
                    cin>> guess;   
                
                    if(guess=='t'){
                        blankhangman();
                        cout<<"        C a t     "<<endl;
                        cout<<"You won!"<<endl;
                    }
                    
                    else{
                        cout<<"Try Again: ";
                        cin>> guess;
                        
                        if(guess=='t'){
                            blankhangman();
                            cout<<"        C a t     "<<endl;
                            cout<<"You won!"<<endl;
                        }
                        else{
                            cout<<"Try Again: ";
                            cin>> guess;
                            
                            if(guess=='t'){
                                blankhangman();
                                cout<<"        C a t     "<<endl;
                                cout<<"You won!"<<endl;
                            }
                            else{
                                cout<<"You lose";
                            }
                            
                        }
                    }
                    
                } 
                
                if(guess=='t'){
                    blankhangman();
                    cout<<"        C _ t     "<<endl;
                    cout<<" Make another guess:";
                    cin>> guess;   
                
                    if(guess=='a'){
                        blankhangman();
                        cout<<"        C a t     "<<endl;
                        cout<<"You won!"<<endl;
                    }
                    
                    else{
                        cout<<"Try Again: ";
                        cin>> guess;
                        
                        if(guess=='a'){
                            blankhangman();
                            cout<<"        C a t     "<<endl;
                            cout<<"You won!"<<endl;
                        }
                        else{
                            cout<<"Try Again: ";
                            cin>> guess;
                            
                            if(guess=='a'){
                                blankhangman();
                                cout<<"        C a t     "<<endl;
                                cout<<"You won!"<<endl;
                            }
                            else{
                                cout<<"You lose";
                            }
                            
                        }
                    }
                    
                }
                
                else{
                
                    cout<<"Try Again: ";
                        cin>> guess;
                    
                    if(guess=='a'){
                        blankhangman();
                        cout<<"        C a _     "<<endl;
                        cout<<" Make another guess:";
                        cin>> guess;   
                
                        if(guess=='t'){
                            blankhangman();
                            cout<<"        C a t     "<<endl;
                            cout<<"You won!"<<endl;
                        }
                    
                        else{
                            cout<<"Try Again: ";
                            cin>> guess;
                        
                            if(guess=='t'){
                                blankhangman();
                                cout<<"        C a t     "<<endl;
                                cout<<"You won!"<<endl;
                            }
                            else{
                                cout<<"You lose";
                            }
                        }
                    }
                        
                    if(guess=='t'){
                        
                        blankhangman();
                        cout<<"        C _ t     "<<endl;
                        cout<<" Make another guess:";
                        cin>> guess;   
                
                        if(guess=='a'){
                            blankhangman();
                            cout<<"        C a t     "<<endl;
                            cout<<"You won!"<<endl;
                        }
                    
                        else{
                            cout<<"Try Again: ";
                            cin>> guess;
                        
                            if(guess=='a'){
                                blankhangman();
                                cout<<"        C a t     "<<endl;
                                cout<<"You won!"<<endl;
                            }
                            else{
                                cout<<"You lose";
                            }
                        }
                    }
                    else{
                        cout<<"Try Again: ";
                        cin>> guess;
                        
                        if(guess=='a'){
                            blankhangman();
                            cout<<"        C a _     "<<endl;
                            cout<<" Make another guess:";
                            cin>> guess;
                            
                            if(guess=='t'){
                                blankhangman();
                                cout<<"        C a t     "<<endl;
                                cout<<"You won!"<<endl;
                            }
                            else{
                                cout<<"You lose";
                            }
                        }
                        if(guess=='t'){
                            blankhangman();
                            cout<<"        C _ t     "<<endl;
                            cout<<" Make another guess:";
                            cin>> guess;
                            
                            if(guess=='a'){
                                blankhangman();
                                cout<<"        C a t     "<<endl;
                                cout<<"You won!"<<endl;
                            }
                            else{
                                cout<<"You lose";
                            }
                        }
                    }
                }
            }    
                
        }
    
    }
    else {
        cout<<"Okay, see you next time!";
    }
    
    return 0;
}


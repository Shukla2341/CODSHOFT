#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    
    cout<<"Welcome to the Number Guessing Game!"<<endl;

    srand(time(NULL));  // to generate the new random number each time the program runs

    
    int low,high;
    cout<<"Enter the lower limit: "<<endl;
    cin>>low;

    cout<<"Enter the higher limit: "<<endl;
    cin>>high;

    int number= rand()%(high-low+1)+low;

    int guess_num;
     cout<<"Guess a number between "<<low<<" and "<<high<<endl;

    while(1){
        cin>>guess_num;

        if(guess_num<number){
            cout<<"Guess number is lower than random number please try again"<<endl;
        }else if(guess_num>number){
            cout<<"Guess number is greater than random number please try again"<<endl;
        }else{
            cout<<"congrates you pick the right number!"<<endl;
            break;
        }
    }

}
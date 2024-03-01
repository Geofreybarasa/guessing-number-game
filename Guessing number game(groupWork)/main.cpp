#include <iostream>
#include <random>
#include <chrono>
using namespace std;

//function to generate random number
int getRandomNumber(int min,int max){
unsigned seed = chrono::system_clock::now().time_since_epoch().count();//obtain random seed using current time
mt19937 gen(seed);//use the seed to initialize the random number generator
uniform_int_distribution<>dis(min,max);//define the range
return dis(gen);//generate and returnrandom number
}
int main(){
int guess,secretNum=getRandomNumber(1,10),guessCount=0,guessLimit=3;
bool outOfGuess=false;
cout<<"RULES: 1.number of trials are 3\n \t2.Random number must be =<10 \n\tN/BIf you get correct number i'll buy you coffee(+254704776364)\n\n\n\n";

    while(secretNum != guess && !outOfGuess){
            if(guessCount<guessLimit){
        cout<<"Guess the number: ";
        cin>>guess;
        guessCount++;
           }else{
   outOfGuess=true;
           }
}
if(outOfGuess){
    cout<<"\t\t\t\tOops you lost";
}else{
cout<<"\n\t\t\t\tCongratulation You win"<<endl;
}
cout<<endl;
cout<<"The random number generated  was : "<<secretNum;
    }

//Monty Hall Bullshit

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){
    int tt = 10000000;
    cout<<"MONTY HALL PROBLEM"<<endl;
    cout<<"prints out the percentage of if run the simulation"<<endl;
    cout<<"and change the door each time. If variable change exists"<<endl;
    cout<<"the probability will be 66.666%"<<endl;//it does
    cout<<"Now running the simulation "<<tt<<" times"<<endl;
    srand(time(NULL));
    //get a counter for total times
    int cunt = 0;
    int rt = 0;
    while(cunt < tt){
        //get correct door
        int cd = rand() % 3;
        //get computer guess
        int cg = rand() % 3;
        //cout<<"Guess 1: "<<cg<<endl;
        //get the shown door
        int sd;
        if(cg == cd){
            sd = cg;
            while(sd == cd){
                sd = rand() % 3;
            }
        }
        else{
            sd = 2;
            while(sd == cd || sd == cg){
                sd--;
            }
        }
        //cout<<"Goat at Door: "<<sd<<endl;
        //make a new guess
        int cg2 = 0;
        while(cg2 == cg || cg2 == sd){
            cg2++;
        }

        //cout<<"Guess 2:\t "<<cg2<<endl;
        //cout<<"Correct Door:\t "<<cd<<endl;
        if(cg2 == cd){
            //cout<<"RIGHT DOOR"<<endl;
            rt++;
        }
        else{
            //cout<<"WRONG DOOR"<<endl;
        }
        cunt++;
    }
    double percent = double(rt) / double(cunt);
    cout<<"\n\n\nThe result is "<<percent<<endl<<endl<<endl<<endl;
    cout<<"And therefore variable change exists"<<endl;
    cout<<"FIN"<<endl;
    return 0;
}

#include <iostream>//Library file
#include <cstdlib>
#include<string.h>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));//Write a program to make demonstate a rock,paper and scisor game
    int user = 0;
    int computer = 0;
    string name;
    int round_no=3;
    int round;

    cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*--"<<endl;
    cout<<"                   NAME              "<<endl;
    cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*--"<<endl;
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*--"<<endl;
    cout<<"                   ROUND              "<<endl;
    cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*--"<<endl;
    cout<<"how many round you want to play?"<<endl;
    cin>>round;
    cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*--"<<endl;
    cout<<"                   GAME             "<<endl;
    cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*--"<<endl;
    cout<<"Round No: 1/3"<<endl;
    cout<<"\ndhaval score=0"<<endl;
    cout<<"\nComputer score=0"<<endl;

    cout<<"1) Rock" <<endl;

    cout<<"2) Paper" <<endl;

    cout<<"3) Scissor" <<endl;

    cout<<"Select your choice (1-3)"<<endl;
    cin>>user;

    if(user == 1)//use the if condition
    {
        cout <<"You choose Rock"<<endl;
    }
    else if(user == 2)
    {
        cout <<"You choose Paper"<<endl;
    }
    else
    {
        cout <<"You choose Scissor" <<endl;
    }

    computer = rand()%3+1;//Generating  for random no.s from computer's end
    if(computer == 1)
    {
        cout <<"Computer choose Rock" <<endl;
    }
    else if(computer == 2)
    {
        cout <<"Computer choose Paper" <<endl;
    }
    else
    {
        cout <<"Computer choose Scissor" <<endl;
    }

    
    if(user == computer)
    {
        cout <<"This is Tie" <<endl;//match
    }
    
    else if(user == 1)// user  Rock
    {
        if(computer == 2)
        {
            cout<<"You lose!" <<endl;
        }
        if(computer == 3)
        {
            cout<<"You win!" <<endl;
        }
    }
    
    else if(user == 2)// user Paper
    {
        if(computer == 1)
        {
            cout <<"You win!" <<endl;
        }
        if(computer == 3)
        {
            cout <<"You lose!" <<endl;
        }
    }
    
    else if(user == 3)// user Scissor
    {
        if(computer == 1)
        {
            cout <<"You lose!" <<endl;
        }
        if(computer == 2)
        {
            cout <<"You win!" <<endl;
        }
    }
      cout<<"Press any key to continue....."<<endl;
      cout<<"Game is Drawn"<<endl;
    return 0;




}

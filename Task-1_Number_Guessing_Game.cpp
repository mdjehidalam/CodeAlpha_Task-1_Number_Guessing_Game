#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int ranNumberGen()
{
    int lower = 1, upper=10;
    srand(time(0)); // for generating each and every unique number 
    int number = (rand() % (upper-lower))+ lower;
    return number;
}


bool checkGuessNumber(int ranNumber)
{
    int count = 3 ; // number of chances 
    bool check = false;
    int guessNum;
    while(count --)
    {
        cout<<"ENTER THE NUMBER(Range from 1 to 10) : "<<flush;
        cin>>guessNum;


        if(ranNumber == guessNum) // check guess Number is correct or not 
        {
            return true;
        }else{
                if(count != 0)
                {
                    if(guessNum < ranNumber){
                    system("cls");
                    cout<<"Enter too High Number"<<endl;
                    
                      } else {
                    system("cls");
                    cout<<"Enter Too Low Number"<<endl;
                   
                     }
                }

        } 
    } // while loop end;
    return false;
    
}
int main()
{
level:
    system("cls");
    int ranNumber = ranNumberGen();
    bool check =   checkGuessNumber(ranNumber);
    if(check)
    {
        system("cls");
        cout<<"Congratulations!\t You Won The Game"<<endl;
        cout<<"Press \"ZERO\" to Exit.. else Play \"Again\""<<endl;
        bool n;
        cin>>n;
        getch();
        if(n) goto level; else exit(0);
    }else{
        system("cls");
        cout<<"Sorry!"<<endl<<" You Lost The Game Try Again"<<endl<<endl;
        cout<<"Press \"ZERO\" to Exit.. else Play \"Again\""<<endl;
        bool n;
        cin>>n;
        getch();
        if(n) goto level; else exit(0);
    }
    
}
#include <iostream>


using namespace std;

int main()
{srand((unsigned int)time(NULL));
        int number=(rand()%100)+1;
        int guess=0;
        do{
            cout<<"enter guess(1-100)"<<endl;
            cin>>guess;
            if(guess > number)
                cout<<"guess lower"<<endl;
            else if(guess < number)
                cout<<"higher guessed"<<endl;
            else
                cout<<"you won!"<<endl;

        }while(guess != number);

    return 0;
}

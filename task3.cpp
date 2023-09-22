/*Create a program that allows the user to play
the classic game of rock, paper, scissors
against the computer*/

#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<queue>
#include<math.h>
#include <ctime>
#include <cstdlib>
#include<algorithm>

using namespace std;



void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}


int main() {
    
    
    clearConsole();

    cout<<"**********TASK_3***********"<<endl;
    cout<<"**********TechnoHacks***********"<<endl;  
    cout<<"**********Aman Singh Rawat***********"<<endl;
    cout<<"**************Welcome to Our TechnoHacks \033[1;36mRock Paper Scissors Game\033[0m************"<<endl;
    cout<<"Press Enter to continue....";
    cin.ignore();
    clearConsole();

    int userChoice;
    int computerChoice;

do{

    srand(time(0)); 
    computerChoice = rand() % 3; // Generate a random number between 0 and 2

   

    string choices[]={"Rock", "Paper", "Scissors"};

    cout<<"Enter your choice:"<<endl;
    cout<<"0 - Rock\n1 - Paper\n2 - Scissors\n3 - Exit"<<endl;

    cin>>userChoice;

    
    if (userChoice<0 || userChoice>3) {
        cout<<"\033[1;31mInvalid choice. Please choose 0, 1, 2,or 3.\033[0m\n"; // this code i have used to refelect Red text
        return 1; 
    }

    else if(userChoice==3){
        cout << "---------------------------------"<<endl;
    cout << "Thank you for playing!"<<endl;
    cout << "---------------------------------"<<endl;
    exit(0);
    }

    cout << "You chose: \033[1;32m" << choices[userChoice] << "\033[0m\n"; // this code i have used to refelect Green text
    cout << "Computer chose: \033[1;32m" << choices[computerChoice] << "\033[0m\n"; //this code i have used to refelect Green text


    if (userChoice == computerChoice) {

        cout << "\033[1;33mIt's a tie!\033[0m\n"; // this code i have used to refelect Yellow text

    } 
    
    else if ((userChoice == 0 && computerChoice == 2) || (userChoice == 1 && computerChoice == 0) || 
                (userChoice == 2 && computerChoice == 1)) {

        cout << "\033[1;32mYou win!\033[0m\n"; //this code i have used to refelect Green text


    } 
    else {
        cout << "\033[1;31mComputer wins!\033[0m\n"; // this code i have used to refelect Red text
    }



} while(userChoice!=3);

    return 0;
}

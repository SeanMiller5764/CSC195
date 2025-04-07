// Guessing_Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;
 string choose_difficulty()
{
     string s;
     bool selected = false;
     do
     {
         cout << "please choose a difficulty Easy,Meduim,Hard"<<endl;
         cin >> s;
         if (s == "easy"||s =="meduim"||s =="hard")
         {
             selected = true;
         }
         else 
         {
             cout << "invaild input";
         }
     } while (!selected);
     return s;
}
 void game(int i) 
 {
     int guesses = 5;
     int guess;
     bool win = false;
     srand(time(0));
     int r = rand() % i + 1;
     cout << "guess a number between 1-" << i << endl;
     do
     {
         cout << "what is your guess"<<endl;
         cin >> guess;
         if (guess == r)
         {
             win = true;
             guesses = 0;
         }
         else
         {
             cout << "sorry that was incorrect"<<endl;
             if (guess > r) 
             {
                 cout << "the number is lower"<<endl;
             }else
             {
                 cout << "the number is higher"<<endl;
             }
             guesses=guesses-1;
         }
     } while (guesses != 0);
     if (win == true) 
     {
         cout << "Congrats you win";
     }
     else
     {
         cout << "you lose";
     }
 }


int main()
{
    string difficulty;
    int max;
    cout << "welcome to the guessing game please sselect a difficulty"<<endl;
    difficulty = choose_difficulty();
    if (difficulty == "easy")
    {
        max = 5;
        game(max);
    }
    else if (difficulty=="meduim")
    {
        max = 10;
        game(max);
    }
    else 
    {
        max = 100;
        game(max);
    }
}

#include <iostream>
using namespace std;
int main() {

    const int secret_number = 12;
    int user_guess;
    int num_guesses = 0;
    
    while (user_guess != secret_number){
         cout << "try to guess the secret number!" << endl;
         cin >> user_guess;
         cout << "you guessed: " << user_guess << endl;
         while(cin.fail()) {
             cout << user_guess << " is not a number, please enter a number" << endl;
             cin.clear();
             cin.ignore();
             cin >> user_guess;
         }

         num_guesses += 1;

         if (user_guess > secret_number){
             cout << user_guess << " is too large, guess lower next time! " << endl;
         }else if ( user_guess < secret_number){
             cout << user_guess << " is too small, guess higher next time! " << endl;
         }else {
             cout << user_guess << " is the correct number! Horray! it took you " << num_guesses << " guesses!" << endl;
         }
    }
}
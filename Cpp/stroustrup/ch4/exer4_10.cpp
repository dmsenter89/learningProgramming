/*
 * Date: June 11, 2015
 * Author: Michael Senter
 * Small program to play Rock, Paper, Scissors
 */

#include "../std_lib_facilities.h"

string what_comp_chose(char d)
{
    string comp_choice;

    switch (d){
        case 'r':
            comp_choice="rock";
            break;
        case 'p':
            comp_choice="paper";
            break;
        case 's':
            comp_choice="scissors";
            break;
    }

    return comp_choice;
}


void win_message(char d)
{
    string comp_choice=what_comp_chose(d);
    cout << "\tThe computer chose " << comp_choice << ", you win!\n";
}

void loose_message(char d)
{
    string comp_choice=what_comp_chose(d);
    cout << "\tThe computer chose " << comp_choice << ", you loose!\n";
}

void draw_message()
{
    cout << "\tThe computer chose as you did, draw!\n";
}

void play_game()
{
    vector<char> comp_choices{'r', 'r', 'p', 's','p', 's','r','p', 's'};
    char user_choice, c_choice;
    static int count{0};

    cout << "\nYou play (r,p, or s): ";
    cin >> user_choice;
    c_choice = comp_choices[count];

    switch(user_choice){
        case 'r':
            if (c_choice=='p'){
                loose_message(c_choice);
            } else if (c_choice=='s'){
                win_message(c_choice);
            } else {
                draw_message();
            }
            break;
        case 'p':
            if (c_choice=='s'){
                loose_message(c_choice);
            } else if (c_choice=='r'){
                win_message(c_choice);
            } else {
                draw_message();
            }
            break;
        case 's':
            if (c_choice=='r'){
                loose_message(c_choice);
            } else if (c_choice=='p'){
                win_message(c_choice);
            } else {
                draw_message();
            }
            break;
    }
    ++count;

}

int main()
{
    cout << "You will play a game of rock-paper-scissors against the computer.\n"
        << "You should know the rules. 'r' is rock, 'p' is paper, and 's' is scissors.\n";

    int num_of_games{0};

    while (num_of_games<5){
        play_game();
        ++num_of_games;
    }

    cout << "\nThanks for playing!" << std::endl;

    return 0;
}

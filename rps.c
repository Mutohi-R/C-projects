#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;

int main() {

    srand(time(NULL));

    int player_throw = 0;
    int computer_throw = 0;
    bool draw = false;

    do {
        printf(" 1 for Rock\n 2 for Paper\n 3 for Scissors\n");
        scanf("%d", &player_throw);

        computer_throw = (rand() % 3) + 1;
        if (computer_throw == 1) {
            printf("Computer threw Rock\n");
        } else if (computer_throw == 2) {
            printf("Computer threw Paper\n");
        } else printf("Computer threw Scissors\n");

        draw = false;

        if (player_throw == computer_throw) {
            draw = true;
            printf(" Draw!\n Play again!\n");
        } else if (player_throw == ROCK && computer_throw == PAPER) {
            printf("Paper covers Rock. You lose!\n");
        } else if (player_throw == ROCK && computer_throw == SCISSORS) {
            printf("Rock smashes Scissors. You win!\n");
        } else if (player_throw == PAPER && computer_throw == ROCK) {
            printf("Paper covers Rock. You win!\n");
        } else if (player_throw == PAPER && computer_throw == SCISSORS) {
            printf("Scissors cuts Paper. You lose!\n");
        } else if (player_throw == SCISSORS && computer_throw == ROCK) {
            printf("Rock smashes Scissors. You lose!\n");
        } else {
            printf("Scissors cuts Paper. You win!\n");
        }



    } while (draw);


    return 0;
}
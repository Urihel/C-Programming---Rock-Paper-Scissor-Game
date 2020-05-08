#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main()
{


    int n = 1;
    _Bool boolVal = 1;

    while(n == boolVal) {
    char player1[20];
    printf("Player 1: Rock, Paper, or Scissor?: ");
    scanf("%18s",player1);
   //printf("%s",player1);

    char player2[20];
    printf("Player 2: Rock, Paper, or Scissor?: ");
    scanf("%18s",player2);


    //write up some project documentation about this super small but challenging project extra challenging becuase in c you write the string
    //the bottom up.


    if( (strcmp("Rock", player1, 20) == 0) && (strcmp("Scissor", player2, 20) == 0) ) {
        printf("Player 1 Wins!\n\n");
    }else if( (strcmp("Paper", player1, 20) == 0) && (strcmp("Rock", player2, 20) == 0) ) {
        printf("Paper Beats Rock! Player 1 Wins\n\n");
    }else if( (strcmp("Scissor", player1, 20) == 0) && (strcmp("Paper", player2, 20) == 0) ) {
        printf("Scissor Beats Paper! Player 1 Wins\n\n");
    }else if( (strcmp(player1,player2,20) == 0) ) {
        printf("The Game Results In A Tie\n\n"); //The mid point
    }else if( (strcmp("Rock", player2, 20) == 0) && (strcmp("Scissor", player1, 20) == 0) ) {
        printf("\nPlayer 2 Wins!\n\n");
    }else if( (strcmp("Paper", player2, 20) == 0) && (strcmp("Rock", player1, 20) == 0) ) {
        printf("Paper Beats Rock! Player 2 Wins\n\n");
    }else if( (strcmp("Scissor", player2, 20) == 0) && (strcmp("Paper", player1, 20) == 0) ) {
        printf("Scissor Beats Paper! Player 2 Wins\n\n");
    }

    }

}

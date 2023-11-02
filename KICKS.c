#include <stdio.h>
#include <stdlib.h>

int main() {
    int user_score = 0;
    int computer_score = 0;
    int total_rounds = 5;

    printf("\t\t\t\t\t---------------------------------\n");
    printf("\t\t\t\t\t|\t      KICKS      \t| \n");
    printf("\t\t\t\t\t---------------------------------\n");

    printf("Simple rules for our game :) \n\n");
    
    printf("1.There will be 5 rounds of penalty shootout.\n\n");
    
    printf("2.Each round contains 2 parts : Shooting and Saving.\n\n");
    
    printf("a)For shooting user will have to choose from three options Left , Right or Centre.\n");
    printf("  Similarly Computer will randomly choose from above three options for saving our penalty.\n");
    printf("b)For saving also we have to repeat the same process and accordinly the scores of each round will be shown.\n\n");
    
    printf("3.In this way 5 rounds will be done and winner wil be announced based on the final score.\n\n");
    
    printf("Press 1 for Left.\n");
    printf("Press 2 for Centre.\n");
    printf("Press 3 for Right.\n\n");
    
    printf("\t\t\t\t\t We hope you guys enjoy our game!\n");

    for (int round = 1; round <= total_rounds; round++)
    {
        printf("\nRound %d\n", round);

        //USER'S SHOOTING.
        printf("Your turn to shoot.\n");

        // User's turn
        printf("Your turn : ");
        int user_choice;
        scanf("%d", &user_choice);

        // Generate a random number forcomputer's choice (1-3)
        int computer_choice = 1 + rand() % 3;
        printf("Computer chose: %d\n", computer_choice);

        if (user_choice == computer_choice)
        {
            printf("Goalkeeper saved it! No goal.\n");
        }
        else
        {
            printf("Goal! You scored!\n");
            user_score++;
        }

        // USER'S SAVING.
        printf("Your turn to Save.\n");

        // Computer's turn
        computer_choice = 1 + rand() % 3;

        // Generate a random number for user's choice (1-3)
        printf("Your turn : ");
        scanf("%d", &user_choice);
        printf("Computer's turn: %d\n", computer_choice);

        if (user_choice == computer_choice)
        {
            printf("You saved it! No goal.\n");
        }
        else
        {
            printf("Goal! Computer scored!\n");
            computer_score++;
        }

        printf("Score: You %d - %d Computer\n", user_score, computer_score);
    }

    // Determine the winner
    if (user_score > computer_score)
    {
        printf("You win the penalty shootout!\n");
    }
    else if (user_score < computer_score)
    {
        printf("Computer wins the penalty shootout!\n");
    }
    else
    {
        printf("It's a draw! The game ends in a tie.\n\n");
    }

    printf("\t\t\t\t\t Thank you for playing our game!\n\n");

    printf("\t\t\t\t\t---------------------------------\n");
    printf("\t\t\t\t\t|\t     CREDITS      \t| \n");
    printf("\t\t\t\t\t---------------------------------\n");

    printf("\t\t\t\t\t        ~~~ Soham Baing ~~~\n");
    printf("\t\t\t\t\t     ~~~ Mitesh Chaurasiya ~~~\n");
    printf("\t\t\t\t\t        ~~~ Swayam Desai ~~~\n");

    return 0;
}

#include <stdio.h>

int main() {
    // Variable declaration
    int user1, user2;
    
    // Print of user play options
    printf("Player options: 0 - Rock, 1 - Paper and 2 - Scissors\n");
    
    // Data entry
    printf("User 1: ");
    scanf("%d", &user1);
    printf("User 2: ");
    scanf("%d", &user2);
    
    // Data processing and output
    if ((user1 == 0 && user2 == 2) || (user1 == 1 && user2 == 0) || (user1 == 2 && user2 == 1))
        printf("\nUser 1 wins!\n");
    else if ((user2 == 0 && user1 == 2) || (user2 == 1 && user1 == 0) || (user2 == 2 && user1 == 1))
        printf("\nUser 2 wins!\n");
    else 
        printf("\nTie!\n");

    return 0;
}

// gcc main.c -o rock_paper_scissors - compilation code
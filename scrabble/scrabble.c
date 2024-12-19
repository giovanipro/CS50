#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    string word1 = get_string("Player1: ");
    string word2 = get_string("Player2: ");

    if(compute_score(word1) > compute_score(word2))
    {
        printf("Player1 Wins!");
    }
    else if(compute_score(word1) < compute_score(word2))
    {
        printf("Player2 Wins!");
    }
    else
    {
        printf("Tie!");
    }
    printf("\nPress a key to continue...");
    getchar();
}

int compute_score(string word)
{
    int point = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        word[i] = toupper(word[i]);  // Converte para maiúscula
    }

    for(int i = 0, n = strlen(word);i < n; i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z')
        {
            point += POINTS[word[i] - 65];
        }
    }
    return point;
}
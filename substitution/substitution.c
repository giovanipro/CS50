#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[]) 
{
    if(argc != 2 || strlen(argv[1]) != 26)
    {
        printf("Must contain 26 letters\n");
        return 0;
    }

    string letters = argv[1];

    for(int i = 0; i < 26; i++)
    {
        if(!isalpha(letters[i]))
        {
            printf("Must contain 26 letters\n");
            return 0;
        }
    }

    string text = get_string("Text: ");
    int textsize = strlen(text);
    char character;
    int index = 0;

    for(int i = 0; i < textsize; i++)
    {
        if(isalpha(text[i]))
        {
            character = isupper(text[i]) ? 'A' : 'a';
            index = tolower(text[i]) - 'a';
            text[i] = isupper(text[i]) ? toupper(letters[index]) : letters[index];
        }
        else
        {
            text[i] = text[i];
        }
    }
    printf("Encoded Text: %s", text);
    printf("\nPress a key to continue...");
    getchar();
}
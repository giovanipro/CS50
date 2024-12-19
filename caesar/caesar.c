#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[]) 
{
    if(argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 0;
    }
    
    string key = argv[1];

    for(int i = 0; i < strlen(key); i++)
    {
        if(!isdigit(key[i]))
        {
            printf("Usage: ./caesar key\n");
            return 0;
        }
    }

    int k = atoi(key);

    string text = get_string("Text: ");
    int size = strlen(text);
    char encodedtext[size + k];
    char character;

    for(int i = 0; i < size; i++)
    {
        if(isalpha(text[i]))
        {
            character = isupper(text[i]) ? 'A' : 'a';
            encodedtext[i] = (text[i] - character + k) % 26 + character;
        }
        else
        {
            encodedtext[i] = text[i];
        }
    }
    encodedtext[size] = '\0';
    printf("Encoded Text: %s\n", encodedtext);
    return 0;
}
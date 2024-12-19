#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void ColemanForm(int letters, int phrases, int words);

int main(void)
{
    int letters = 0, phrases = 0, words = 0;

    string text = get_string("Text: ");

    int textsize = strlen(text);

    bool in_word = false;

    for(int i = 0; i < textsize; i++)
    {
        if(isalpha(text[i]))
        {
            letters++;
            if (!in_word)
            {
                words++;
                in_word = true;
            }
        }
        else if(isspace(text[i]))
        {
            in_word = false;
        }
        if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            phrases++;
        }
    }
    ColemanForm(letters, phrases, words);
}

void ColemanForm(int letters, int phrases, int words)
{
    float index;
    float L = ((float)letters / words) * 100;
    float S = ((float)phrases / words) * 100;

    index = 0.0588 * L - 0.296 * S - 15.8;
    index = round(index);

    if(index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade: %d\n", (int)index);
    }
}
// preparedBy: MR
// Time taken = 8 minutes

#include<stdio.h>
#include<stdlib.h>

int vowelLower(char token)
    {
    if(token=='a' || token == 'e' || token == 'i' ||//
    token == 'o' || token == 'u') return 1;

    return 0;
    }

int vowelUpper(char token)
    {
    if(token=='A' || token == 'E' || token == 'I' ||//
    token == 'O' || token == 'U') return 1;

    return 0;
    }

int main(int argc, char *argv[])
    {
    FILE *vowel,*consonant;
    int i = 1;

    vowel = fopen("vowel.dat","w");
    consonant = fopen("consonant.dat","w");

    for (i=1;i<argc;i++)
        {
        if(vowelLower(*argv[i])|| vowelUpper(*argv[i]))
            fprintf(vowel,"%c ",*argv[i]);
        else
            fprintf(consonant,"%c ",*argv[i]);
        }

    fclose(vowel);
    fclose(consonant);
    return 0;
    }

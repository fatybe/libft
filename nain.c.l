#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>

void detect_error(char *inpute)
{
    int i;
    int a;
    int b;

    a = 0;
    b = 0;
    i = 0;
    while (inpute[i])
    {
        if (inpute[i] == 34)
            a++;
        if (inpute[i] == 39)
            b++;
        if (inpute[i] == 92)
            printf("command not found\n");
        if (inpute[i] == 59)
            printf("command not found\n");
        i++;
    }
    if (a % 2 != 0 || b % 2 != 0)
        printf("command not found\n");
}

int count_words(char *inpute)
{
    int i;
    int count;

    i = 0;
    count  = 0;
    while (inpute[i])
    {
        if (inpute[i] == 34)
        {
            i++;
            while(inpute[i] != 34)
                i++;
            count++;
            i++;
        }
        if (inpute[i] == 39)
        {
            i++;
            while(inpute[i] != 39)
                i++;
            count++;
            i++;
        }
        while (inpute[i] != 32 && inpute[i])
        {
            i++;
            if (inpute[i] == 32 || inpute[i] == '\0')
                count++;
        }
        while (inpute[i] == 32 && inpute[i])
            i++;
    }
    return (count);
}

void full_tokens(char *inpute, char *tokens)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (inpute[i] == 34)
    {
        i++;
        while (inpute[i] != 34)
            tokens[j++] = inpute[i++];
        tokens[j] = 0;
    }
    if (inpute[i] == 39)
    {
        i++;
        while (inpute[i] != 39 && inpute[i])
            tokens[j++] = inpute[i++];
        tokens[j] = 0;
    }
    if (inpute[i] != 32)
    {
        // printf("%s\n", inpute);
        while (inpute[i] != 32 && inpute[i] != 34 && inpute[i] != 39 && inpute[i])
        {
            tokens[j] = inpute[i];
            // printf("%c\n", inpute[i]);
            j++;
            i++;
        }
            
        // printf("%s\n", tokens);
        tokens[j] = '\0';
        
    }
}

void tokenization(char *inpute, char **tokens)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (inpute[i])
    {
         if (inpute[i] == 34)
         {
            full_tokens(inpute + i, tokens[j]);
            j++;
            i++;
            while (inpute[i] != 34 && inpute[i])
                i++;
            i++;
         }
         if (inpute[i] == 39)
         {
            i++;
            full_tokens(inpute + i, tokens[j]);
            j++;
            while (inpute[i] != 39 && inpute[i])
                i++;
            i++;
         }
         if (inpute[i] != 32)
        {
            // printf("   %d\n", j);
            printf("%s\n", inpute + i);
            full_tokens(inpute + i, tokens[j]);
            j++;
        }
        while (inpute[i] != 32 && inpute[i])
            i++;
        while (inpute[i] == 32 && inpute[i])
            i++;
    }
    tokens[j] = 0;
}
int main()
{
    while (1)
    {
        char *inpute;
        char **tokens;
        int n;

        inpute = readline("minishell : ");
        add_history(inpute);
        detect_error(inpute);
        n = count_words(inpute);
        printf("%d\n", n);
        tokens = malloc(sizeof(char *) * (n + 1));
        if (!tokens)
            return (0);
        tokens = 0;
        tokenization(inpute, tokens);
        int  i = 0;
        while (tokens[i])
        {
            printf("[%s] ", tokens[i]);
            i++;
        }
        printf("\n");
    }
    return (0);
}
#include "parser.h"



int main()
{
    char *inpute;
    t_token *token;
    int n;

    while (1)
    {
        inpute = readline("minishell :");
        detect_error(inpute);
        // n = count_tokens(inpute);
        token = tokenization(inpute);
        define_types(token);
        while (token)
        {
            printf("%d\n", token->type);
            token = token->next;
        }
    }
}
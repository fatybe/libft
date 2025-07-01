#ifndef PARSER_H
#define PARSER_H

#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>
typedef enum e_type
{
    T_WORD,
    SIGLE_QUOTES,
    DOUBLE_QUOTES,
    RIGHT_FLESH,
    LEFT_FLESH ,
    PIPE,
    DOUBLE_LEFT_FLESH,
    DOUBLE_RIGHT_FLESH 
}t_type;

typedef struct token
{
    char *inpute;
    struct token *next;
    t_type type;
}t_token;

void detect_error(char *inpute);
// int count_tokens(char *inpute);
t_token *tokenization(char *inpute);
void define_types(t_token *token);
int is_alpha(char c);

#endif
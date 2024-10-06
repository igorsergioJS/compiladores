#include "parser.h"
#include <iostream>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;

void Parser::Expr()
{
    if (lookahead == '+' || lookahead == '-')
    {
        // Combina o operador e o armazena
        char op = lookahead;
        Match(lookahead);  // Consome o operador

        // Processa as duas expressões recursivamente
        Expr();
        Expr();

        // Imprime o operador (notação pós-fixada)
        cout << op;
    }
    else
    {
        // Se não for um operador, deve ser um termo (número)
        Term();
    }
}

void Parser::Term()
{
    if (isdigit(lookahead))
    {
        // Imprime o dígito (como está na notação pós-fixada, imprimimos imediatamente)
        cout << lookahead;
        Match(lookahead);  // Consome o dígito
    }
    else
    {
        throw SyntaxError{};
    }
}

void Parser::Match(char t)
{
    if (t == lookahead)
        lookahead = cin.get();  // Consome o caractere de entrada
    else
        throw SyntaxError{};
}

Parser::Parser()
{
    lookahead = 0; 
}

void Parser::Start()
{
    lookahead = cin.get();
    Expr();
    if (lookahead != '\n')
        throw SyntaxError{};
}

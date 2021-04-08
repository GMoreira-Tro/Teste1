#pragma once
#include <string>
using namespace std;

class Pessoa
{
public:
    string nome;
    int idade;

    Pessoa();
    Pessoa(string nome, int idade, float saldoBancario);
    float getSaldoBancario();
    virtual string toString();

protected:
    float saldoBancario;
};


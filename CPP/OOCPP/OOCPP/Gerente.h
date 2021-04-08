#pragma once
#include "Empregado.h"
class Gerente : public Empregado
{
public:
    long tamanhoDoPau;

    Gerente(string nome, int idade, float saldoBancario, string empresa, string cargo, float salario, long tamanhoDoPau);
    string toString() override;
};


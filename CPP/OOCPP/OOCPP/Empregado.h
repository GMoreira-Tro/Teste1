#pragma once
#include "Pessoa.h"

class Empregado : public Pessoa
{
public:
    Empregado(string nome, int idade, float saldoBancario, string empresa, string cargo, float salario);
    string getEmpresa();
    string getCargo();
    float getSalario();
    string toString() override;

protected:
    string empresa;
    string cargo;
    float salario;
};


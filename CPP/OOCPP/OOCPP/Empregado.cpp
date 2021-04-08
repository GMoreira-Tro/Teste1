#include "Empregado.h"

Empregado::Empregado(string nome, int idade, float saldoBancario, string empresa, string cargo, float salario = 100)
    : Pessoa(nome, idade, saldoBancario)
{
    this->empresa = empresa;
    this->cargo = cargo;
    this->salario = salario;
}
string Empregado::getEmpresa()
{
    return empresa;
}
string Empregado::getCargo()
{
    return cargo;
}
float Empregado::getSalario()
{
    return salario;
}

string Empregado::toString()
{
    return "Nome: " + nome + "\nIdade: " + to_string(idade) + "\nSaldo bancário: " + to_string(saldoBancario) +
        "\nEmpresa: " + empresa + "\nCargo: " + cargo + "\nSalário: " + to_string(salario) + "\n";
}

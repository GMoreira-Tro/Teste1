#include "Gerente.h"

Gerente::Gerente(string nome, int idade, float saldoBancario, string empresa, string cargo, float salario, long tamanhoDoPau)
    : Empregado(nome, idade, saldoBancario, empresa, cargo, salario)
{
    this->tamanhoDoPau = tamanhoDoPau;
}
string Gerente::toString()
{
    return "Nome: " + nome + "\nIdade: " + to_string(idade) + "\nSaldo banc�rio: " + to_string(saldoBancario) +
        "\nEmpresa: " + empresa + "\nCargo: " + cargo + "\nSal�rio: " + to_string(salario) +
        "\nTamanho do pau: " + to_string(tamanhoDoPau) + "\n";
}
#include "Pessoa.h"

Pessoa::Pessoa(){}
Pessoa::Pessoa(string nome, int idade, float saldoBancario)
{
    this->nome = nome;
    this->idade = idade;
    this->saldoBancario = saldoBancario;
}

float Pessoa::getSaldoBancario()
{
    return saldoBancario;
}

string Pessoa::toString()
{
    return "Nome: " + nome + "\nIdade: " + to_string(idade) + "\nSaldo bancário: " + to_string(saldoBancario) + "\n";
}

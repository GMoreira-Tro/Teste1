#include <iostream>
#include "Gerente.h"

void printaPessoa(Pessoa* p);
void mudaPessoa(Pessoa* p, string nome);
void mudaGerente(Gerente* g, string nome);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Pessoa* gerente = new Gerente("aaaaa",20, 90000, "Vizlab", "Programador", 780, 100000);
    Pessoa g = Gerente("bbb", 34, 95000, "Google", "Embaixador", 5780, 6600000);

    printaPessoa(gerente);
    cout << gerente->toString() + "\n";

    printaPessoa(&g);
    cout << g.toString() + "\n";

    mudaPessoa(gerente, "homão da p");
    cout << gerente->nome << endl;

    Gerente gerentao = Gerente("aaaaa", 20, 90000, "Vizlab", "Programador", 780, 100000);
    mudaGerente(&gerentao, "viadinho");
    cout << gerentao.nome << endl << endl;

    Pessoa pNull;
    cout << pNull.toString();
}

void printaPessoa(Pessoa* p)
{
    p->nome = "gay";
    cout << p->toString() + "\n";
}

void mudaPessoa(Pessoa* p, string nome)
{
    p->nome = nome;
}

void mudaGerente(Gerente* g, string nome)
{
    g->nome = nome;
}
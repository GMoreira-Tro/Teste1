#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

class Pessoa
{
    public:
        string nome;
        int idade;

        Pessoa(string nome, int idade, float saldoBancario)
        {
            this->nome = nome;
            this->idade = idade;
            this->saldoBancario = saldoBancario;
        }
        float getSaldoBancario()
        {
            return saldoBancario;
        }

        virtual string toString()
        {
            return "Nome: " + nome + "\nIdade: "  + to_string(idade) + "\nSaldo bancário: " + to_string(saldoBancario) + "\n";
        }
    protected:
        float saldoBancario;
};

class Empregado : public Pessoa
{
    public:
        Empregado(string nome, int idade, float saldoBancario, string empresa, string cargo, float salario = 100)
            : Pessoa(nome,idade, saldoBancario)
        {
            this->empresa = empresa;
            this->cargo = cargo;
            this->salario = salario;
        }
        string getEmpresa()
        {
            return empresa;
        }
        string getCargo()
        {
            return cargo;
        }
        float getSalario()
        {
            return salario;
        }

        string toString() override
        {
            return "Nome: " + nome + "\nIdade: " + to_string(idade) + "\nSaldo bancário: " + to_string(saldoBancario) + 
                "\nEmpresa: " + empresa + "\nCargo: " + cargo + "\nSalário: " + to_string(salario) + "\n";
        }
    protected:
        string empresa;
        string cargo;
        float salario;
};
class Gerente : public Empregado
{
    public:
        long tamanhoDoPau;

        Gerente(string nome, int idade, float saldoBancario, string empresa, string cargo, float salario, long tamanhoDoPau)
            : Empregado(nome, idade, saldoBancario, empresa, cargo, salario)
        {
            this->tamanhoDoPau = tamanhoDoPau;
        }
        string toString() override
        {
            return "Nome: " + nome + "\nIdade: " + to_string(idade) + "\nSaldo bancário: " + to_string(saldoBancario) +
                "\nEmpresa: " + empresa + "\nCargo: " + cargo + "\nSalário: " + to_string(salario) + 
                "\nTamanho do pau: " + to_string(tamanhoDoPau) + "\n";
        }
};

void printaPessoa(Pessoa* p);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Pessoa* gerente = new Gerente("aaaaa",20, 90000, "Vizlab", "Programador", 780, 100000);
    Pessoa g = Gerente("aaaaa", 20, 90000, "Vizlab", "Programador", 780, 100000);

    cout << gerente->toString() + "\n";
    printaPessoa(gerente);

    cout << g.toString() + "\n";
    printaPessoa(&g);
}

void printaPessoa(Pessoa* p)
{
    cout << p->toString() + "\n";
}
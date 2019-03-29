#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Funcionario
{	
	double salario;

	public:
	string nome;
	int data_admissao[3];

	Funcionario(string c_nome, double c_salario, int* c_data_admissao);
	double getSalario();
	void setSalario(double novo_salario);


};

class Empresa
{
	public:
	long int cnpj;
	vector<Funcionario> V_Funcionarios;
	string nome;

	Empresa(long int cnpj, string nome);
	void aumento(double porcentagem_aumento);
};
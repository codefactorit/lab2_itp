#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Funcionario
{	
	public:
	string nome;
	double salario;

	class Data_admissao
	{
		public:
		int dia, mes, ano;
	};
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
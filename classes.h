#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Funcionario
{
	double salario;

	public:
	string nome;

	class Data_admissao
	{
		public:
		int dia, mes, ano;
	};
};

class Empresa
{
	long int cnpj;
	vector<Funcionario> V_Funcionarios;

	public:
	string nome;

	Empresa(long int cnpj, string nome);
};
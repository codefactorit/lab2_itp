#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Funcionario
{
	double salario;

	public:
	string nome;

	busca_funcionario(vector<Funcionario> lista_func);

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
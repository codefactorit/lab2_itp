#include "classes.h"

vector<Empresa>::iterator it;

double Funcionario::getSalario(){return salario;}

void Funcionario::setSalario(double novo_salario){salario = novo_salario;}

void Funcionario::Funcionario(string c_nome, double c_salario, int* c_data_admissao)
{
	nome = c_nome;
	salario = c_salario;
	for (int i = 0; i < 3; ++i){data_admissao[i] = c_data_admissao[i];}
}


Empresa::Empresa(long int pcnpj, string pnome):
	cnpj(pcnpj), nome(pnome){}

void Empresa::aumento(double porcentagem_aumento)
{
	for (int i = 0; i < V_Funcionarios.size(); ++i)
	{
		V_Funcionarios[i].setSalario(porcentagem_aumento * V_Funcionarios[i].getSalario()); 
	}
}
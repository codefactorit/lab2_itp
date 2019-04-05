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
	porcentagem_aumento += 1;

	for (int i = 0; i < V_Funcionarios.size(); ++i)
	{
		V_Funcionarios[i].setSalario(porcentagem_aumento * V_Funcionarios[i].getSalario()); 
	}
}

ostream& operator<< (ostream &o, Empresa const a)
{
	for(auto i = 0; i < a.V_Funcionarios.size(); ++i)
	{
		o << a.V_Funcionarios.nome << " Salario: " << a.V_Funcionarios.getSalario() <<" Data de admissao: ";
		for(int i = 0; i < 3; ++i)
		{
			o << a.V_Funcionarios.data_admissao[i];
			if(i!=2)
				o << "/";
		}
			o <<< endl;
	}
	
}

media_funcionarios(int total_empresas, int total_funcionarios)
{
	
}
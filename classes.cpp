#include "classes.h"

vector<Empresa>::iterator it;

Empresa::Empresa(long int pcnpj, string pnome):
	cnpj(pcnpj), nome(pnome){}

Empresa::aumento(double porcentagem_aumento)
{
	for (int i = 0; i < V_Funcionarios.size(); ++i)
	{
		V_Funcionarios[i].salario *= porcentagem_aumento; 
	}
}
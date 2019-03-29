#include "classes.h"

Empresa::Empresa(long int pcnpj, string pnome):
	cnpj(pcnpj), nome(pnome){}

busca_funcionario(vector<Funcionario> lista_func, string nome_func)
{
int i;	
bool resultado;
for(i = 0, i < lista_func.len; i++)
{
	if(nome_func == lista_func[i])
	{
		cout<<"Funcionario ja existente"<<endl;
	    return resultado = false;
	}    
	else
		return resultado = true;
}
}	
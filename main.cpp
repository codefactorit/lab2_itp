#include "classes.h"


void main()
{

	vector<Empresa> V_Empresas;
	int opcao = 0;

	cout<<"1. Para adicionar uma empresa"<<endl;
	cout<<"2. Para adicionar um funcionario"<<endl;
	cout<<"3. Listar dados de uma empresa"<<endl;
	cout<<"4. Realizar aumento para funcionarios"<<endl;
	cout<<"5. Listar funcionarios em periodo de experiencia"<<endl;
	cout<<"6. Listar media de funcionarios por empresa"<<endl<<endl<<endl;

	cout<<"Digite:";
	cin>>opcao;


	if(opcao == 1)
	{	
		//Limpar o terminal
		cout << "\033[2J\033[1;1H";

		string nome_empresa;
		long int cnpj;

		cout<<"Digite o nome da empresa:";	
		getline(cin, nome_empresa);
		cout<<endl;

		cout<<"Digite o CNPJ:";
		cin>>cnpj;
		cout<<endl;

		V_Empresas.push_back(Empresa(cnpj, nome_empresa));
	}




}

//https://www.inf.pucrs.br/~pinho/PRGSWB/STL/stl.html
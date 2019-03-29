#include <iostream>
using namespace std;
#include <algorithm>		
#include <vector>
#include <string>

class Funcionario
{	
	double salario;

	public:
	string nome;

	double getSalario();
	void setSalario(double novo_salario);

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

int main(){

		vector<Empresa> teste;
		vector<Empresa>::iterator it;

		string nome;
		int id;
		int w=0;
		while(w<3){
		cout<<"Digite o nome da Pessoa:";	
		getline(cin, nome);	
		cout<<"Digite o CNPJ:";
		cin>>id;
		cin.ignore();
		cout<<endl;

		teste.push_back(Empresa(nome, id));

		for(int i=0; i<teste.size(); ++i)
		{
			cout<<"Nome: "<<teste[i].getNome()<<endl;
			cout<<" Idade: "<<teste[i].getIdade()<<endl;
		}
			w++;
		}

		for (int i = 0; i < teste.size(); ++i){

		teste[i].idade*= 2; 
		}

		for(int i=0; i<teste.size(); ++i)
		{
			cout<<"Nome: "<<teste[i].getNome()<<endl;
			cout<<" Idade: "<<teste[i].getIdade()<<endl;
		}
}
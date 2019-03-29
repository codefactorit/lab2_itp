#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>
//eas
class Pessoa {
    string nome;
    int idade;
    public:
        Pessoa(string no, int id)
        {
            idade = id;
            nome = no;
        }
        string getNome()
        {
            return nome;
        }
        int getIdade()
        {
            return idade;
        }
};

int main(){

		vector<Pessoa> teste;
		vector<Pessoa>::iterator it;

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

		teste.push_back(Pessoa(nome, id));

		for(int i=0; i<teste.size(); ++i)
		{
			cout<<"Nome: "<<teste[i].getNome()<<endl;
			cout<<" Idade: "<<teste[i].getIdade()<<endl;
		}
			w++;
		}
}
#include <iostream>
#include <stdlib.h>
#include<vector>
#include<memory>

/* 

1. Modelagem do Sistema (Diagrama de Classes)
Antes de codar, precisamos definir quem são os "atores" do sistema:

Classe Base Pessoa: Como Médicos e Pacientes têm dados em comum (Nome, CPF, Idade), criamos uma classe mãe.
Classe Medico (Herda de Pessoa): Tem atributos exclusivos como CRM e Especialidade.
Classe Paciente (Herda de Pessoa): Tem atributos como Doenca ou Historico.
Classe Consulta: Faz o meio de campo entre Médico e Paciente (Data, Hora, ID do médico, ID do paciente).
Classe SistemaHospitalar (Composição): Gerencia listas de médicos, pacientes e consultas. É o "Controller" do sistema.

3. Conceitos de OO aplicados neste código:
Herança: Medico e Paciente herdam de Pessoa (usando : public Pessoa). Eles ganham os atributos nome, cpf e idade de graça.

Polimorfismo: O método exibirDados() é declarado como virtual na classe base e reescrito (override) nas classes filhas. Se você apontar para um Médico usando um ponteiro de Pessoa, ele ainda assim chamará a versão do Médico.

Encapsulamento: Todos os atributos são private ou protected. O mundo externo só acessa eles através de métodos getters.

Smart Pointers (unique_ptr): Em vez de usar ponteiros brutos (new e delete), usei unique_ptr. Isso garante que quando o vetor for destruído, a memória seja limpa automaticamente, evitando vazamentos de memória (memory leaks).

4. Próximos Passos (Como evoluir este projeto)
Para transformar esse código básico em um sistema robusto, você deve implementar:

Persistência de Dados (Arquivos): Atualmente, ao fechar o programa, os dados se perdem. Crie métodos como salvarDadosEmArquivo() e carregarDadosDoArquivo() usando a biblioteca <fstream>.

Validações: No método agendarConsulta(), o sistema deveria procurar nos vetores de médicos e pacientes se os CPFs informados realmente existem antes de permitir o agendamento.

Remoção e Edição: Criar métodos removerMedico(string cpf) e editarPaciente(). A remoção em vetores exige o uso da biblioteca <algorithm> com a função erase e remove_if.

Buscas: Implementar uma busca binária ou busca linear por CPF para encontrar um paciente rapidamente.

Módulo de Enfermaria/Leitos: Criar uma classe Leito com status (Ocupado/Livre) para gerenciar internações.

 */

using namespace std;


// *************** CLASSE BASE **************

class Pessoa {
	protected:
		string nome;
		string cpf;
		int idade;
		
    public:
    	
    	Pessoa(string n, string c, int i) : nome(n), cpf(c), idade(i) {} /*
		Construtor criado para inicializar a classe. Em vez de fazer a nomenclatura
		dentro das chaves das variaveis das classes com os nomes relacionados,
		foi criada uma chamada na chamada do constructor atravez dos dois pontos 
		(:). Essa chamada tem o nome de lista de inicializacao, com a lista de 
		inicializacao o C++ pula o passo de criar vazio e já constrói a 
		variável nome com o valor de n diretamente. É mais rápido e eficiente.
		A baixo um exemplo de como seria se nao tivesse a lista de inicializacao.
		
		Pessoa(string n, string c, int i) {
		    nome = n; // Atribuição normal
		    cpf = c;
		    idade = i;
		}
		
		 */
		
		// Encapsulamento (Getters)
		string getNome() const {return nome;}
		string getCpf() const { return cpf;}
		int getIdade() const {return idade;}
    	
    	virtual void exibirDados() const{
			cout << "Nome: " << nome << " | CPF: " << cpf << " | Idade: " << idade;
		}
		
		virtual ~Pessoa() {} // Destrutor virtual para polimorfismo
};


// ************** CLASSE MEDICO **************
class Medico : public Pessoa {
	private:
		string crm;
    	string especialidade;
		
    public:
    	
};


// ************* CLASSE PACIENTE ************

class Paciente : public Pessoa {
	private:
		string historicoDoenca;
    
 	public:
 		
};

// ************ CLASSE CONSULTA *************

class consulta {
	private:
		string data;
	    string hora;
	    string cpfMedico;
	    string cpfPaciente;
		
    public:
    	void exibirDados() const{
			
		}
};

// ****** CLASSE GERENCIADOR (SISTEMA) ******

class SistemaHospitalar {
	private:
		vector<unique_ptr<Medico>> medicos;
	    vector<unique_ptr<Paciente>> pacientes;
	    vector<unique_ptr<Consulta>> consultas;
		
    public:
    	// *** CRUD Medicos
    void adicionarMedico() {
		
	}
	
	void listarMedicos() {
		
	}
	
	// *** CRUD Pacientes ***
	void adicionarPaciente() {
		
	}
	
	void listarPacientes() {
		
	}
	// *** Agendamento de Consulta ***
	void agendarConsulta() {
		
	}
	
	void listarConsultas() {
		
	}
	
	
};



int main() {
	int menu;
	
	do {
		
		cout << "\n******** SISTEMA HOSPITALAR *********" << endl;
		cout << "1. Cadastrar Medico" << endl;
		cout << "2. Listar Medicos" << endl;
		cout << "3. Cadastrar Paciente" << endl;
		cout << "4. Lista Pacientes" << endl;
		cout << "5. Agendar Consulta" << endl;
		cout << "6. Listar Consultas" << endl;
		cout << "0. Sair" << endl;
		cout << "Escolha uma opcao: " << endl;
		cin >> menu;
		
		
		
	} while (menu != 0);
	
	system("pause");
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ================= CLASSE BASE =================
class Pessoa {
protected:
    string nome;
    string cpf;
    int idade;

public:
    Pessoa(string n, string c, int i) : nome(n), cpf(c), idade(i) {}
    
    // Encapsulamento (Getters)
    string getNome() const { return nome; }
    string getCpf() const { return cpf; }
    int getIdade() const { return idade; }

    virtual void exibirDados() const {
        cout << "Nome: " << nome << " | CPF: " << cpf << " | Idade: " << idade;
    }
    
    virtual ~Pessoa() {} // Mudamos para destrutor virtual comum
};

// ================= CLASSE MEDICO =================
class Medico : public Pessoa {
private:
    string crm;
    string especialidade;

public:
    Medico(string n, string c, int i, string crm, string esp) 
        : Pessoa(n, c, i), crm(crm), especialidade(esp) {}

    string getCrm() const { return crm; }
    string getEspecialidade() const { return especialidade; }

    void exibirDados() const { // Tirei o 'override' daqui
        Pessoa::exibirDados();
        cout << " | CRM: " << crm << " | Especialidade: " << especialidade << endl;
    }
};

// ================= CLASSE PACIENTE =================
class Paciente : public Pessoa {
private:
    string historicoDoenca;

public:
    Paciente(string n, string c, int i, string hist) 
        : Pessoa(n, c, i), historicoDoenca(hist) {}

    string getHistorico() const { return historicoDoenca; }

    void exibirDados() const { // Tirei o 'override' daqui
        Pessoa::exibirDados();
        cout << " | Historico: " << historicoDoenca << endl;
    }
};

// ================= CLASSE CONSULTA =================
class Consulta {
private:
    string data;
    string hora;
    string cpfMedico;
    string cpfPaciente;

public:
    Consulta(string d, string h, string cpfM, string cpfP) 
        : data(d), hora(h), cpfMedico(cpfM), cpfPaciente(cpfP) {}

    void exibirDados() const {
        cout << "Data: " << data << " | Hora: " << hora 
             << " | CPF Medico: " << cpfMedico 
             << " | CPF Paciente: " << cpfPaciente << endl;
    }
};

// ================= CLASSE GERENCIADOR (SISTEMA) =================
class SistemaHospitalar {
private:
    // MUDANÇA AQUI: Vetores agora guardam os objetos diretamente, ao invés de ponteiros
    vector<Medico> medicos;
    vector<Paciente> pacientes;
    vector<Consulta> consultas;

public:
    // --- CRUD Médicos ---
    void adicionarMedico() {
        string nome, cpf, crm, esp;
        int idade;
        cout << "--- Cadastrar Medico ---\n";
        cout << "Nome: "; cin.ignore(); getline(cin, nome);
        cout << "CPF: "; cin >> cpf;
        cout << "Idade: "; cin >> idade;
        cout << "CRM: "; cin >> crm;
        cout << "Especialidade: "; cin.ignore(); getline(cin, esp);
        
        // MUDANÇA AQUI: Usando push_back normal
        medicos.push_back(Medico(nome, cpf, idade, crm, esp));
        cout << "Medico cadastrado com sucesso!\n";
    }

    void listarMedicos() {
        cout << "\n--- Lista de Medicos ---\n";
        for (unsigned int i = 0; i < medicos.size(); i++) { // Mudança no 'for' para compatibilidade antiga
            medicos[i].exibirDados();
        }
    }

    // --- CRUD Pacientes ---
    void adicionarPaciente() {
        string nome, cpf, hist;
        int idade;
        cout << "--- Cadastrar Paciente ---\n";
        cout << "Nome: "; cin.ignore(); getline(cin, nome);
        cout << "CPF: "; cin >> cpf;
        cout << "Idade: "; cin >> idade;
        cout << "Historico (Doenca): "; cin.ignore(); getline(cin, hist);
        
        pacientes.push_back(Paciente(nome, cpf, idade, hist));
        cout << "Paciente cadastrado com sucesso!\n";
    }

    void listarPacientes() {
        cout << "\n--- Lista de Pacientes ---\n";
        for (unsigned int i = 0; i < pacientes.size(); i++) {
            pacientes[i].exibirDados();
        }
    }

    // --- Agendamento de Consulta ---
    void agendarConsulta() {
        string data, hora, cpfM, cpfP;
        cout << "--- Agendar Consulta ---\n";
        cout << "Data (DD/MM/AAAA): "; cin >> data;
        cout << "Hora (HH:MM): "; cin >> hora;
        cout << "CPF do Medico: "; cin >> cpfM;
        cout << "CPF do Paciente: "; cin >> cpfP;
        
        consultas.push_back(Consulta(data, hora, cpfM, cpfP));
        cout << "Consulta agendada com sucesso!\n";
    }

    void listarConsultas() {
        cout << "\n--- Lista de Consultas ---\n";
        for (unsigned int i = 0; i < consultas.size(); i++) {
            consultas[i].exibirDados();
        }
    }
};

// ================= MENU PRINCIPAL =================
int main() {
    SistemaHospitalar sistema;
    int opcao;

    do {
        cout << "\n===== SISTEMA HOSPITALAR =====\n";
        cout << "1. Cadastrar Medico\n";
        cout << "2. Listar Medicos\n";
        cout << "3. Cadastrar Paciente\n";
        cout << "4. Listar Pacientes\n";
        cout << "5. Agendar Consulta\n";
        cout << "6. Listar Consultas\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: sistema.adicionarMedico(); break;
            case 2: sistema.listarMedicos(); break;
            case 3: sistema.adicionarPaciente(); break;
            case 4: sistema.listarPacientes(); break;
            case 5: sistema.agendarConsulta(); break;
            case 6: sistema.listarConsultas(); break;
            case 0: cout << "Saindo do sistema...\n"; break;
            default: cout << "Opcao invalida!\n";
        }
    } while (opcao != 0);

    return 0;
}
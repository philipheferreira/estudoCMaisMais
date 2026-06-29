#include <iostream>
#include <stdlib.h>



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



int main() {

}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Estrutura para armazenar informações dos estudantes
struct Estudante {
    string nome;
    string codigo;
    float notaTeorico;
    float notaPratico;
};

// Estrutura para armazenar informações das turmas
struct Turma {
    string curso;
    string codigo;
    string horario;
    string nomeFormador;
    string senha;
    vector<Estudante> estudantes;
};

// Classe para representar um formador
class Formador {
public:
    string nome;
    string senha;
    vector<Turma> turmas;

    Formador(string n, string s) : nome(n), senha(s) {}

    void adicionarTurma(Turma turma) {
        turmas.push_back(turma);
    }

    Turma* buscarTurma(string codigo) {
        for (auto& turma : turmas) {
            if (turma.codigo == codigo) {
                return &turma;
            }
        }
        return nullptr;
    }

    void alterarSenha(string novaSenha) {
        senha = novaSenha;
    }
};

// Classe para representar um funcionário da secretaria
class FuncionarioSecretaria {
public:
    string nome;
    string senha;

    FuncionarioSecretaria(string n, string s) : nome(n), senha(s) {}
};

// Classe para representar o administrador
class Admin {
public:
    string email;
    string senha;

    Admin(string e, string s) : email(e), senha(s) {}

    bool autenticar(string e, string s) {
        return email == e && senha == s;
    }
};

// Classe para a mini-secretaria
class MiniSecretaria {
public:
    vector<Turma> turmas;
    vector<Formador> formadores;
    vector<FuncionarioSecretaria> funcionariosSecretaria;
    Admin admin;

    MiniSecretaria() : admin("admin@topo.co.mz", "01234567") {}

    void adicionarFormador(Formador formador) {
        formadores.push_back(formador);
    }

    void adicionarTurma(Turma turma) {
        turmas.push_back(turma);
    }

    void adicionarFuncionarioSecretaria(FuncionarioSecretaria funcionario) {
        funcionariosSecretaria.push_back(funcionario);
    }

    Turma* buscarTurma(string codigo) {
        for (auto& turma : turmas) {
            if (turma.codigo == codigo) {
                return &turma;
            }
        }
        return nullptr;
    }

    Formador* autenticarFormador(string nome, string senha) {
        for (auto& formador : formadores) {
            if (formador.nome == nome && formador.senha == senha) {
                return &formador;
            }
        }
        return nullptr;
    }

    FuncionarioSecretaria* autenticarFuncionarioSecretaria(string nome, string senha) {
        for (auto& funcionario : funcionariosSecretaria) {
            if (funcionario.nome == nome && funcionario.senha == senha) {
                return &funcionario;
            }
        }
        return nullptr;
    }

    void listarTurmas() {
        for (const auto& turma : turmas) {
            cout << "Curso: " << turma.curso << ", Codigo: " << turma.codigo << ", Horario: " << turma.horario << ", Formador: " << turma.nomeFormador << endl;
        }
    }

    void listarEstudantes(const Turma& turma) {
        for (const auto& estudante : turma.estudantes) {
            cout << "Nome: " << estudante.nome << ", Codigo: " << estudante.codigo << ", Nota Teorico: " << estudante.notaTeorico << ", Nota Pratico: " << estudante.notaPratico << endl;
        }
    }

    void adicionarEstudante(Turma& turma, Estudante estudante) {
        turma.estudantes.push_back(estudante);
    }

    void removerEstudante(Turma& turma, string codigo) {
        turma.estudantes.erase(remove_if(turma.estudantes.begin(), turma.estudantes.end(), [&](Estudante& e) {
            return e.codigo == codigo;
        }), turma.estudantes.end());
    }

    void adicionarNota(Turma& turma, string codigo, float notaTeorico, float notaPratico) {
        for (auto& estudante : turma.estudantes) {
            if (estudante.codigo == codigo) {
                estudante.notaTeorico = notaTeorico;
                estudante.notaPratico = notaPratico;
                break;
            }
        }
    }
};

// Função para o menu principal
void menuPrincipal(MiniSecretaria& secretaria) {
    int opcao;
    do {
        cout << "\nMenu Principal\n";
        cout << "1. Acessar como Secretaria\n";
        cout << "2. Acessar como Formador\n";
        cout << "3. Acessar como Admin\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1: {
                string nome, senha;
                int tentativas = 0;
                bool autenticado = false;
                while (tentativas < 3 && !autenticado) {
                    cout << "Nome da Secretaria: ";
                    getline(cin, nome);
                    cout << "Senha: ";
                    getline(cin, senha);
                    FuncionarioSecretaria* funcionario = secretaria.autenticarFuncionarioSecretaria(nome, senha);
                    if (funcionario) {
                        autenticado = true;
                        // Implementar funcionalidades da secretaria
                        int opcaoSecretaria;
                        do {
                            cout << "\nMenu da Secretaria\n";
                            cout << "1. Listar Turmas\n";
                            cout << "2. Listar Estudantes\n";
                            cout << "0. Sair\n";
                            cout << "Escolha uma opcao: ";
                            cin >> opcaoSecretaria;
                            cin.ignore();

                            switch (opcaoSecretaria) {
                                case 1:
                                    secretaria.listarTurmas();
                                    break;
                                case 2: {
                                    string codigoTurma;
                                    cout << "Codigo da Turma: ";
                                    getline(cin, codigoTurma);
                                    Turma* turma = secretaria.buscarTurma(codigoTurma);
                                    if (turma) {
                                        secretaria.listarEstudantes(*turma);
                                    } else {
                                        cout << "Turma nao encontrada.\n";
                                    }
                                    break;
                                }
                                case 0:
                                    cout << "Saindo...\n";
                                    break;
                                default:
                                    cout << "Opcao invalida!\n";
                            }
                        } while (opcaoSecretaria != 0);
                    } else {
                        tentativas++;
                        if (tentativas < 3) {
                            cout << "Credenciais invalidas. Tente novamente.\n";
                        } else {
                            cout << "Voce excedeu o numero de tentativas permitidas.\n";
                        }
                    }
                }
                break;
            }
            case 2: {
                string nome, senha;
                int tentativas = 0;
                bool autenticado = false;
                while (tentativas < 3 && !autenticado) {
                    cout << "Nome do Formador: ";
                    getline(cin, nome);
                    cout << "Senha: ";
                    getline(cin, senha);
                    Formador* formador = secretaria.autenticarFormador(nome, senha);
                    if (formador) {
                        autenticado = true;
                        // Implementar funcionalidades do formador
                        int opcaoFormador;
                        do {
                            cout << "\nMenu do Formador\n";
                            cout << "1. Alterar Senha\n";
                            cout << "2. Adicionar Estudante\n";
                            cout << "3. Remover Estudante\n";
                            cout << "4. Adicionar Nota\n";
                            cout << "5. Listar Estudantes\n";
                            cout << "0. Sair\n";
                            cout << "Escolha uma opcao: ";
                            cin >> opcaoFormador;
                            cin.ignore();

                            switch (opcaoFormador) {
                                case 1: {
                                    string novaSenha;
                                    cout << "Digite a nova senha: ";
                                    getline(cin, novaSenha);
                                    formador->alterarSenha(novaSenha);
                                    cout << "Senha alterada com sucesso!\n";
                                    break;
                                }
                                case 2: {
                                    string nomeEstudante, codigoEstudante;
                                    cout << "Nome do Estudante: ";
                                    getline(cin, nomeEstudante);
                                    cout << "Codigo do Estudante: ";
                                    getline(cin, codigoEstudante);
                                    formador->turmas[0].estudantes.push_back({nomeEstudante, codigoEstudante, 0, 0});
                                    cout << "Estudante adicionado com sucesso!\n";
                                    break;
                                }
                                case 3: {
                                    string codigoEstudante;
                                    cout << "Codigo do Estudante: ";
                                    getline(cin, codigoEstudante);
                                    secretaria.removerEstudante(formador->turmas[0], codigoEstudante);
                                    cout << "Estudante removido com sucesso!\n";
                                    break;
                                }
                                case 4: {
                                    string codigoEstudante;
                                    float notaTeorico, notaPratico;
                                    cout << "Codigo do Estudante: ";
                                    getline(cin, codigoEstudante);
                                    cout << "Nota Teorico: ";
                                    cin >> notaTeorico;
                                    cout << "Nota Pratico: ";
                                    cin >> notaPratico;
                                    secretaria.adicionarNota(formador->turmas[0], codigoEstudante, notaTeorico, notaPratico);
                                    cout << "Nota adicionada com sucesso!\n";
                                    break;
                                }
                                case 5:
                                    secretaria.listarEstudantes(formador->turmas[0]);
                                    break;
                                case 0:
                                    cout << "Saindo...\n";
                                    break;
                                default:
                                    cout << "Opcao invalida!\n";
                            }
                        } while (opcaoFormador != 0);
                    } else {
                        tentativas++;
                        if (tentativas < 3) {
                            cout << "Credenciais invalidas. Tente novamente.\n";
                        } else {
                            cout << "Voce excedeu o numero de tentativas permitidas.\n";
                        }
                    }
                }
                break;
            }
            case 3: {
                string email, senha;
                cout << "Email do Admin: ";
                getline(cin, email);
                cout << "Senha: ";
                getline(cin, senha);
                if (secretaria.admin.autenticar(email, senha)) {
                    // Implementar funcionalidades do admin
                    int opcaoAdmin;
                    do {
                        cout << "\nMenu do Admin\n";
                        cout << "1. Adicionar Formador\n";
                        cout << "2. Adicionar Funcionario da Secretaria\n";
                        cout << "0. Sair\n";
                        cout << "Escolha uma opcao: ";
                        cin >> opcaoAdmin;
                        cin.ignore();

                        switch (opcaoAdmin) {
                            case 1: {
                                string nomeFormador, senhaFormador;
                                cout << "Nome do Formador: ";
                                getline(cin, nomeFormador);
                                cout << "Senha do Formador: ";
                                getline(cin, senhaFormador);
                                secretaria.adicionarFormador(Formador(nomeFormador, senhaFormador));
                                cout << "Formador adicionado com sucesso!\n";
                                break;
                            }
                            case 2: {
                                string nomeFuncionario, senhaFuncionario;
                                cout << "Nome do Funcionario: ";
                                getline(cin, nomeFuncionario);
                                cout << "Senha do Funcionario: ";
                                getline(cin, senhaFuncionario);
                                secretaria.adicionarFuncionarioSecretaria(FuncionarioSecretaria(nomeFuncionario, senhaFuncionario));
                                cout << "Funcionario adicionado com sucesso!\n";
                                break;
                            }
                            case 0:
                                cout << "Saindo...\n";
                                break;
                            default:
                                cout << "Opcao invalida!\n";
                        }
                    } while (opcaoAdmin != 0);
                } else {
                    cout << "Voce tentou danificar o sistema acessando uma area nao permitida. O diretor da instituicao foi informado disso. Contacte o departamento de TI.\n";
                }
                break;
            }
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opcao invalida!\n";
        }
    } while (opcao != 0);
}

int main() {
    MiniSecretaria secretaria;

    // Adicionar dados iniciais (exemplo)
    Formador formador1("Professor1", "senha1");
    secretaria.adicionarFormador(formador1);

    Turma turma1 = {"Informatica", "T1-M-01-01-2023", "16hr", "Professor1", "senhaTurma1"};
    secretaria.adicionarTurma(turma1);
    secretaria.adicionarEstudante(turma1, {"Estudante1", "001", 0.0, 0.0});

    menuPrincipal(secretaria);

    return 0;
}

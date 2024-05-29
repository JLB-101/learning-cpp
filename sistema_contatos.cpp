#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Função para realizar login
bool login() {
    string email, password;
    int attempts = 0;
    while (attempts < 3) {
        cout << "Email: ";
        cin >> email;
        cout << "Senha: ";
        cin >> password;

        if (email == "admin@lf.com" && password == "admin") {
            return true;
        } else {
            cout << "Email ou senha incorretos. Tentativa " << (attempts + 1) << " de 3\n";
            attempts++;
        }
    }
    return false;
}

// Função para exibir o menu
void showMenu() {
    cout << "\nMenu:\n";
    cout << "1. Procurar por código do funcionário\n";
    cout << "2. Listar todos os funcionários\n";
    cout << "3. Adicionar novo funcionário\n";
    cout << "4. Editar funcionário\n";
    cout << "5. Eliminar funcionário\n";
    cout << "0. Sair\n";
    cout << "Escolha uma opção: ";
}

// Função para procurar um funcionário por código
void searchByCode(const vector<int>& lf) {
    int x;
    cout << "Digite o código do funcionário (1 a " << lf.size() << "): ";
    cin >> x;

    if (x >= 1 && x <= lf.size()) {
        cout << "\nNúmero de telefone: " << lf[x - 1] << "\n"; // Ajuste para índice começar em 1
    } else {
        cout << "Oops, código não existe!!! \n";
    }
}

// Função para listar todos os funcionários
void listAll(const vector<int>& lf) {
    cout << "Lista de todos os funcionários:\n";
    for (size_t i = 0; i < lf.size(); ++i) {
        cout << "Código " << i + 1 << ": " << lf[i] << "\n"; // Ajuste para exibir código começando em 1
    }
}

// Função para adicionar um novo funcionário
void addEmployee(vector<int>& lf) {
    int newPhone;
    cout << "Digite o número de telefone do novo funcionário: ";
    cin >> newPhone;
    lf.push_back(newPhone);
    cout << "Funcionário adicionado com sucesso!\n";
}

// Função para editar o número de telefone de um funcionário
void editEmployee(vector<int>& lf) {
    int x;
    cout << "Digite o código do funcionário a ser editado (1 a " << lf.size() << "): ";
    cin >> x;

    if (x >= 1 && x <= lf.size()) {
        int newPhone;
        cout << "Digite o novo número de telefone: ";
        cin >> newPhone;
        lf[x - 1] = newPhone; // Ajuste para índice começar em 1
        cout << "Número de telefone atualizado com sucesso!\n";
    } else {
        cout << "Oops, código não existe!!! \n";
    }
}

// Função para eliminar um funcionário
void deleteEmployee(vector<int>& lf) {
    int x;
    cout << "Digite o código do funcionário a ser eliminado (1 a " << lf.size() << "): ";
    cin >> x;

    if (x >= 1 && x <= lf.size()) {
        lf.erase(lf.begin() + (x - 1)); // Ajuste para índice começar em 1
        cout << "Funcionário eliminado com sucesso!\n";
    } else {
        cout << "Oops, código não existe!!! \n";
    }
}

int main() {
    vector<int> lf = {840011222, 840022333, 840033444, 840044555, 840055666};

    cout << "SISTEMA DE BUSCA DE CONTACTOS\n";

    while (true) {
        if (!login()) {
            char choice;
            cout << "Você falhou em 3 tentativas de login. Deseja continuar (s) ou sair (q)? ";
            cin >> choice;
            if (choice == 'q') {
                break;
            }
        } else {
            int option;
            do {
                showMenu();
                cin >> option;

                switch (option) {
                    case 1:
                        searchByCode(lf);
                        break;
                    case 2:
                        listAll(lf);
                        break;
                    case 3:
                        addEmployee(lf);
                        break;
                    case 4:
                        editEmployee(lf);
                        break;
                    case 5:
                        deleteEmployee(lf);
                        break;
                    case 0:
                        cout << "Saindo do sistema...\n";
                        break;
                    default:
                        cout << "Opção inválida, tente novamente.\n";
                }
            } while (option != 0);
            break;
        }
    }

    return 0;
}

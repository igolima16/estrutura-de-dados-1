include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX = 100;

struct Funcionario {
    int prontuario;
    string nome;
    double salario;
};

Funcionario lista[MAX];
int total = 0;

int buscarPorProntuario(int pront) {
    for (int i = 0; i < total; i++) {
        if (lista[i].prontuario == pront)
            return i;
    }
    return -1;
}

void incluir() {
    if (total == MAX) {
        cout << "Lista cheia!\n";
        return;
    }

    Funcionario f;
    cout << "\nProntuario: ";
    cin >> f.prontuario;

    if (buscarPorProntuario(f.prontuario) != -1) {
        cout << "Erro: ja existe um funcionario com esse prontuario.\n";
        return;
    }

    cin.ignore();
    cout << "Nome: ";
    getline(cin, f.nome);
    cout << "Salario: ";
    cin >> f.salario;

    lista[total] = f;
    total++;
    cout << "Funcionario incluido com sucesso!\n";
}

void excluir() {
    int pront;
    cout << "\nProntuario a excluir: ";
    cin >> pront;

    int pos = buscarPorProntuario(pront);
    if (pos == -1) {
        cout << "Funcionario nao encontrado.\n";
        return;
    }

    for (int i = pos; i < total - 1; i++) {
        lista[i] = lista[i + 1];
    }
    total--;
    cout << "Funcionario excluido com sucesso!\n";
}

void pesquisar() {
    int pront;
    cout << "\nProntuario a pesquisar: ";
    cin >> pront;

    int pos = buscarPorProntuario(pront);
    if (pos == -1) {
        cout << "Funcionario nao encontrado.\n";
        return;
    }

    cout << "\n--- Funcionario Encontrado ---\n";
    cout << "Prontuario: " << lista[pos].prontuario << "\n";
    cout << "Nome: "       << lista[pos].nome << "\n";
    cout << fixed << setprecision(2);
    cout << "Salario: R$ " << lista[pos].salario << "\n";
}

void listar() {
    if (total == 0) {
        cout << "\nNenhum funcionario cadastrado.\n";
        return;
    }

    double soma = 0;
    cout << "\n--- Lista de Funcionarios ---\n";
    cout << fixed << setprecision(2);

    for (int i = 0; i < total; i++) {
        cout << "\nProntuario: " << lista[i].prontuario << "\n";
        cout << "Nome: "        << lista[i].nome << "\n";
        cout << "Salario: R$ "  << lista[i].salario << "\n";
        soma += lista[i].salario;
    }

    cout << "\nTotal de salarios: R$ " << soma << "\n";
}

void exibirMenu() {
    cout << "\n===== MENU =====\n";
    cout << "0. Sair\n";
    cout << "1. Incluir\n";
    cout << "2. Excluir\n";
    cout << "3. Pesquisar\n";
    cout << "4. Listar\n";
    cout << "Opcao: ";
}

int main() {
    int opcao;

    do {
        exibirMenu();
        cin >> opcao;

        switch (opcao) {
            case 0: cout << "Encerrando...\n"; break;
            case 1: incluir();   break;
            case 2: excluir();   break;
            case 3: pesquisar(); break;
            case 4: listar();    break;
            default: cout << "Opcao invalida.\n";
        }
    } while (opcao != 0);

    return 0;
}

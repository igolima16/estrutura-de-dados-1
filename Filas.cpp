#include <iostream>

using namespace std;

int main() {
    int senhasGeradas[1000];
    int inicioGeradas = 0;
    int fimGeradas = 0;

    int senhasAtendidas[1000];
    int inicioAtendidas = 0;
    int fimAtendidas = 0;

    int contadorSenha = 0;
    int opcao;

    do {
        int aguardando = fimGeradas - inicioGeradas;

        cout << "\nSenhas aguardando atendimento: " << aguardando << "\n";
        cout << "0. Sair\n";
        cout << "1. Gerar senha\n";
        cout << "2. Realizar atendimento\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            contadorSenha++;
            senhasGeradas[fimGeradas] = contadorSenha;
            fimGeradas++;
        } else if (opcao == 2) {
            if (inicioGeradas < fimGeradas) {
                int senhaDaVez = senhasGeradas[inicioGeradas];
                inicioGeradas++;
                
                cout << "Atendendo a senha: " << senhaDaVez << "\n";
                
                senhasAtendidas[fimAtendidas] = senhaDaVez;
                fimAtendidas++;
            } else {
                cout << "Nenhuma senha aguardando atendimento no momento.\n";
            }
        } else if (opcao == 0) {
            if (inicioGeradas < fimGeradas) {
                cout << "Ainda ha senhas na fila. Nao e possivel encerrar o programa.\n";
                opcao = -1; 
            }
        } else {
            cout << "Opcao invalida. Tente novamente.\n";
        }

    } while (opcao != 0);

    cout << "\nPrograma encerrado.\n";
    cout << "Quantidade total de senhas atendidas: " << fimAtendidas << "\n";

    return 0;
}

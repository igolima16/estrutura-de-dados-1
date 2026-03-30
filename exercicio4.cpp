#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream arq("nomes.txt");
    string nome;

    while (getline(arq, nome)) {

        int i;
        int pos = 0;

        for (i = 0; i < nome.length(); i++) {
            if (nome[i] == ' ') {
                pos = i;
            }
        }

        string sobrenome = "";
        for (i = pos + 1; i < nome.length(); i++) {
            char c = nome[i];
            if (c >= 'a' && c <= 'z') {
                c = c - 32;
            }
            sobrenome = sobrenome + c;
        }

        cout << sobrenome << ", ";

        string palavra = "";

        for (i = 0; i < pos; i++) {
            if (nome[i] != ' ') {
                palavra = palavra + nome[i];
            } else {
                cout << palavra[0] << ". ";
                palavra = "";
            }
        }

        if (palavra != "") {
            cout << palavra[0] << ".";
        }

        cout << endl;
    }

    arq.close();

    return 0;
}
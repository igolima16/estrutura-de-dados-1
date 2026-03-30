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
            sobrenome = sobrenome + nome[i];
        }

        string resto = "";
        for (i = 0; i < pos; i++) {
            resto = resto + nome[i];
        }

        cout << sobrenome << ", " << resto << endl;
    }

    arq.close();

    return 0;
}
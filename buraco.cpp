#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string todasCartas[104];
    string mao[4][11];

    int i, j;

    int pos = 0;
    for (int baralho = 1; baralho <= 2; baralho++) {
        for (int naipe = 1; naipe <= 4; naipe++) {
            for (int numero = 1; numero <= 13; numero++) {

                string carta;

                if (numero < 10) {
                    carta = to_string(naipe) + "0" + to_string(numero) + to_string(baralho);
                } else {
                    carta = to_string(naipe) + to_string(numero) + to_string(baralho);
                }

                todasCartas[pos] = carta;
                pos++;
            }
        }
    }

    srand(time(0));
    for (i = 0; i < 104; i++) {
        int r = rand() % 104;

        string temp = todasCartas[i];
        todasCartas[i] = todasCartas[r];
        todasCartas[r] = temp;
    }

    int k = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 11; j++) {
            mao[i][j] = todasCartas[k];
            k++;
        }
    }

    for (i = 0; i < 4; i++) {
        cout << "Jogador " << i + 1 << ":\n";

        for (j = 0; j < 11; j++) {
            cout << mao[i][j] << " ";
        }

        cout << "\n\n";
    }

    return 0;
}
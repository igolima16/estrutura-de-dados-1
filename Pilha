#include <iostream>

using namespace std;

struct PilhaVetor {
    int itens[30];
    int topo;
};

void inicializar(PilhaVetor &p) {
    p.topo = -1;
}

bool vazia(PilhaVetor &p) {
    return p.topo == -1;
}

void empilhar(PilhaVetor &p, int valor) {
    p.topo++;
    p.itens[p.topo] = valor;
}

int desempilhar(PilhaVetor &p) {
    int valor = p.itens[p.topo];
    p.topo--;
    return valor;
}

int espiarTopo(PilhaVetor &p) {
    return p.itens[p.topo];
}

int main() {
    PilhaVetor pares, impares;
    inicializar(pares);
    inicializar(impares);

    int lidos = 0;
    int anterior = 0;

    cout << "--- Digite 30 numeros em ordem crescente ---" << endl;

    while (lidos < 30) {
        int atual;
        cout << "Digite o " << (lidos + 1) << "o numero: ";
        cin >> atual;

        if (lidos == 0 || atual > anterior) {
            if (atual % 2 == 0) {
                empilhar(pares, atual);
            } else {
                empilhar(impares, atual);
            }
            anterior = atual;
            lidos++;
        } else {
            cout << "Erro! O numero precisa ser maior que " << anterior << ". Tente de novo." << endl;
        }
    }

    cout << "\n--- Numeros desempilhados em ordem decrescente ---" << endl;

    while (!vazia(pares) || !vazia(impares)) {
        if (!vazia(pares) && !vazia(impares)) {
            if (espiarTopo(pares) > espiarTopo(impares)) {
                cout << desempilhar(pares) << " ";
            } else {
                cout << desempilhar(impares) << " ";
            }
        } else if (!vazia(pares)) {
            cout << desempilhar(pares) << " ";
        } else {
            cout << desempilhar(impares) << " ";
        }
    }
    
    cout << endl;
    return 0;
}

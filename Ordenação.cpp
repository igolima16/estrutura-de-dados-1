#include <iostream>

using namespace std;

void imprimirVetor(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void shellSort(int v[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i += 1) {
            int temp = v[i];
            int j;
            
            for (j = i; j >= gap && v[j - gap] > temp; j -= gap) {
                v[j] = v[j - gap];
            }
            
            v[j] = temp;
        }
    }
}

int main() {
    int v[] = {49, 38, 58, 87, 34, 93, 26, 13};
    int n = sizeof(v) / sizeof(v[0]);

    cout << "Vetor antes da ordenacao: ";
    imprimirVetor(v, n);

    shellSort(v, n);

    cout << "Vetor apos a ordenacao:   ";
    imprimirVetor(v, n);

    return 0;
}

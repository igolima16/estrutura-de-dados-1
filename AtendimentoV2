#include <iostream>

using namespace std;

struct NodeSenha {
    int numero;
    NodeSenha* prox;
};

struct Fila {
    NodeSenha* inicio;
    NodeSenha* fim;
    int tamanho;

    Fila() {
        inicio = nullptr;
        fim = nullptr;
        tamanho = 0;
    }
};

struct Guiche {
    int id;
    Fila senhasAtendidas;
    Guiche* prox;

    Guiche(int _id) {
        id = _id;
        prox = nullptr;
    }
};

struct ListaGuiches {
    Guiche* inicio;
    int quantidade;

    ListaGuiches() {
        inicio = nullptr;
        quantidade = 0;
    }
};

void enfileirar(Fila* f, int numero) {
    NodeSenha* novo = new NodeSenha();
    novo->numero = numero;
    novo->prox = nullptr;
    
    if (f->fim != nullptr) {
        f->fim->prox = novo;
    }
    f->fim = novo;
    
    if (f->

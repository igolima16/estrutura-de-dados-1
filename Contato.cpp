#include <iostream>
#include <string>

using namespace std;

class Data {
public:
    int dia;
    int mes;
    int ano;

    Data() {
        dia = 1;
        mes = 1;
        ano = 2000;
    }

    int getDia() { return dia; }
    int getMes() { return mes; }
    int getAno() { return ano; }

    void setDia(int d) { dia = d; }
    void setMes(int m) { mes = m; }
    void setAno(int a) { ano = a; }
};

class Contato {
public:
    string nome;
    string email;
    string telefone;
    Data dtnasc;

    Contato() {
        nome = "";
        email = "";
        telefone = "";
    }

    string getNome()     { return nome; }
    string getEmail()    { return email; }
    string getTelefone() { return telefone; }
    Data   getDtnasc()   { return dtnasc; }

    void setNome(string n)     { nome = n; }
    void setEmail(string e)    { email = e; }
    void setTelefone(string t) { telefone = t; }
    void setDtnasc(Data d)     { dtnasc = d; }

    int idade() {
        int anoAtual = 2026;
        return anoAtual - dtnasc.getAno();
    }
};

int main() {

    Contato agenda[5];

    int dia, mes, ano;
    string nome, email, telefone;

    cout << "=== Cadastro de Contatos ===" << endl;

    for (int i = 0; i < 5; i++) {

        cout << "\n[ Contato " << (i + 1) << " ]" << endl;

        cout << "Nome     : ";
        cin.ignore();
        getline(cin, nome);
        agenda[i].setNome(nome);

        cout << "E-mail   : ";
        getline(cin, email);
        agenda[i].setEmail(email);

      

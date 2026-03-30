#include <iostream>
using namespace std;

int main() {
    string msg;
    cin >> msg;

    string invertida = "";
    int i;

    for (i = msg.length() - 1; i >= 0; i--) {
        invertida = invertida + msg[i];
    }

    if (msg == invertida) {
        cout << "Palindromo";
    } else {
        cout << "Nao eh";
    }

    return 0;
}
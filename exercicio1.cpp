#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    string msg;
    cin >> msg;

    int i, j, k;

    for (i = 5; i <= 20; i++) {
        system("cls");

        for (j = 0; j < msg.length(); j++) {

            for (k = 0; k < i + j; k++) {
                cout << endl;
            }

            cout << msg[j];
        }

        Sleep(200);
    }

    return 0;
}
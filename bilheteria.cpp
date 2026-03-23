#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int entrada = 0;
    int disponivel = 0;
    int ocupado = 0;
    int matriz [15] [40];
    int l,c;
    float bilheteria;

    for (l=0 ; l < 15; l++){
            for (c=0 ; c < 40; c++){
                matriz [l] [c] = 0;
            }
        }

    do{
        cout << "========menu===========\n" << "0 - Finalizar\n" << "1 - Reservar Poltrona\n" 
        << "2 - Mapa de ocupação\n" << "3 - Faturamento\n";
        cout << "Digite a opção que deseja de 0 a 3: ";
        cin >> entrada;

        while (entrada < 0 or entrada > 3)
        {
            cout << "========menu===========\n" << "0 - Finalizar\n" << "1 - Reservar Poltrona\n" 
        << "2 - Mapa de ocupação\n" << "3 - Faturamento\n";
        cout << "Digite a opção que deseja de 0 a 3: ";
        cin >> entrada;
        }


        
        if (entrada == 1){
            int fileira;
            cout << "digite a fileira que deseja: ";
            cin >> fileira;

            while (fileira < 0 or fileira > 15)
            {
                cout << "Digite um fileira de 1 até 15: ";
                cin >> fileira;
            }

            int poltrona;
            cout << "digite a poltrona: \n";
            cin >> poltrona;

            while (poltrona < 0 or poltrona > 40)
            {
                cout << "Digite uma poltrona de 1 até 40: \n";
                cin >> poltrona;
            }

            if(matriz[fileira][poltrona] == 0){
                matriz[fileira][poltrona] = 1;
                cout << "Poltrona reservada com sucesso\n";
            }
            else{
                cout << "Esta poltrona ja está ocupada\n" ;
            }

        }
        else if (entrada == 2)
        {
            for (l=0 ; l < 15; l++){
                for (c=0 ; c < 40; c++){
                    if (matriz [l] [c] == 0){
                        cout << setw(4) << " . " ;
                    }
                    else{
                        cout << setw(4) << " # " ;
                    }
                } 
                cout << endl;
        }
        
        }
        else if(entrada == 3){
            for (l=0 ; l < 15; l++){
                for (c=0 ; c < 40; c++){
                    if (matriz [l] [c] == 0){
                        disponivel++;
                    }
                    else{
                        ocupado++;
                        if (l <= 6){
                            bilheteria+=50;
                        }
                        else if (l <= 10)
                        {
                            bilheteria+=30;
                        }
                        else{
                            bilheteria+=15;
                        }
                    }
                }
        }
        cout << "Assentos disponiveis: " << disponivel << endl;
        cout << "Assentos ocupados: " << ocupado << endl;
        cout << "Valor arrecadado na bilheteria R$: " << bilheteria << endl;

        }
    
    }while (entrada != 0);
    return 0;
}
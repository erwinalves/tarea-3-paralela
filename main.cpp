#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
    char cadena[5000],constante=' ',aux[30];
    char matriz[5000][2];
    ifstream fe("puntos.txt");
    fe.getline(cadena, 5000);
    for(int i=0;i<5000;i++){
        aux=cadena[i];
        for(int j=0;j<2;j++){
            matriz[i][j]=strtok(aux,constante);
        }
    }
    return 0;
}

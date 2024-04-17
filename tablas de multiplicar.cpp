#include <iostream>
using namespace std;

/*
Hacer una tabla de multiplicar a traves de el numero ingresado por un usuario
[X]Inicializar variables int
[X]Pedir numero al usuario
[X]Hacer un ciclo que muestre el número ingresado multiplicado del 1 al 10
*/

int main(){


int numeroingresado;
cin>> numeroingresado;
cout<< endl;


for(int i=1; i<=10; i++)
{cout<< numeroingresado <<" x " <<i <<" =" <<numeroingresado*i <<endl;
}

    return 0;
}

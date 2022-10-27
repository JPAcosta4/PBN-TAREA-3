#include <iostream>

using namespace std; 

int main(int argc, char** argv){

    int ciclo = 0; 

    while (ciclo == 0){
        if (argc > 11){
            ciclo++; 
            cout << "Debe escribir como máximo 10 defensas." <<endl; 
        }
        else if (argc < 4){
            ciclo++; 
            cout << "Debe escribir como mínimo 3 defensas." <<endl; 
        }
        else{
            cout << "Bien." << endl; 
            ciclo ++; 
        }
        }
    



    return 0; 
}
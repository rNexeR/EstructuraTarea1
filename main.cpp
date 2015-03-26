// stack::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
string getTope(stack<string> mi_pila)
{
    return mi_pila.top();
}

//devuelve la cantidad de elementos de "mi_pila"
int getTamano(stack<string> mi_pila)
{
    return mi_pila.size();
}

//devuelve true si "str" esta dentro de "mi_pila" de lo contrario devuelve false
bool existeEnPila(stack<string> mi_pila, string str)
{
    for(int x = 0; x<mi_pila.size(); x++)
        if (mi_pila.top()==str)
            return true;
        else
            mi_pila.pop();
    return false;
}

//devuelve el elemento mayor de "mi_pila"
int getMayor(stack<int> mi_pila)
{
    int mayor = mi_pila.top();
    int y = mi_pila.size();
    for(int x = 0; x<y; x++){
        if (mi_pila.top()>mayor)
            mayor = mi_pila.top();
        mi_pila.pop();
    }
    return mayor;
}

//devuelve el elemento menor de "mi_pila"
int getMenor(stack<int> mi_pila)
{
    int menor = mi_pila.top();
    int y = mi_pila.size();
    for(int x = 0; x<y; x++){
        if (mi_pila.top()<menor)
            menor = mi_pila.top();
        mi_pila.pop();
    }
    return menor;
}

//devuelve la cantidad de veces que se encuentra la letra 'a' minuscula en "mi_pila"
int contarLetraA(stack<char> mi_pila)
{
    int y = mi_pila.size();
    int cant = 0;

    for(int x = 0; x<y; x++){
        if(mi_pila.top()=='a')
            cant++;
        mi_pila.pop();
    }
    return cant;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}

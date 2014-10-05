#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;

void evaluar();
string getTope(stack<string> mi_cola);
int getTamano(stack<string> mi_cola);
bool existeEnCola(stack<string> mi_cola, string str);
int getMayor(stack<int> mi_cola);
int getMenor(stack<int> mi_cola);
float getPromedio(stack<float> mi_cola);

#endif // EVALUADOR_H

#include <stdio.h>
#include <iostream> // Biblioteca pra usar os comandos 'cout' e 'cin'
#include <cmath> // Biblioteca pra usar a função de raiz quadrada 'sqrt()'

using namespace std;

int main()
{
    // Declarando os coeficientes e o delta
    int a, b, c, delta;
    
    // Primeiro passo
    // Pegando do usuário os 3 coeficientes da equação
    cout << "Digite o coeficiente a da equacao: ";
    cin >> a;
    
    cout << "Digite o coeficiente b da equacao: ";
    cin >> b;
    
    cout << "Digite o coeficiente c da equacao: ";
    cin >> c;
    
    // Se o a for 0 não é do segundo grau então o programa encerra
    if (a == 0) {
        cout << "\nCom o coeficiente a = 0 a equação nao eh de segundo grau, entao num da neh";
    } else {
        // Segundo passo
        // Calcular o delta da equação usando a fórmula delta = b² - 4ac
        delta = (b * b) - (4 * a * c);
        
        // Mostrando pro usuário o valor do delta
        cout << "\nO valor do delta da equacao eh: " << delta;
        
        // Terceiro passo
        // Condicional pra determinar se o delta é positivo ou negativo
        // se for negativo vai envolver números complexos
        if (delta > 0) {
            cout << "\n\nComo o delta eh positivo e maior que zero a equacao tem duas raizes reais e distintas";
            
            double raiz1, raiz2;
            
            // Usando a fórmula de Bhaskara pra calcular as raízes x1 e x2
            // -b +- raiz de delta / 2a
            raiz1 = ((-1 * b) + sqrt(delta)) / (2 * a);
            raiz2 = ((-1 * b) - sqrt(delta)) / (2 * a);
            
            cout << "\n\nAs solucoes da equação sao: ";
            cout << "\nx1 = " << raiz1;
            cout << "\nx2 = " << raiz2;
        } else if (delta == 0) {
            cout << "\n\nComo o delta eh igual a zero, a equacao tem apenas uma raiz";
            
            double raiz;
            
            // De novo a fórmula de Bhaskara só que com o delta = 0
            raiz = (-1 * b) / (2 * a);
            
            cout << "\n\nA unica solucao da equacao eh: ";
            cout << "\nx = " << raiz;
        } else {
            cout << "\n\nComo o delta eh menor que zero, a equacao tera duas raizes complexas";
            
            // Como o delta é negativo tem que mudar o sinal dele pra calcular a raíz
            delta = -delta;
            
            cout << "\n\nAs raizes sao: ";
            // A forma mais simples de colocar número complexo é concatenar a string 'i' no meio pra dizer que é complexo
            cout << "\nx1 = " << -b / 2 * a << " + " << sqrt(delta) / 2 * a << "i";
            cout << "\nx2 = " << -b / 2 * a << " - " << sqrt(delta) / 2 * a << "i";
        }
    }

    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

//informação para o progama entender, junto com valores e fórmulas
double CalcularAreaTriangulo (double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt (p * (p - a) * (p - b) * (p - c));
    
}
int main () {
    
    //repetição de cria
     char continuar = 's';
    while (continuar == 's' || continuar == 'S') {
        
    double xa, xb, xc, ya, yb, yc;
    
    //mensagem + informação que será substituída com a resposta
    cout << "Digite as medidas dos lados do triângulo X (separados por espaço): " << endl;
    cin >> xa >> xb >> xc;
    
    //mensagem + informação que será substituída com a resposta
    cout << "Digite as medidas dos lados do triângulo Y (separados por espaço): " << endl;
    cin >> ya >> yb >> yc;
    
    // o double seria uma forma aprimorada do float. No caso, está sendo utilizado para definir o que é cada coisa citada abaixo.
    double areaX = CalcularAreaTriangulo (xa, xb, xc);
    double areaY = CalcularAreaTriangulo (ya, yb, yc);

    //a informação que aparecerá na tela será a mensagem + o resultado da conta feita
    cout << "Área do triângulo X: "<<areaX<< endl;
    cout << "Área do triângulo Y: "<<areaY<< endl;
    
    //alternativas para o resultado. Ou seja, se área for maior, menor ou igual
    if (areaX > areaY) {
        cout << "O triângulo X tem a maior área." << endl;
    }
    else 
    if (areaY > areaX) {
        cout << "O triângulo Y tem a maior área." << endl;
    }
    else 
    if (areaY = areaX) {
        cout << "Os triângulos possuem  a mesma área." << endl;
    }
    else 
     cout << "erro" <<endl;

     //tive que colocar uma repetição pra ficar bom mesmo
    cout << "Deseja continuar (s/n)?: ";
    cin >> continuar;
    }
    return 0;
}
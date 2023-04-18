#include <iostream>
#include <cmath>
using namespace std;

class Triangulo {
    private: 
        double a, b, c;
    public:
        Triangulo (double lado1, double lado2, double lado3) {7
            a = lado1;
            b = lado2;
            c = lado3;
    }

    double calcularArea () {
        double p = (a+b+c) / 2;
        double area = std: :sqrt(p * (p-a) * (p-b) (p-c));
        return area;
    }
    double getlado1() { return a; }
    double getlado2() { return b; }
    double getlado3() { return c; }
}
int main () {
    
    //repetição de cria
    char continuar = 's';
    while (continuar == 's' || continuar == 'S') {
    
    double a, b, c;
    std:: cout <<"Digite as medidas dos lados dos do triângulo X (separe por espaço): ";
    std:: cin >> a >> b >> c;
    Triangulo X (a, b, c);
    
     std:: cout <<"Digite as medidas dos lados dos do triângulo Y (separe por espaço): ";
    std:: cin >> a >> b >> c;
    Triangulo Y (a, b, c);
    
    double AreaX = X.calculaArea();
    double AreaY = Y.calculaArea();
    
    std:: cout << "Área do triângulo X: " << areaX << std::endl;
    std:: cout << "Área do triângulo Y: " << areaY << std ::endl;
    
    if (areaX > areaY) {
        std: :cout << "Triângilo X tem o maior área." <<  std::endl;
    }
    else if (areaY > areaX) {
    }
        std: :cout << "Triângilo Y tem o maior área." <<  std::endl;
    else if (areaY = areaX) {
        std: :cout << "Ambos possuem a mesma área." <<  std::endl;
    }
    else {
        std: :cout << "erro" <<  std::endl;

    }
    //tive que colocar uma repetição pra ficar bom mesmo
    cout << "Deseja continuar (s/n)?: ";
    cin >> continuar;
    return 0;
}
}
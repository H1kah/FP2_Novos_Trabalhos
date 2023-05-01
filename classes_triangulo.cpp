#include <iostream>
#include <cmath>

class Triangulo {
    private: 
        double a, b, c;
    public:
        Triangulo (double lado1, double lado2, double lado3) {
            a = lado1;
            b = lado2;
            c = lado3;
    }

    double calcularArea () {
        double p = (a+b+c) / 2;
        double area = std::sqrt(p * (p-a) * (p-b)*(p-c));
        return area;
    }
    double getlado1() { return a; }
    double getlado2() { return b; }
    double getlado3() { return c; }
};
int main () {
    
    double a, b, c;
    std:: cout <<"Digite as medidas dos lados dos do triângulo X (separe por espaço): ";
    std:: cin >> a >> b >> c;
    Triangulo X (a, b, c);
    
     std:: cout <<"Digite as medidas dos lados dos do triângulo Y (separe por espaço): ";
    std:: cin >> a >> b >> c;
    Triangulo Y (a, b, c);
    
    double AreaX = X.calcularArea();
    double AreaY = Y.calcularArea();
    
    std:: cout << "Área do triângulo X: " << AreaX << std::endl;
    std:: cout << "Área do triângulo Y: " << AreaY << std::endl;
    
    if (AreaX > AreaY) {
        std::cout << "Triângilo X tem a maior área." << std::endl;
    }
    else if (AreaY > AreaX) {
        std::cout << "Triângilo Y tem a maior área." << std::endl;
    }
    else if (AreaY = AreaX) {
        std::cout << "Ambos possuem a mesma área." << std::endl;
    }
    else {
        std::cout << "erro" <<  std::endl;

    }
}

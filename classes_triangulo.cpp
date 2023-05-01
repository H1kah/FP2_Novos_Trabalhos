#include <iostream>
#include <cmath>
//A classe triângulo está sendo criada primeiro para que possa ser utilizada depois no int main, apenas citando a palavra chave. 
//No caso, está sendo utilizado o private para que esteja, como a palavra diz, privada. Ou seja, todo o conteúdo estará privado apenas para essa parte,
// não será assossiada com o resto. Já o public, toda citação entre ela poderá ser utilizada de forma livre. Esses códigos são utilizados para que haja uma organização
//e uma forma de facilitar o resto do trabalho, pegando o que é preciso apenas no momento desejado.
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
// A partir daqui, será feito as assossições, comentários que aparecerão na tela, etc. Toda resposta que foi feita a partir da questão na tela será direcionada
//para substituir uma parte do código. Logo, com um simples comando (resultado do public), calculará os valores dados usando a fórmula criada anteriormente. 
//Por fim, a resposta será dada. De acordo com os valores finais (ou seja, se for maior ou menor), mostrará na tela qual é a diferença entre eles ou se ambos os valores
//são iguais.
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

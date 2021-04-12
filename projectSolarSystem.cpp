#include<iostream>
using std::string;

class Planeta{
public:
    string Nome;//do planeta
    double Rotacao;//distância média do sol
    double Translacao;
    double Diametro;
    long Massa;
    double TempMedia;//temteratura média na superficie
    double PresAtmosferica;//Pressão atmosférica
    string Luas;
    string Composicao;//do que é feito

    void mostrarPlanetas(){
        std::cout.precision(5);
        std::cout<<"Nome "<< Nome <<std::endl;
        std::cout<<"Rotação "<< Rotacao <<std::endl;
        std::cout<<"Translacao "<< Translacao <<std::endl;
        std::cout<<"Diametro "<< Diametro <<std::endl;
        std::cout<<"Massa "<< Massa <<std::endl;
        std::cout<<"TempMedia "<< TempMedia <<std::endl;
        std::cout<<"PresAtmosferica "<< PresAtmosferica <<std::endl;
        std::cout<<"Luas "<< Luas <<std::endl;
        std::cout<<"Composicao "<< Composicao <<std::endl;
        }
};

int main()
{
    Planeta planeta1;
    planeta1.Nome = "Mercúrio";
    planeta1.Rotacao = 58 ;//horas
    planeta1.Translacao = 87;//dias
    planeta1.Diametro = 4878;//em km
    planeta1.Massa = 3,303*1023;//em kg
    planeta1.TempMedia = 127;//em graus celsius
    planeta1.PresAtmosferica = 92; //em Bar
    planeta1.Luas = "nenhuma";
    planeta1.Composicao = "Hélio, sódio, oxigênio";
    planeta1.mostrarPlanetas();

    Planeta planeta2;
    planeta2.Nome = "Vênus";
    planeta2.Rotacao = 243 ;//horas
    planeta2.Translacao = 224;//dias
    planeta2.Diametro = 12.102;//em km
    planeta2.Massa = 4,8690 * 1024;//em kg
    planeta2.TempMedia = 482;//em graus celsius
    planeta2.PresAtmosferica = 92; //em Bar
    planeta2.Luas = "nenhuma";
    planeta2.Composicao = "Dióxido de Carbono, Nitrogênio";
    planeta2.mostrarPlanetas();

}
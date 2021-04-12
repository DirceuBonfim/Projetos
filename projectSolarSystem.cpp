#include<iostream>
using std::string;

class Planeta{
public:
    string Nome;//do planeta
    float Rotacao;//distância média do sol
    float Translacao;
    float Diametro;
    float Massa;
    float TempMedia;//temteratura média na superficie
    float PresAtmosferica;//Pressão atmosférica
    string Luas;
    string Composicao;//do que é feito

    void mostrarPlanetas(){
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
        Planeta(string nome, float rotacao, float translacao, float diametro, float massa, float tempMedia, float presAtmosferica, string luas, string composicao){
            Nome = nome;
            Rotacao = rotacao;
            Translacao = translacao;
            Diametro = diametro;
            Massa = massa;
            TempMedia = tempMedia;
            PresAtmosferica = presAtmosferica;
            Luas = luas;
            Composicao = composicao;
        }
};

int main()
{
    Planeta planeta1 = Planeta("Mercúrio", 58, 87, 4878,3,303*1023, 127, 92, "nenhuma", "Hélio, sódio, oxigênio" );
    //planeta1.Nome = "Mercúrio";
    //planeta1.Rotacao = 58 ;//horas
    //planeta1.Translacao = 87;//dias
    //planeta1.Diametro = 4878;//em km
    //planeta1.Massa = 3,303*1023;//em kg
    //planeta1.TempMedia = 127;//em graus celsius
    //planeta1.PresAtmosferica = 92; //em Bar
    //planeta1.Luas = "nenhuma";
    //planeta1.Composicao = "Hélio, sódio, oxigênio";
    planeta1.mostrarPlanetas();

    Planeta planeta2 = Planeta();
    //planeta2.Nome = "Vênus";
    //planeta2.Rotacao = 243 ;//horas
    //planeta2.Translacao = 224;//dias
    //planeta2.Diametro = 12.102;//em km
    //planeta2.Massa = 4,8690 * 1024;//em kg
    //planeta2.TempMedia = 482;//em graus celsius
    //planeta2.PresAtmosferica = 92; //em Bar
    //planeta2.Luas = "nenhuma";
    //planeta2.Composicao = "Dióxido de Carbono, Nitrogênio";
    planeta2.mostrarPlanetas();

}
#include<iostream>
using std::string;

class Planeta{
public:
    string Nome;//do planeta
    string Luas;//distância média do sol
    string Rotacao;

    void mostrarPlanetas(){
        std::cout<<"Nome - "<< Nome <<std::endl;
        std::cout<<"Luas - "<< Luas <<std::endl;
        std::cout<<"Rotacao - "<< Rotacao <<std::endl;
        }
        Planeta(string nome, string luas, string rotacao){
            Nome = nome;
            Luas = luas;
            Rotacao = rotacao; 
            }        
};

int main()
{
    Planeta planeta1 = Planeta("Mercurio","58","Nenhuma");
    //planeta1.Nome = "Mercurio";
    //planeta1.Rotacao = 58 ;//horas
    //planeta1.Translacao = 87;//dias
    //planeta1.Diametro = 4878;//em km
    //planeta1.Massa = 3,303*1023;//em kg
    //planeta1.TempMedia = 127;//em graus celsius
    //planeta1.PresAtmosferica = 92; //em Bar
    //planeta1.Luas = "nenhuma";
    //planeta1.Composicao = "Hélio, sódio, oxigênio";
    planeta1.mostrarPlanetas();

    Planeta planeta2 = Planeta("Venus", "243", "Nenhuma");
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
#include<iostream>
using std::string;

class Planeta{
public:
    string Nome;
    int Rotacao;
    int Translacao;
    double Diametro;
    double Massa;
    int TempMedia;
    int PresAtmosferica;
    string Luas;
    string Composicao;    

    void mostrarPlanetas(){
        std::cout<<"Nome - "<< Nome <<std::endl;
        std::cout<<"Rotacao - "<< Rotacao <<std::endl;
        std::cout<<"Translacao - "<< Translacao <<std::endl;
        std::cout<<"Diametro - "<< Diametro <<std::endl;
        std::cout<<"Massa - "<< Massa <<std::endl;
        std::cout<<"TempMedia - "<< TempMedia <<std::endl;
        std::cout<<"PresAtmosferica - "<< PresAtmosferica <<std::endl;
        std::cout<<"Luas - "<< Luas <<std::endl;
        std::cout<<"Composicao - "<< Composicao<<std::endl;
        }
        Planeta(string nome,int rotacao,int translacao,double diametro,double massa,int tempMedia,int presAtmosferica,string luas, string composicao){
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
    Planeta planeta1 = Planeta("Mercurio", 58 ,87,4878,3.3303*1023,127,92,"Nenhuma", "Hélio, sódio, oxigênio");
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

    Planeta planeta2 = Planeta("Venus", 243, 224,12.102,4.8690*1024,482,92,"Nenhuma", "Dióxido de Carbono, Nitrogênio");
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
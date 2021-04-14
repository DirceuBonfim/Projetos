#include<iostream>
using std::string;

class AbstractPlaneta{
    virtual void serPlaneta()=0;
};

class Planeta: AbstractPlaneta{
protected:    
    int Rotacao;
    int Translacao;
    float Diametro;
    double Massa;
    int TempMedia;
    int PresAtmosferica;
    string Luas;
    string Composicao;  
protected:
    string Nome;
public:
    void setNome(string nome){
        Nome = nome;
    }
    string getNome(){
        return Nome;
    }
    void setRotacao(int rotacao){
        if(Rotacao <= 30)        
        Rotacao = rotacao;
    }
    int getRotacao(){
        return Rotacao;
    }    
    void setTranslacao(int translacao){
        Translacao = translacao;
    }
    int getTranslacao(){
        return Translacao;
    }
    void setDiametro(float diametro){
        Diametro = diametro;
    }
    float getDiametro(){
        return Diametro;
    }
    void setMassa(double massa){
        Massa = massa;
    }
    double getMassa(){
        return Massa;
    }
    void setTempMedia(int tempMedia){
        TempMedia = tempMedia;
    }
    int getTempMedia(){
        return TempMedia;
    }
    void setPresAtmosferica(int presAtmosferica){
        PresAtmosferica = presAtmosferica;
    }
    int getPresAtmosferica(){
        return PresAtmosferica;
    }
    void setLuas(string luas){
        Luas = luas;
    }
    string getLuas(){
        return Luas;
    }
    void setComposicao(string composicao){
        Composicao = composicao;
    }
    string getComposicao(){
        return Composicao;
    }



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
        Planeta(string nome,int rotacao,int translacao,float diametro,double massa,int tempMedia,int presAtmosferica,string luas, string composicao){
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
            void serPlaneta(){
                if(Diametro >= 2376.0)
                    std::cout<<Diametro<<" é planeta."<<std::endl;
                else
                    std::cout<<Diametro<<" não é planeta"<<std::endl;
            }       
};
class Exoplaneta:public Planeta{
public:
    string TemNuvens;
    Exoplaneta(string nome,int rotacao,int translacao,float diametro,double massa,int tempMedia,int presAtmosferica,string luas, string composicao, string temNuvens)
        :Planeta(nome,rotacao,translacao,diametro,massa,tempMedia,presAtmosferica,luas,composicao)
    {
        TemNuvens = temNuvens;
    }
    void Habitavel(){
        std::cout<<Nome<<" é habitável pois "<<TemNuvens<<" tem nuvens"<<std::endl;
    }
};
class Estrela:public Planeta{
public:
    string Gasosa;
    void probVida(){
        std::cout<<Nome<<" é habitável "<<Gasosa<<" pois é uma estrela gasosa"<<std::endl;
    }
    Estrela(string nome,int rotacao,int translacao,float diametro,double massa,int tempMedia,int presAtmosferica,string luas, string composicao,string gasosa)
        :Planeta(nome,rotacao,translacao,diametro,massa,tempMedia,presAtmosferica,luas,composicao)
    {
        Gasosa = gasosa;
    }
};
int main()
{
    //Exoplaneta e = Exoplaneta("Mercurio", 58 ,87,4878,3.3303*1023,127,92,"Nenhuma", "Hélio, sódio, oxigênio", "Não");
    Estrela e = Estrela("Mercurio", 58 ,87,4878,3.3303*1023,127,92,"Nenhuma", "Hélio, sódio, oxigênio", "Sim");
    //Planeta planeta1 = Planeta("Mercurio", 58 ,87,4878,3.3303*1023,127,92,"Nenhuma", "Hélio, sódio, oxigênio");
    //planeta1.Nome = "Mercurio";
    //planeta1.Rotacao = 58 ;//horas
    //planeta1.Translacao = 87;//dias
    //planeta1.Diametro = 4878;//em km
    //planeta1.Massa = 3,303*1023;//em kg
    //planeta1.TempMedia = 127;//em graus celsius
    //planeta1.PresAtmosferica = 92; //em Bar
    //planeta1.Luas = "nenhuma";
    //planeta1.Composicao = "Hélio, sódio, oxigênio";
    //planeta1.mostrarPlanetas();
    //e.Habitavel();
    //e.mostrarPlanetas();
    e.probVida();
    e.mostrarPlanetas();
    //Planeta planeta2 = Planeta("Venus", 243, 224,12102,4.8690*1024,482,92,"Nenhuma", "Dióxido de Carbono, Nitrogênio");
    //planeta2.Nome = "Vênus";
    //planeta2.Rotacao = 243 ;//horas
    //planeta2.Translacao = 224;//dias
    //planeta2.Diametro = 12.102;//em km
    //planeta2.Massa = 4,8690 * 1024;//em kg
    //planeta2.TempMedia = 482;//em graus celsius
    //planeta2.PresAtmosferica = 92; //em Bar
    //planeta2.Luas = "nenhuma";
    //planeta2.Composicao = "Dióxido de Carbono, Nitrogênio";
    //planeta2.mostrarPlanetas();

    //planeta1.setRotacao(29);
    //std::cout<<planeta1.getNome()<<" tem rotacao de "<<planeta1.getRotacao()<<" dias no sistema solar"<<std::endl;
    //planeta1.serPlaneta();
    //planeta2.serPlaneta();
}
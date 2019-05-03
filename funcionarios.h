#include <string>
using namespace std;

/*
================================================== WARNING ==================================================
Todos os atributos estão definidos como STRING.

Devem ser transformados de string para:
IdFuncionario = INT
IdadeFuncionario = INT
FatorRh = CHAR

-Deve-se criar as subclasses, separar os arquivos .h de .cpp                                      <-- Urgente
-Criar a classe de animais e suas subclasses
*/

class Funcionario{
    protected: 
        string IdFuncionario;
        string Funcao;
        string CPF;
        string IdadeFuncionario;
        string TipoSanguineo;
        string FatorRh;
        string Especialidade;
        string CodigoCrmv;
        
    public:

    //Getters
    string getIdFuncionario(); //int
    string getFuncao();
    string getCPF();
    string getIdadeFuncionario(); //int
    string getTipoSanguineo();
    string getFatorRh(); //char
    string getEspecialidade();
    string getCodigoCrmv();

    //Setters
    void setIdFuncionario(string rID); //int
    void setFuncao(string rFuncao);
    void setCPF(string rCPF);
    void setIdadeFuncionario(string rIdade); //int
    void setTipoSanguineo(string rTipo);
    void setFatorRh(string rFator); //char
    void setEspecialidade(string rEspe);
    void setCodigoCrmv(string rCode);
       
};

//Getters
string Funcionario::getIdFuncionario(){
    return IdFuncionario;
}
string Funcionario::getFuncao(){
    return Funcao;
}
string Funcionario::getCPF(){
    return CPF;
}
string Funcionario::getIdadeFuncionario(){
    return IdadeFuncionario;
}
string Funcionario::getTipoSanguineo(){
    return TipoSanguineo;
}
string Funcionario::getFatorRh(){
    return FatorRh;
}
string Funcionario::getEspecialidade(){
    return Especialidade;
}
string Funcionario::getCodigoCrmv(){
    return CodigoCrmv;
}

//Setters
void Funcionario::setIdFuncionario(string rID){ //int
    IdFuncionario = rID;
}
void Funcionario::setFuncao(string rFuncao){
    Funcao = rFuncao;
}
void Funcionario::setCPF(string rCPF){
    CPF =rCPF;
}
void Funcionario::setIdadeFuncionario(string rIdade){ //int
    IdadeFuncionario = rIdade;
}
void Funcionario::setTipoSanguineo(string rTipo){
    TipoSanguineo = rTipo;
}
void Funcionario::setFatorRh(string rFator){ //char
    FatorRh = rFator;
}
void Funcionario::setEspecialidade(string rEspe){
    Especialidade = rEspe;
}
void Funcionario::setCodigoCrmv(string rCode){
    CodigoCrmv = rCode;
}
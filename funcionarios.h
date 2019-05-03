#include <string>
using namespace std;
class Funcionario{
    private:
        int IdFuncionario;
        string Funcao;
        string CPF;
        int IdadeFuncionario;
        string TipoSanguineo;
        char FatorRh;
        string Especialidade;
        string CodigoCrmv;
        
    public:
    int getIdFuncionario();
    string getFuncao();
    Funcionario (int, string, string, int, string, char, string, string);
       
};

int Funcionario::getIdFuncionario(){
    return IdFuncionario;
}

string Funcionario::getFuncao(){
    return Funcao;
}

Funcionario::Funcionario(int rID, string rFuncao, string rCPF, int rIdade, string rTipo, char rFator, string rEspe, string rCode){
    IdFuncionario = rID;
    Funcao = rFuncao;
    CPF = rCPF;
    IdadeFuncionario = rIdade;
    TipoSanguineo = rTipo;
    FatorRh = rFator;
    Especialidade = rEspe;
    CodigoCrmv = rCode;
}







/*class Veterinario : public Funcionario {
    private:
        int NivelSeguranca;
        string NomeFuncionario;

    public:
        int getNivelSeguranca();
};

int Veterinario::getNivelSeguranca(){
    return NivelSeguranca;
}*/
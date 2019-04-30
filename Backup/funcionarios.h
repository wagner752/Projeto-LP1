#include <string>
using namespace std;
class Funcionario{
    protected:
        int IdFuncionario = 666;
        string Funcao;
        string CPF;
        int IdadeFuncionario;
        string TipoSanguineo;
        char FatorRh;
        string Especialidade;
        string CodigoCrmv;
        
    public:
        int getIdFuncionario();
};

int Funcionario::getIdFuncionario(){
    return IdFuncionario;
}

class Veterinario : public Funcionario {
    private:
        int NivelSeguranca;
        string NomeFuncionario;

    public:
        int getNivelSeguranca();
};

int Veterinario::getNivelSeguranca(){
    return NivelSeguranca;
}
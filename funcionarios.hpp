#ifndef FUNCIONARIOS_HPP
#define FUNCIONARIOS_HPP

class Funcionario{
    protected: 
        string IdFuncionario;
        string NomeFuncionario;
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
        string getNomeFuncionario();
        string getFuncao();
        string getCPF();
        string getIdadeFuncionario(); //int
        string getTipoSanguineo();
        string getFatorRh(); //char
        string getEspecialidade();
        string getCodigoCrmv();

        //Setters
        void setIdFuncionario(string rID); //int
        void setNomeFuncionario(string rNomeFuncionario);
        void setFuncao(string rFuncao);
        void setCPF(string rCPF);
        void setIdadeFuncionario(string rIdade); //int
        void setTipoSanguineo(string rTipo);
        void setFatorRh(string rFator); //char
        void setEspecialidade(string rEspe);
        void setCodigoCrmv(string rCode);
       
};

//Sub-classe do nivel de segurança
class Veterinario : public Funcionario {
    private:
    string NivelSeguranca;

    public:
    string getNivelSeguranca();
    void setNivelSeguranca(string rNivel);
};

#endif
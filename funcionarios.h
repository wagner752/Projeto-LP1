#ifndef _FUNCIONARIOS_H_
#define _FUNCIONARIOS_H_

#include <string>

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
       
        //funcionario();

};

#endif
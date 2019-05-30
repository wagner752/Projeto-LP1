#include "funcionarios.h"

//Getters
string Funcionario::getIdFuncionario(){
    return IdFuncionario;
}
string Funcionario::getFuncao(){
    return Funcao;
}
string Funcionario::getNomeFuncionario(){
    return NomeFuncionario;
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
void Funcionario::setNomeFuncionario(string rNomeFuncionario){
    NomeFuncionario = rNomeFuncionario;
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

//Sobrecarga
ostream& operator<< ( std::ostream& output, const Funcionario& funcionario){
    output  << funcionario.IdFuncionario << ";"
            << funcionario.Funcao << ";"
            << funcionario.NomeFuncionario << ";"
			<< funcionario.CPF << ";"
			<< funcionario.IdadeFuncionario << ";"
			<< funcionario.TipoSanguineo << ";"
            << funcionario.FatorRh << ";"
            << funcionario.Especialidade << ";"
            << funcionario.CodigoCrmv << endl;
    
    return output;
}

#include "funcionarios.hpp"

//Construção da classe

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
//Getter Sub-classe Nivel de Segurança
string Veterinario::getNivelSeguranca(){
    return NivelSeguranca;
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
//Setter Sub-classe Nivel de Segurança
void Veterinario::setNivelSeguranca(string rNivel){
    NivelSeguranca = rNivel;
}

//CONSTRUÇÃO DA CLASSE FUNCIONARIO
vector<Funcionario> carregarFuncionarios(){ 
   //Declaracao de variaveis
   ifstream arquivoDadosCSV;
   string linha;
   arquivoDadosCSV.open("dadosFuncionarios.csv");
   vector<Funcionario>  F(11);
   vector<Veterinario> V(10);
   int j, i; //Indices

   //Teste se o arquivo foi aberto
   if (arquivoDadosCSV.is_open() == 0){
      cout << "Erro na abertura do arquivo ""dadosFuncionarios.csv"" o programa será encerrado" << endl;
      exit (EXIT_FAILURE);
   }

   //Contrucao da classe funcionario
   for (j = 1 ; j <= 10; j++){
      for (i = 1; i <= 10; i++){
         (getline(arquivoDadosCSV, linha, ';'));
         switch (i){
            case 1:  
               F[j].setIdFuncionario(linha);
               break;
            case 2:
               F[j].setFuncao(linha);
               break;
            case 3:
               F[j].setNomeFuncionario(linha);
               break;
            case 4:
               F[j].setCPF(linha);
               break;
            case 5:
               F[j].setIdadeFuncionario(linha);
               break;
            case 6:
               F[j].setTipoSanguineo(linha);
               break;
            case 7:
               F[j].setFatorRh(linha);
               break;
            case 8:
               F[j].setEspecialidade(linha);
               break;
            case 9:
               F[j].setCodigoCrmv(linha);
               break;
            case 10:
               V[j].setNivelSeguranca(linha);
               break;
         }// /switch
      }// /for
      
      j = j;
   }// /for

   arquivoDadosCSV.close(); //Fechamento do arquivo de dados de funcionarios

   return F;
}

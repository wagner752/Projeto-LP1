#include "animais.h"

using namespace std;

//Construção da classe
Animal::Animal(string IdAnimal = "0", string ClasseAnimal = "", string NomeAnimal = "", string NomeCientifico = "", string SexoAnimal = "", string TamanhoAnimal = "", string DietaAnimal = "", string VeterinarioAssociado = "", string TratadorResponsavel = "", string NomeBatismo = ""){
    //EMPTY  
}
Animal::~Animal(){
    //EMPTY
}

//Getters
string Animal::getIdAnimal(){
    return IdAnimal;
}
string Animal::getClasseAnimal(){
    return ClasseAnimal;
}
string Animal::getNomeAnimal(){
    return NomeAnimal;
}
string Animal::getNomeCientifico(){
    return NomeCientifico;
}
string Animal::getSexoAnimal(){
    return SexoAnimal;
}
string Animal::getTamanhoAnimal(){
    return TamanhoAnimal;
}
string Animal::getDietaAnimal(){
    return DietaAnimal;
}
string Animal::getVeterinarioAssociado(){
    return VeterinarioAssociado;
}
string Animal::getTratadorResponsavel(){
    return TratadorResponsavel;
}
string Animal::getNomeBatismo(){
    return NomeBatismo;
}

//Setters
void Animal::setIdAnimal(string rIDA){
    IdAnimal = rIDA;
}
void Animal::setClasseAnimal(string rClasseAnimal){
    ClasseAnimal = rClasseAnimal;
}
void Animal::setNomeAnimal(string rNomeAnimal){
    NomeAnimal = rNomeAnimal;
}
void Animal::setNomeCientifico(string rNomeCientifico){
    NomeCientifico = rNomeCientifico;
}
void Animal::setSexoAnimal(string rSexoAnimal){
    SexoAnimal = rSexoAnimal;
}
void Animal::setTamanhoAnimal(string rTamanhoAnimal){
    TamanhoAnimal = rTamanhoAnimal;
}
void Animal::setDietaAnimal(string rDieta){
    DietaAnimal = rDieta;
}
void Animal::setVeterinarioAssociado(string rVeterinarioAssociado){
    VeterinarioAssociado = rVeterinarioAssociado;
}
void Animal::setTratadorResponsavel(string rTratadorResp){
    TratadorResponsavel = rTratadorResp;
}
void Animal::setNomeBatismo(string rNomeBatismo){
    NomeBatismo = rNomeBatismo;
}

//Sobrecarga
ostream& operator<< ( std::ostream& output, const Animal& animal){
    output  << animal.IdAnimal << ";"
            << animal.ClasseAnimal << ";"
            << animal.NomeAnimal << ";"
			<< animal.NomeCientifico << ";"
			<< animal.SexoAnimal << ";"
			<< animal.TamanhoAnimal << ";"
            << animal.DietaAnimal << ";"
            << animal.VeterinarioAssociado << ";"
            << animal.TratadorResponsavel << ";"
            << animal.NomeBatismo << endl;
    
    return output;
}


/*
void carregarAnimal(){
    ifstream arquivoDadosCSV;
    string linha;
    arquivoDadosCSV.open("dadosAnimais.csv");
   
    //Teste se o arquivo foi aberto
    if (arquivoDadosCSV.is_open() == 0){
        cout << "Erro na abertura do arquivo ""dadosAnimais.csv"" o programa será encerrado" << endl;
        exit (EXIT_FAILURE);
    }
   
    //Preenchimento da classe
    

    arquivoDadosCSV.close(); //Fechamento do arquivo dadosAnimais.csv
}


//CONSTRUIR CLASSE ANIMAL
map<string, Animal> carregarAnimal(){
   ifstream arquivoDadosCSV;
   string linha;
   arquivoDadosCSV.open("dadosAnimais.csv");
   int i,j;
   map<Animal> A(11);

    //Teste se o arquivo foi aberto
   if (arquivoDadosCSV.is_open() == 0){
      cout << "Erro na abertura do arquivo ""dadosAnimais.csv"" o programa será encerrado" << endl;
      exit (EXIT_FAILURE);
   }
   
   //Preenchimento da classe
   for (j = 1; j <= 10; j++){
      for(i = 1; i <= 10; i++){
         getline(arquivoDadosCSV, linha, ';');
         switch (i){
            case 1:
               A[j].setIdAnimal(linha);
               break;
            case 2:
               A[j].setClasseAnimal(linha);
               break;
            case 3:
               A[j].setNomeAnimal(linha);
               break;
            case 4:
               A[j].setNomeCientifico(linha);
               break;
            case 5:
               A[j].setSexoAnimal(linha);
               break;
            case 6:
               A[j].setTamanhoAnimal(linha);
               break;
            case 7:
               A[j].setDietaAnimal(linha);
               break;
            case 8:
               A[j].setVeterinarioAssociado(linha);
               break;
            case 9:
               A[j].setTratadorResponsavel(linha);
               break;
            case 10:
               A[j].setNomeBatismo(linha);
               break;
         } //switch
      } //for
      
      j = j;
   } //for

   arquivoDadosCSV.close(); //Fechamento do arquivo Animais.h

   return A;
}*/
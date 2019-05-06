#include <string>
using namespace std;

/*
================================================== WARNING ==================================================
Todos os atributos estão definidos como STRING.

Devem ser transformados de string para:
IdAnimal = INT
SexoAnimal = CHAR
TamanhoAnimal = FLOAT
VeterinarioAssociado = INT
TratadorResponsavel = INT

-Deve-se criar as subclasses, separar os arquivos .h de .cpp                                      <-- Urgente
-Criar a classe de animais e suas subclasses
*/

class Animal{
    protected:
        string IdAnimal; //int
        string ClasseAnimal;
        string NomeAnimal;
        string NomeCientifico;
        string SexoAnimal; //char
        string TamanhoAnimal; //float
        string DietaAnimal;
        string VeterinarioAssociado; //int
        string TratadorResponsavel; //int
        string NomeBatismo;
    
    public:
        //Getters
        string getIdAnimal(); //int
        string getClasseAnimal();
        string getNomeAnimal();
        string getNomeCientifico();
        string getSexoAnimal(); //char
        string getTamanhoAnimal(); //float
        string getDietaAnimal();
        string getVeterinarioAssociado(); //int
        string getTratadorResponsavel(); //int
        string getNomeBatismo();

        //Setters
        void setIdAnimal(string rIDA); //int
        void setClasseAnimal(string rClasseAnimal);
        void setNomeAnimal(string rNomeAnimal);
        void setNomeCientifico(string rNomeCientifico);
        void setSexoAnimal(string rSexoAnimal); //char
        void setTamanhoAnimal(string rTamanhoAnimal); //float
        void setDietaAnimal(string rDieta);
        void setVeterinarioAssociado(string rVeterinarioAssociado); //int
        void setTratadorResponsavel(string rTratadorResp); //int
        void setNomeBatismo(string rNomeBatismo);
};

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
#include "animais.h"

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

Animal::Animal(){
    
}
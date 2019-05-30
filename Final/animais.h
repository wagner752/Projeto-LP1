#ifndef _ANIMAIS_H_
#define _ANIMAIS_H_

#include <string>
#include <iostream>
#include <map>

using namespace std;

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

        //Sobrecarga do operador <<
        friend std::ostream& operator<< (std::ostream &output, const Animal &animal);
};

#endif
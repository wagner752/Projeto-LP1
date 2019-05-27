#ifndef _HEADERMAIN_H_
#define _HEADERMAIN_H_

using namespace std;

#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include "animais.h"
//#include "funcionarios.h"

class Header{
    private:
        int totalAnimal = 0;
    
    public:
        map<string,Animal> animal;
        int AlterarCadastro();
        int RemoverAnimal();
        int consultarDados();
        int consultarDados(string idAnimal);
        int consultarDados(int i);
        int escreverArquivo(string idAnimal);
        void carregarAnimal();

    
        //construtor
        Header();
        ~Header();
    
};

#endif
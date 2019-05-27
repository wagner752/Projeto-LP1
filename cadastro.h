#ifndef CADASTRO_H
#define CADASTRO_H


#include <vector>
#include <fstream>
#include <sstream>
#include "animais.h"
#include "funcionarios.h"

int consultarDados();
int consultarDados(string idAnimal);
int consultarDados(int i);
int escreverArquivo(string idAnimal);
int AlterarCadastro();


#endif
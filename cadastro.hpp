#ifndef CADASTRO_HPP
#define CADASTRO_HPP

#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "funcionarios.h"
#include "animais.cpp"
#include "cadastro.cpp"

int consultarDados();
int consultarDados(string idAnimal);
int consultarDados(int i);
int escreverArquivo(string idAnimal);
int AlterarCadastro();

#endif
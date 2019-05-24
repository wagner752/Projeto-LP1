#ifndef CADASTRO_HPP
#define CADASTRO_HPP


#include <vector>
#include <fstream>
#include <sstream>
#include "animais.cpp"

int consultarDados();
int consultarDados(string idAnimal);
int consultarDados(int i);
int escreverArquivo(string idAnimal);
int AlterarCadastro();


#endif
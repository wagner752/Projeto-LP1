#include <iostream>
#include <fstream>
#include <string>
#include "funcoes.cpp"
using namespace std;

/* USAR SOBRECARGA DE FUNÇÕES */
int consultarDados(int idAnimal){
   ifstream arquivoDadosCSV;
   arquivoDadosCSV.open("dadosAnimais.csv");
   string linha;
   int i, j;

   if (arquivoDadosCSV.is_open() == 0){
      cout << "Erro na abertura do arquivo ""dadosAnimais.csv"" o programa será encerrado" << endl;
      exit (EXIT_FAILURE);
   }

  string IDs[10];
  
   auto funcs = carregarClasses();
   for( auto &f : funcs){
        cout << f.getNomeFuncionario() << endl;
    }
}
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>  
#include <sstream>
#include "funcionarios.h"
using namespace std;

/*
================================================== WARNING ==================================================
Todos os atributos estão definidos como STRING.

Devem ser transformados de string para:
IdFuncionario = INT
IdadeFuncionario = INT
FatorRh = CHAR
*/

int carregarClasses(){
   //Declaracao de variaveis
   ifstream arquivoDadosCSV;
   string linha;
   arquivoDadosCSV.open("dadosFuncionarios.csv");
   Funcionario F; //F DEVERÁ SER CADA FUNCIONARIO, NÃO SERÁ IMPLEMENTADO DESSE JEITO
   int j, i; //Indices

   //Teste se o arquivo foi aberto
   if (arquivoDadosCSV.is_open() == 0){
      cout << "Erro na abertura do arquivo ""dados.csv"" o programa será encerrado" << endl;
      exit (EXIT_FAILURE);
   }

   //Contrucao de classes
   for (j = 1 ; j <= 10; j++){
      for (i = 1; i <= 10; i++){
         (getline(arquivoDadosCSV, linha, ';'));
         switch (i){
            case 1:  
               F.setIdFuncionario(linha);
               cout << "Atributo01: " << F.getIdFuncionario() << endl;
               break;
            case 2:
               F.setFuncao(linha);
               cout << "Atributo02: " << F.getFuncao() << endl;
               break;
            case 3:
               F.setCPF(linha);
               cout << "Atributo03: " << F.getCPF() << endl;
               break;
            case 4:
               F.setIdadeFuncionario(linha);
               cout << "Atributo04: " << F.getIdadeFuncionario() << endl;
               break;
            case 5:
               F.setTipoSanguineo(linha);
               cout << "Atributo05: " << F.getTipoSanguineo() << endl;
               break;
            case 6:
               F.setFatorRh(linha);
               cout << "Atributo06: " << F.getFatorRh() << endl;
               break;
            case 7:
               F.setEspecialidade(linha);
               cout << "Atributo07: " << F.getEspecialidade() << endl;
               break;
            case 8:
               F.setCodigoCrmv(linha);
               cout << "Atributo08: " << F.getCodigoCrmv() << endl;
               break;
            case 9:
               cout << "Atributo09: ATRIBUDO DE UMA SUB-CLASSE DE FUNCIONARIO AINDA NAO DEFINIDO (NIVEL SEGURANCA)" << endl;
               break;
         }// /switch
      }// /for
      
      cout << endl;
      j = j;
   }// /for
}
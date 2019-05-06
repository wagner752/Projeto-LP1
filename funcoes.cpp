#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>  
#include <sstream>
#include "funcionarios.h"
#include "animais.h"
using namespace std;

/*
================================================== WARNING ==================================================
Todos os atributos estão definidos como STRING.

Devem ser transformados de string para:
IdFuncionario = INT
IdadeFuncionario = INT
FatorRh = CHAR
*/

int carregarClasses(){ //Principal função do programa "main"
   //Declaracao de variaveis
   ifstream arquivoDadosCSV;
   string linha;
   arquivoDadosCSV.open("dadosFuncionarios.csv");
   Funcionario F[99];
   Veterinario V[99];
   int j, i; //Indices

   //Teste se o arquivo foi aberto
   if (arquivoDadosCSV.is_open() == 0){
      cout << "Erro na abertura do arquivo ""dadosFuncionarios.csv"" o programa será encerrado" << endl;
      exit (EXIT_FAILURE);
   }

   //Contrucao da classe funcionario
   for (j = 1 ; j <= 10; j++){
      for (i = 1; i <= 10; i++){
         (getline(arquivoDadosCSV, linha, ';'));
         switch (i){
            case 1:  
               F[j].setIdFuncionario(linha);
               break;
            case 2:
               F[j].setFuncao(linha);
               break;
            case 3:
               F[j].setNomeFuncionario(linha);
               break;
            case 4:
               F[j].setCPF(linha);
               break;
            case 5:
               F[j].setIdadeFuncionario(linha);
               break;
            case 6:
               F[j].setTipoSanguineo(linha);
               break;
            case 7:
               F[j].setFatorRh(linha);
               break;
            case 8:
               F[j].setEspecialidade(linha);
               break;
            case 9:
               F[j].setCodigoCrmv(linha);
               break;
            case 10:
               V[j].setNivelSeguranca(linha);
               break;
         }// /switch
      }// /for
   
      j = j;
   }// /for
   arquivoDadosCSV.close(); //Fechamento do arquivo de dados de funcionarios

   arquivoDadosCSV.open("dadosAnimais.csv");
   Animal A[99];

    //Teste se o arquivo foi aberto
   if (arquivoDadosCSV.is_open() == 0){
      cout << "Erro na abertura do arquivo ""dadosAnimais.csv"" o programa será encerrado" << endl;
      exit (EXIT_FAILURE);
   }

   for (j = 1; j <= 10; j++){
      for(i = 1; i <= 10; i++){
         (getline(arquivoDadosCSV, linha, ';'));
         switch (i){
            case 1:
               A[j].setIdAnimal(linha);
               cout << "Atributo01: " << A[j].getIdAnimal() << endl;
               break;
            case 2:
               A[j].setClasseAnimal(linha);
               cout << "Atributo02: " << A[j].getClasseAnimal() << endl;
               break;
            case 3:
               A[j].setNomeAnimal(linha);
               cout << "Atributo03: " << A[j].getNomeAnimal() << endl;
               break;
            case 4:
               A[j].setNomeCientifico(linha);
               cout << "Atributo04: " << A[j].getNomeCientifico() << endl;
               break;
            case 5:
               A[j].setSexoAnimal(linha);
               cout << "Atributo05: " << A[j].getSexoAnimal() << endl;
               break;
            case 6:
               A[j].setTamanhoAnimal(linha);
               cout << "Atributo06: " << A[j].getTamanhoAnimal() << endl;
               break;
            case 7:
               A[j].setDietaAnimal(linha);
               cout << "Atributo07: " << A[j].getDietaAnimal() << endl;
               break;
            case 8:
               A[j].setVeterinarioAssociado(linha);
               cout << "Atributo08: " << A[j].getVeterinarioAssociado() << endl;
               break;
            case 9:
               A[j].setTratadorResponsavel(linha);
               cout << "Atributo09: " << A[j].getTratadorResponsavel() << endl;
               break;
            case 10:
               A[j].setNomeBatismo(linha);
               cout << "Atributo10: " << A[j].getNomeBatismo() << endl;
               break;
         } //switch
      } //for
      
      j = j;
      cout << endl;
   } //for

}

int consultarDados(){
   ifstream arquivoDadosCSV;
   arquivoDadosCSV.open("dadosFuncionarios.csv");
   string linha;

   //Teste se o arquivo foi aberto
   if (arquivoDadosCSV.is_open() == 0){
      cout << "Erro na abertura do arquivo ""dados.csv"" o programa será encerrado" << endl;
      exit (EXIT_FAILURE);
   }

   cout << "\n===========================================================================" << endl;
   cout << "Todos os dados cadastrados atualmente no sistema" << endl;
   cout << "===========================================================================" << endl << endl;
   while(getline(arquivoDadosCSV, linha)){
      cout << linha << endl;
   }

   arquivoDadosCSV.close();
}
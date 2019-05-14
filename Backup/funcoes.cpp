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


/* Alocar isso dinamicamente */
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


   //Contrucao da classe de animais
   arquivoDadosCSV.open("dadosAnimais.csv");
   Animal A[99];

    //Teste se o arquivo foi aberto
   if (arquivoDadosCSV.is_open() == 0){
      cout << "Erro na abertura do arquivo ""dadosAnimais.csv"" o programa será encerrado" << endl;
      exit (EXIT_FAILURE);
   }
   
   //Preenchimento da classe
   for (j = 1; j <= 10; j++){
      for(i = 1; i <= 10; i++){
         (getline(arquivoDadosCSV, linha, ';'));
         switch (i){
            case 1:
               A[j].setIdAnimal(linha);
               break;
            case 2:
               A[j].setClasseAnimal(linha);
               break;
            case 3:
               A[j].setNomeAnimal(linha);
               break;
            case 4:
               A[j].setNomeCientifico(linha);
               break;
            case 5:
               A[j].setSexoAnimal(linha);
               break;
            case 6:
               A[j].setTamanhoAnimal(linha);
               break;
            case 7:
               A[j].setDietaAnimal(linha);
               break;
            case 8:
               A[j].setVeterinarioAssociado(linha);
               break;
            case 9:
               A[j].setTratadorResponsavel(linha);
               break;
            case 10:
               A[j].setNomeBatismo(linha);
               break;
         } //switch
      } //for
      
      j = j;
   } //for

}

//Imprimir dados dos funcionarios na tela
int consultarDados(){
   ifstream arquivoDadosCSV;
   arquivoDadosCSV.open("dadosFuncionarios.csv");
   string linha;

   //Teste se o arquivo foi aberto
   if (arquivoDadosCSV.is_open() == 0){
      cout << "Erro na abertura do arquivo ""dadosFuncionarios.csv"" o programa será encerrado" << endl;
      exit (EXIT_FAILURE);
   }

   cout << "\n===========================================================================" << endl;
   cout << "Todos os dados de funcionarios cadastrados atualmente no sistema" << endl;
   cout << "===========================================================================" << endl << endl;
   while(getline(arquivoDadosCSV, linha)){
      cout << linha << endl;
   }

   arquivoDadosCSV.close();
}

/* USAR SOBRECARGA DE FUNÇÕES */
int consultarDados(int idAnimal){
   ifstream arquivoDadosCSV;
   arquivoDadosCSV.open("dadosAnimais.csv");

   if (arquivoDadosCSV.is_open() == 0){
      cout << "Erro na abertura do arquivo ""dadosFuncionarios.csv"" o programa será encerrado" << endl;
      exit (EXIT_FAILURE);
   }

}

void AlterarCadastro(){
   cout << "\n===========================================================================" << endl;
   cout << "Alterar cadastro de animais no sistema" << endl;
   cout << "===========================================================================\n\n" << endl;
   
   int idAnimal; 

   cout << "Digite o ID do animal(Exemplo: 12)" << endl;
   cin >> idAnimal;
   consultarDados(idAnimal);
}
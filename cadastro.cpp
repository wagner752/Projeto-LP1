#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "animais.cpp"


using namespace std;

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

   return 0;
}

//Verificar se o ID do animal já está cadastrado
int consultarDados(string idAnimal){
   ifstream arquivoDadosCSV;
   arquivoDadosCSV.open("dadosAnimais.csv");
   string linha;
   
   if (arquivoDadosCSV.is_open() == 0){
      cout << "Erro na abertura do arquivo ""dadosAnimais.csv"" o programa será encerrado" << endl;
      exit (EXIT_FAILURE);
   }

   auto funcao = carregarAnimal();
   for( auto &A : funcao){ 
        if (idAnimal == A.getIdAnimal()){
            return 1;
        }
    }
}

//Exibição de lista de veterinarios e de tratadores
int consultarDados(int i){
   if (i == 0){
      ifstream arquivoVeterinarios;
      arquivoVeterinarios.open("listaVeterinarios.txt");
      string linha;

      //Teste de abertura de arquivo
      if (arquivoVeterinarios.is_open() == 0){
         cout << "Erro na abertura do arquivo ""ListaVeterinarios.txt"" o programa será encerrado" << endl;
         exit (EXIT_FAILURE);
      }

      //Exibição da lista de funcionarios
      while(getline(arquivoVeterinarios, linha)){
         cout << linha << endl;
      }
   }

   if (i == 1){
      ifstream arquivoTratadores;
      arquivoTratadores.open("listaTratadores.txt");
      string linha;
   
      //Teste de abertura de arquivo
      if (arquivoTratadores.is_open() == 0){
         cout << "Erro na abertura do arquivo ""ListaTratadores.txt"" o programa será encerrado" << endl;
         exit (EXIT_FAILURE);
      }

      //Exibição da lista de tratadores
      while(getline(arquivoTratadores, linha)){
         cout << linha << endl;
      }
   }// /if

   if (i == 2){
      ifstream arquivoAnimais;
      arquivoAnimais.open("listaAnimais.txt");
      string linha;

      if (arquivoAnimais.is_open() == 0){
         cout << "Erro na abertura do arquivo ""ListaAnimais.txt"" o programa será encerrado" << endl;
         exit (EXIT_FAILURE);
      }

      //Exibição da lista de animais
      while(getline(arquivoAnimais, linha)){
         cout << linha << endl;
      }
   }// /if

}// /consultarDados

//Escrita no arquivo dadosAnimais.csv
//Principal função do cadastro.cpp
int escreverArquivo(string idAnimal){
   ofstream arquivoDadosCSV;
   arquivoDadosCSV.open("dadosAnimais.csv", ios::app);
   string linha;
   int i;

   arquivoDadosCSV << idAnimal << endl;
   cout << "Digite a classe do animal" << endl;
   cin >> linha;
   arquivoDadosCSV << ";" << linha;
   cout << "Digite o nome popular do animal" << endl;
   cin >> linha;
   cout << "Digite o nome cientifico do animal" << endl;
   cin >> linha;
   arquivoDadosCSV << ";" << linha;
   
   selecaoSexo: //Em caso de erro na seleção de sexo retornar a partir daqui
      cout << "Selecione o sexo do animal" << endl;
      cout << "1 - M" << endl;
      cout << "2 - F" << endl;
      cin >> i;
      switch(i){
         case 1:
         arquivoDadosCSV << ";M";
         case 2:
         arquivoDadosCSV << ";F"; 
      }
      if (i >= 3 || i <= 0){
         cout << "Opção inválida" << endl;
         goto selecaoSexo;
      }
      
      cout << "Digite o tamanho do animal" << endl;
      cin >> linha;
      arquivoDadosCSV << ";" << linha;
      cout << "Digite a dieta do animal" << endl;
      cin >> linha;
      arquivoDadosCSV << ";" << linha;

      //ID do veterinario
      cout << "Digite ID do veterinario responsavel \n" 
               "-Se deseja verficar os veterinarios no sistema digite 0\n" << endl;
      cin >> linha;
      if (linha == "0"){
         i = 0;
         consultarDados(i); //Sobrecarga de funções, chama função que lista somente os veterinarios
         cout << "\nDigite o ID do veterinario responsavel" << endl;
         cin >> linha;
         arquivoDadosCSV << ";" << linha;
      }
      else{
         arquivoDadosCSV << ";" << linha;
      }

      //ID do tratador
      cout << "Digite o ID do tratador responsavel \n"
              "-Se deseja verificar os tratadores no sistema digite 0\n" << endl;
      cin >> linha;
      if (linha == "0"){
         i = 1;
         consultarDados(i); //Sobrecarga de funções, chama função que lista somente os tratadores
      
         cout << "\nDigite o ID do tratador responsavel" << endl;
         cin >> linha;
         arquivoDadosCSV << ";" << linha;
      }
      else{
         arquivoDadosCSV << ";" << linha;
      }

      cout << "Digite o nome de batismo do animal" << endl;
      cin >> linha;
      arquivoDadosCSV << ";" << linha;

      cout << "Animal cadastrado com sucesso :)" << endl;

      arquivoDadosCSV.close(); //Fechamento do arquivo dadosAnimais.csv

      cout << "\nDeseja conferir o arquivo de dados CSV?\n"
              "1 - SIM\n"
              "2 - NÃO\n" << endl;
      cin >> linha;

      if(linha == "1"){
         consultarDados();
      }
      if(linha == "2"){
         return 0;
      }
}

//Inicio do cadastro
int AlterarCadastro(){
   cout << "\n===========================================================================" << endl;
   cout << "Alterar cadastro de animais no sistema" << endl;
   cout << "===========================================================================\n\n" << endl;
   
   string idAnimal; 

   cout << "Digite o ID do animal(Exemplo: 12)" << endl;
   cin >> idAnimal;
   if (consultarDados(idAnimal) == 1){
      cout << "\n===========================================================================" << endl;
      cout << "ID inválido: ID já cadastrado no sistema" << endl;
      cout << "===========================================================================\n\n" << endl;
      
      return 0;
   }
   else {
      escreverArquivo(idAnimal);
   }
}
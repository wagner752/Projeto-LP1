#include "headerMain.hpp"
#include <iostream>
#include <string>
#include "cadastro.cpp"
#include "funcionarios.cpp"
#include "animais.cpp"
#include "remocao.cpp"

using namespace std;

//APRESENTAÇÃO
void apresentacao(){
    cout << "==========================================================" << endl;
    cout << "Disciplina: Linguagem de programação I\n"
             "Alunos: Washington Wagner\n"
             "        Jardel Costa\n"
             "        Ivan Lendell\n" 
             "Professor: Rennan Cipriano Mioli\n"
             "Projeto: Projeto PET-FERA"  << endl;
    cout << "==========================================================" << endl;
}

// SELECAO DO MENU
int menu(){
   int selecao;
   cout << "Selecione oque deseja fazer:\n"
         "1- Cadastrar novo animal\n"
         "2- Remover animal cadastrado\n"
         "3- Alterar dados cadastrados de um animal\n"
         "4- Consultar dados cadastrados\n"
         "5- Consultar animal de um veterinario/trador\n" << endl;
   cin >> selecao;
   return selecao;
}

int main(){
   apresentacao();
   
   selecao:
   int selecao;
   selecao = menu();            
   
   switch (selecao){
      case 1: 
         if(AlterarCadastro() == 0){
            goto selecao;
         }
      case 2:
         if(RemoverAnimal() == 0){
            goto selecao;
         }
      case 3:
         // alterarCadastroAnimal();
      case 4:
         //consultarDados();
      case 5:
      cout << "\n";
         // consultarAnimalTratador();
   }

   //Se a função retornar 0, o programa volta para o menu
   return 0;
}
#include <iostream>
#include "funcoes.cpp"
using namespace std;

/* =============== WARNING ===========
Arquivo somente chamando a funcao para carregar os dados dos funcionarios
*/

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
            "3- Alterar dados cadastrais de um animal\n"
            "4- Consultar dados cadastrados\n"
            "5- Consultar animal de um veterinario/trador\n" << endl;
    cin >> selecao;
    return selecao;
}

int main(){
    apresentacao();
    
    int selecao;
    selecao = menu();            
       cout << selecao;
    switch (selecao){
        case 1: 
           AlterarCadastro();
        case 2:
           // removerAnimal();
        case 3:
           // alterarCadastroAnimal();
        case 4:
           //consultarDados();
       case 5:
         cout << "\n";
           // consultarAnimalTratador();
    }

    return 0;
}
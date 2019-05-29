#include "index.h"

//APRESENTAÇÃO
void apresentacao(){
    cout << "==========================================================" << endl;
    cout << "Disciplina: Linguagem de programação I\n"
             "Alunos: Washington Wagner\n"
             "        Jardel Costa <-- FEZ NADA\n"
             "        Ivan Lendell <-- FEZ NADA\n" 
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
    //carregarDados();

    opcoes:
    int selecao = menu();
    
    // Realizar cadastro de um novo animal
    if (selecao == 1){
        //Se cancelar o cadastro
        if(cadastrarAnimal() == 0){
            menu();
            cout << "\n";
            goto opcoes;
        }
        //Animal cadastrado
        if(cadastrarAnimal() == 1){
            cout << "Animal cadastrado com sucesso :)\n" << endl;
            goto opcoes;
        }
    }
    // Remover animal cadastrado
    if (selecao == 2){
        cout << "Teste2";
    }
    // Alterar dados de um animal
    if (selecao == 3){
        cout << "Teste3";
    }
    // Consultar dados cadastrados
    if (selecao == 4){
        cout << "Teste4";
    }
    // Consultar animal de um veterinario
    if (selecao == 5){
        cout << "Teste ";
    }
    // Exceção
    if (selecao >= 6 || selecao <= 0){
        cout << "==========================================================" << endl;
        cout << "Opção selecionada inválida, por favor escolha uma válida" << endl;
        cout << "==========================================================\n" << endl;
        goto opcoes;
    }

    return 0;
}
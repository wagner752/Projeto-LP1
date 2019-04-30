#include <iostream>
#include "funcoes.cpp"
using namespace std;

void apresentacao(){
    //APRESENTAÇÃO
    cout << "==========================================================" << endl;
    cout << "Disciplina: Linguagem de programação I\n"
             "Alunos: Washington Wagner\n"
             "        Jardel Costa\n"
             "        Ivan Lendell\n" 
             "Professor: Rennan Cipriano Mioli\n"
             "Projeto: Projeto PET-FERA"  << endl;
    cout << "==========================================================" << endl;
}

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
    int selecao;
    apresentacao();
    selecao = menu();            

    switch (selecao){
        case 1: 
            /*cadastrarAnimal();
        case 2:
            removerAnimal();
        case 3:
            alterarCadastroAnimal();*/
        case 4:
            consultarDados();
       /* case 5:
            consultarAnimalTratador();*/
    }

    return 0;
}
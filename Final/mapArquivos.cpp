#include "mapArquivos.h"

int carregarDados(int selecao, int escolha){
    map<int, string> animal;
    map<int, string> funcionario;
    map<int, string>::iterator itmap;

    animal.insert(pair<int,string> (1,"Simba"));
    animal.insert(pair<int,string> (2,"Pé de Pano"));
    animal.insert(pair<int,string> (3,"Sonic"));
    animal.insert(pair<int,string> (4,"Kowalski"));
    animal.insert(pair<int,string> (5,"Zé Jacaré"));
    animal.insert(pair<int,string> (6,"Pica-pau"));
    animal.insert(pair<int,string> (7,"Michelangelo"));
    animal.insert(pair<int,string> (8,"Pô"));
    animal.insert(pair<int,string> (9,"Garfield"));
    animal.insert(pair<int,string> (10,"Rei Harold"));

    funcionario.insert(pair<int,string>(1, "João Alberto"));
    funcionario.insert(pair<int,string>(2, "Silvio Sampaio"));
    funcionario.insert(pair<int,string>(3, "Augusto Jorge"));
    funcionario.insert(pair<int,string>(4, "Antonio Djackson"));
    funcionario.insert(pair<int,string>(5, "Athanasios Tsouanas"));
    funcionario.insert(pair<int,string>(6, "Charles Andrye"));
    funcionario.insert(pair<int,string>(7, "Rennan Cipriano"));
    funcionario.insert(pair<int,string>(8, "Gustavo Girão"));
    funcionario.insert(pair<int,string>(9, "César Rennor"));
    funcionario.insert(pair<int,string>(10, "Lorena Azevedo"));

    if(escolha == 1){ 
        itmap = animal.find(selecao);
         
        //ID Não cadastrado no sistema
        if (itmap == animal.end()){
            //Abertura e  escrita no arquivo, em manipulacao.cpp
            return 2;
        }
        // ID já cadastrado no sistema
        else{
            opcao:
            cout << "ID Já cadastrado no sistema\n" 
                    "Deseja tentar novamente?\n"
                    "1 - Sim\n"
                    "2- Não" << endl;
            cin >> selecao;
            //Tentar novamente cadastrar animal
            if(selecao == 1){
                return 1;
            }
            //Cancelar cadastro
            if(selecao == 2){
                return 0;
            }
            //Exceção
            if(selecao >= 3 || selecao <= 0){
                cout << "==========================================================" << endl;
                cout << "Opção selecionada inválida, por favor escolha uma válida" << endl;
                cout << "==========================================================\n" << endl;
                goto opcao;
            }
        }// /else   
    }// /if escolha
}// /carregarDados

/*
int carregarDados(){
    map<int, string> animal;
    map<int, string> funcionario;
    map<int, string>::iterator itmap;

    animal.insert(pair<int,string> (1,"Simba"));
    animal.insert(pair<int,string> (2,"Pé de Pano"));
    animal.insert(pair<int,string> (3,"Sonic"));
    animal.insert(pair<int,string> (4,"Kowalski"));
    animal.insert(pair<int,string> (5,"Zé Jacaré"));
    animal.insert(pair<int,string> (6,"Pica-pau"));
    animal.insert(pair<int,string> (7,"Michelangelo"));
    animal.insert(pair<int,string> (8,"Pô"));
    animal.insert(pair<int,string> (9,"Garfield"));
    animal.insert(pair<int,string> (10,"Rei Harold"));

    funcionario.insert(pair<int,string>(1, "João Alberto"));
    funcionario.insert(pair<int,string>(2, "Silvio Sampaio"));
    funcionario.insert(pair<int,string>(3, "Augusto Jorge"));
    funcionario.insert(pair<int,string>(4, "Antonio Djackson"));
    funcionario.insert(pair<int,string>(5, "Athanasios Tsouanas"));
    funcionario.insert(pair<int,string>(6, "Charles Andrye"));
    funcionario.insert(pair<int,string>(7, "Rennan Cipriano"));
    funcionario.insert(pair<int,string>(8, "Gustavo Girão"));
    funcionario.insert(pair<int,string>(9, "César Rennor"));
    funcionario.insert(pair<int,string>(10, "Lorena Azevedo"));

}
*/

#include <fstream>
#include <string>
#include <iostream>
#include "cadastro.cpp"

using namespace std;

/* ========== WARNING =========
Função ApagarLinha está apagando, porém criando uma cópia da(s) última(s) linha(s)*/

int ApagarLinha(int i){
    fstream arquivoAnimais;
    string linha;
    arquivoAnimais.open("dadosAnimais.csv");
    int j;

    if (arquivoAnimais.is_open() == 0){
        cout << "Erro na abertura do arquivo ""DadosAnimais.csv"" o programa será encerrado" << endl;
        exit (EXIT_FAILURE);
    }

    for(j = 1; j <= 10 ; j++ ){
        getline(arquivoAnimais, linha);
        arquivoAnimais << linha << endl;
        if (i == j){
            while(getline(arquivoAnimais, linha)){
                linha = "";
                arquivoAnimais << linha << endl;
                break;
            }
        }
    }
}

int RemoverAnimal(){
    fstream arquivoAnimais;
    string linha;
    arquivoAnimais.open("dadosAnimais.csv");
    
    if (arquivoAnimais.is_open() == 0){
        cout << "Erro na abertura do arquivo ""DadosAnimais.csv"" o programa será encerrado" << endl;
        exit (EXIT_FAILURE);
    }
    
    int i, j;
    string array[11];
    string selecao;
    cout << "Digite ID do veterinario responsavel \n" 
            "-Se deseja verficar os veterinarios no sistema digite 0\n" << endl;
    cin >> selecao;
    if (selecao == "0"){
        consultarDados(i);
    }

    for (i = 1 ; i <= 10 ; i++){
        getline(arquivoAnimais, linha, ';');
        array[i] = linha;
        getline(arquivoAnimais, linha);
        
        if (array[i] == selecao){
            ApagarLinha(i - 1);
        }

    }
    cout << "Animal removido com sucesso :)" << endl;
    arquivoAnimais.close();
}
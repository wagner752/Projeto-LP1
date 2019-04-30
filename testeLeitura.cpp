#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/* ESSE ARQUIVO FOI CRIADO PARA TESTE DE LEITURA DO ARQUIVO "dados.csv" PARA SE FUNCIONAR APLICAR NO CÓDIGO
ORIGINAL, PORÉM NÃO ESTÁ FUNCIONANDO*/
int main(){
    ifstream arquivo; //Variavel para o arquivo
    string linha; //Linha para armazenar cada linha do arquivo
    string pontoVirgula = ";"; //Separador
    arquivo.open("dados.csv"); 

    if (arquivo.is_open()){ //Se o arquivo for aberto
        while (getline(arquivo,linha)){ //Percorrer linha por linha
            if (linha.compare(pontoVirgula) == 0){ //Se a linha for igual ao ponto e virgular ira imprimir ">>AQUI<<"
                cout << ">>AQUI<<" << endl;
            } 
        }
    }
    else{
        cout << "Erro na abertura do arquivo" << endl;
    }
}

/*A ideia desse arquivo é fazer funcionar para depois aplicar no código principal, quando encontrar
um ";" o valor anterior/posterior seria adicionado a classe funcionario ou animal*/
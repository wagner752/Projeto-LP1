#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
using namespace std;
/* ESSE ARQUIVO FOI CRIADO PARA TESTE DE LEITURA DO ARQUIVO "dados.csv" PARA SE FUNCIONAR APLICAR NO CÓDIGO
ORIGINAL, PORÉM NÃO ESTÁ FUNCIONANDO*/
class funcionario{
    public:
    string numero;
    string numero2;
    string numero3;
    string numero4;
    string numero5;
    string numero6;
    string numero7;
    string numero8;
    string numero9;
    string numero10;
};

int main(){
    ifstream arquivo; //Variavel para o arquivo
    string linha; //Linha para armazenar cada linha do arquivo
    funcionario f;
    arquivo.open("dados.csv"); 

    if (arquivo.is_open()){ //Se o arquivo for aberto
        for (int j = 0 ; j <= 9; j++){
                for(int i = 1 ; i <= 10; i++){
                    (getline(arquivo,linha, ';'));
                    switch (i){
                        case 1:
                        f.numero = linha;
                    
                        case 2:
                        f.numero2 = linha;

                        case 3:
                        f.numero3 = linha;

                        case 4:
                        f.numero4 = linha;

                        case 5:
                        f.numero5 = linha;

                        case 6:
                        f.numero6 = linha;

                        case 7:
                        f.numero7 = linha;

                        case 8:
                        f.numero8 = linha;

                        case 9:
                        f.numero9 = linha;

                        case 10:
                        f.numero10 = linha;
                    }
                }
            j = j;
        }
    }

    else{
        cout << "Erro na abertura do arquivo" << endl;
    }

    cout << f.numero << endl;
    cout << f.numero2 << endl;
    cout << f.numero3 << endl;
    cout << f.numero4 << endl;
    cout << f.numero5 << endl;
    cout << f.numero6 << endl;
    cout << f.numero7 << endl;
    cout << f.numero8 << endl;
    cout << f.numero9 << endl;
    cout << f.numero10 << endl;
}

/*A ideia desse arquivo é fazer funcionar para depois aplicar no código principal, quando encontrar
um ";" o valor anterior/posterior seria adicionado a classe funcionario ou animal*/

/*
while (getline(arquivo,linha, ';')){ //Percorrer linha por linha
            
            istringstream iss(linha);
            iss >> f.numero;    
                if (!iss.good()) {  
                    linha = f.numero;
                }   
        }
*/
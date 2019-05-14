#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
using namespace std;
/* ARQUIVO DE ESQUELETO PARA FAZER A CONSTRUCAO DE CLASSES E SUB-CLASSES
    SERÁ DESCONSIDERADO NO FINAL DO PROJETO*/

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
    funcionario f[10];
    arquivo.open("dadosFuncionarios.csv"); 

    if (arquivo.is_open()){ //Se o arquivo for aberto
        for (int j = 0 ; j <= 9; j++){
                for(int i = 0 ; i <= 9; i++){
                    (getline(arquivo,linha, ';'));
                    switch (i){
                        case 1:
                        f[j].numero = linha;
                    
                        case 2:
                        f[j].numero2 = linha;

                        case 3:
                        f[j].numero3 = linha;

                        case 4:
                        f[j].numero4 = linha;

                        case 5:
                        f[j].numero5 = linha;

                        case 6:
                        f[j].numero6 = linha;

                        case 7:
                        f[j].numero7 = linha;

                        case 8:
                        f[j].numero8 = linha;

                        case 9:
                        f[j].numero9 = linha;

                        case 10:
                        f[j].numero10 = linha;
                    }
                }
                  cout << f[j].numero << endl;
    cout << f[j].numero2 << endl;
    cout << f[j].numero3 << endl;
    cout << f[j].numero4 << endl;
    cout << f[j].numero5 << endl;
    cout << f[j].numero6 << endl;
    cout << f[j].numero7 << endl;
    cout << f[j].numero8 << endl;
    cout << f[j].numero9 << endl;
    cout << f[j].numero10 << endl;
            j = j;
        }
    }

    else{
        cout << "Erro na abertura do arquivo" << endl;
    }

  
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
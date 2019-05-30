#include "manipulacao.h"
#include "animais.h"

int consultarDados(Animal a){
    cout << "Animais já cadastrados no sistema" << endl;
    fstream animaisCSV;
    string linha;
    //Teste de abertura de arquivo
        if (animaisCSV.is_open() == 0){
            cout << "Erro na abertura do arquivo ""dadosAnimais.csv"" o programa será encerrado" << endl;
            exit (EXIT_FAILURE);
        }
        //Exibição da lista de animais já cadastrados
        while(getline(animaisCSV, linha)){
            cout << linha << endl;
        }
        //Fechamento do arquivo
        animaisCSV.close();

    //Animais recém cadastrados
    cout << "Animais recém cadastrados:\n" << endl;
    a.getIdAnimal();
    a.getClasseAnimal();
    a.getNomeAnimal();
    a.getNomeCientifico();
    a.getSexoAnimal();
    a.getTamanhoAnimal();
    a.getDietaAnimal();
    a.getVeterinarioAssociado();
    a.getTratadorResponsavel();
    a.getNomeBatismo();

    cout << a;
}

int consultarDados(int i){
    //LISTAR VETERINARIOS
    if(i == 0){
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
        arquivoVeterinarios.close();
    }// Listar Veterinarios

    //LISTAR TRATADORES
    if(i == 1){
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
        arquivoTratadores.close();
    }// Listar Tratadores

    //LISTAR ANIMAIS
    if(i == 2){
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
        arquivoAnimais.close();
    }// /listar animais
}

int escreverArquivo(int selecao){
    Animal a;
    fstream animaisCSV;
    int i;
    string linha;
    animaisCSV.open("dadosAnimais.csv", ios::app);

    //Teste de abertura do arquivo 
    if (animaisCSV.is_open() == 0){
        cout << "Erro na abertura do arquivo ""dadosAnimais.csv"" o programa será encerrado" << endl;
        exit (EXIT_FAILURE);
    }

    animaisCSV << selecao << endl;
    cout << "Digite a classe do animal:" << endl;
    cin >> linha;
    a.setClasseAnimal(linha);
    cout << "Digite o nome popular do animal:" << endl;
    cin >> linha;
    a.setNomeAnimal(linha);
    cout << "Digite o nome cientifico do animal:" << endl;
    cin >> linha;
    a.setNomeCientifico(linha);

    selecaoSexo: //Em caso de erro na seleção de sexo retornar a partir daqui
    cout << "Selecione o sexo do animal:" << endl;
    cout << "1 - M" << endl;
    cout << "2 - F" << endl;
    cin >> i;
        switch(i){
            case 1:
                a.setSexoAnimal(";M");
            case 2:
                a.setSexoAnimal(";F"); 
        }
        //Opção inválida na seleção do sexo
        if (i >= 3 || i <= 0){
            cout << "Opção inválida" << endl;
            goto selecaoSexo;
        }
    
    cout << "Digite o tamanho do animal:" << endl;
    cin >> linha;
    a.setTamanhoAnimal(linha);
    cout << "Digite a dieta do animal:" << endl;
    cin >> linha;
    a.setDietaAnimal(linha);
    //ID do veterinario
    cout << "Digite ID do veterinario responsavel:\n" 
            "-Se deseja verficar os veterinarios no sistema digite 0\n" << endl;
    cin >> linha;
    if (linha == "0"){
        i = 0;
        consultarDados(i); //Sobrecarga de funções, chama função que lista somente os veterinarios
        cout << "\nDigite o ID do veterinario responsavel:" << endl;
        cin >> linha;
        a.setVeterinarioAssociado(linha);
    }
    else{
        a.setVeterinarioAssociado(linha);
    }
    //ID do tratador
    cout << "Digite o ID do tratador responsavel:\n"
            "-Se deseja verificar os tratadores no sistema digite 0\n" << endl;
    cin >> linha;
    if (linha == "0"){
        i = 1;
        consultarDados(i); //Sobrecarga de funções, chama função que lista somente os tratadores
     
        cout << "\nDigite o ID do tratador responsavel:" << endl;
        cin >> linha;
        a.setTratadorResponsavel(linha);
      }
    else{
        a.setTratadorResponsavel(linha);
    }

    cout << "Digite o nome de batismo do animal" << endl;
    cin >> linha;
    a.setNomeBatismo(linha);

    //Adiciona os dados no arquivo "dadosAnimais.csv"
    animaisCSV << a;
    cout << "Animal cadastrado com sucesso :)" << endl;

    animaisCSV.close(); //Fechamento do arquivo dadosAnimais.csv

    cout << "\nDeseja conferir o arquivo de dados CSV?\n"
              "1 - SIM\n"
              "2 - NÃO\n" << endl;
    cin >> linha;

    if(linha == "1"){
        consultarDados(a);
    }
    if(linha == "2"){
        return 0;
    }

}// /escreverArquivo(int selecao)
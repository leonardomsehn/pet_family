#include <iostream>
#include "animal.h"

using namespace std;

void exibirMenu() { // menu aparente apos logar com sucesso
    int opcao;
    Animal animal;
    string nome;

    do {
        cout << "+-------------------------+" << endl;
        cout << "|         MENU            |" << endl;
        cout << "+-------------------------+" << endl;
        cout << "| 1. EXIBIR ANIMAIS       |" << endl;
        cout << "| 2. DOA��O DE ANIMAIS    |" << endl;
        cout << "| 3. ADO��O DE ANIMAIS    |" << endl;
        cout << "| 4. SAIR                 |" << endl;
        cout << "+-------------------------+" << endl;
        cout << "Escolha uma op��o: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            cout << "+-------------------------+" << endl;
            cout << "|   EXIBIR ANIMAIS        |" << endl;
            cout << "+-------------------------+" << endl;
            cout << "Pronto! Aqui est� a lista com nossos amados bixinhos que est�o livres para receber um novo e am�vel lar!\n" << endl;
            animal.ExibirAnimais(Animal::animais);
            break;

        case 2:
            cout << "+-------------------------+" << endl;
            cout << "|  DOA��O DE ANIMAIS      |" << endl;
            cout << "+-------------------------+" << endl;
            cout << "Voc� precisa doar um pet? Por favor, preencha os requisitos abaixo: \n" << endl;
            animal.CadastroAnimal(Animal::animais);
            break;

        case 3:
            cout << "+-------------------------+" << endl;
            cout << "|   ADO��O DE ANIMAIS     |" << endl;
            cout << "+-------------------------+" << endl;
            cout << "Oba, voc� quer um novo membro para fam�lia? Aqui voc� pode verificar nossos bixinhos que est�o esperando por um lar. \n" << endl;
            animal.RemoverAnimal(Animal::animais, nome);
            break;

        case 4:
            cout << "Saindo do programa..." << endl;
            break;

        default:
            cout << "Op��o inv�lida. Tente novamente." << endl;
            break;
        }
    } while (opcao != 4);
}

void exibirMenuPrincipal() { // menu principal do sistema. a tela inicial
    cout << "+----------------------------------+" << endl;
    cout << "| SEJA BEM VINDO(A) � PET FAMILY!  |" << endl;
    cout << "+----------------------------------+" << endl;
    cout << "| 1 - LOGIN                        |" << endl;
    cout << "| 2 - CADASTRO                     |" << endl;
    cout << "| 3 - SAIR                         |" << endl;
    cout << "+----------------------------------+" << endl;
    cout << "Escolha uma op��o: ";
}


void exibirMenuLogin() { // menu de login
    cout << "+-----------------------+" << endl;
    cout << "|        LOGIN          |" << endl;
    cout << "+-----------------------+" << endl;
    cout << "| 1 - LOGIN COMO USU�RIO|" << endl;
    cout << "| 2 - LOGIN COMO ONG    |" << endl;
    cout << "| 3 - ENTRAR COMO       |" << endl;
    cout << "|     VISITANTE         |" << endl;
    cout << "+-----------------------+" << endl;
    cout << "Escolha uma op��o: ";
}


void exibirMenuCadastro() { // menu de cadastro
    cout << "+-----------------------+" << endl;
    cout << "|       CADASTRO        |" << endl;
    cout << "+-----------------------+" << endl;
    cout << "| 1 - CADASTRO ONG      |" << endl;
    cout << "| 2 - CADASTRO USU�RIO  |" << endl;
    cout << "| 3 - VOLTAR AO MENU    |" << endl;
    cout << "|     PRINCIPAL         |" << endl;
    cout << "+-----------------------+" << endl;
    cout << "Escolha uma op��o: ";
}

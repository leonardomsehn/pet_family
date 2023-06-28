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
        cout << "| 2. DOAÇÃO DE ANIMAIS    |" << endl;
        cout << "| 3. ADOÇÃO DE ANIMAIS    |" << endl;
        cout << "| 4. SAIR                 |" << endl;
        cout << "+-------------------------+" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            cout << "+-------------------------+" << endl;
            cout << "|   EXIBIR ANIMAIS        |" << endl;
            cout << "+-------------------------+" << endl;
            cout << "Pronto! Aqui está a lista com nossos amados bixinhos que estão livres para receber um novo e amável lar!\n" << endl;
            animal.ExibirAnimais(Animal::animais);
            break;

        case 2:
            cout << "+-------------------------+" << endl;
            cout << "|  DOAÇÃO DE ANIMAIS      |" << endl;
            cout << "+-------------------------+" << endl;
            cout << "Você precisa doar um pet? Por favor, preencha os requisitos abaixo: \n" << endl;
            animal.CadastroAnimal(Animal::animais);
            break;

        case 3:
            cout << "+-------------------------+" << endl;
            cout << "|   ADOÇÃO DE ANIMAIS     |" << endl;
            cout << "+-------------------------+" << endl;
            cout << "Oba, você quer um novo membro para família? Aqui você pode verificar nossos bixinhos que estão esperando por um lar. \n" << endl;
            animal.RemoverAnimal(Animal::animais, nome);
            break;

        case 4:
            cout << "Saindo do programa..." << endl;
            break;

        default:
            cout << "Opção inválida. Tente novamente." << endl;
            break;
        }
    } while (opcao != 4);
}

void exibirMenuPrincipal() { // menu principal do sistema. a tela inicial
    cout << "+----------------------------------+" << endl;
    cout << "| SEJA BEM VINDO(A) À PET FAMILY!  |" << endl;
    cout << "+----------------------------------+" << endl;
    cout << "| 1 - LOGIN                        |" << endl;
    cout << "| 2 - CADASTRO                     |" << endl;
    cout << "| 3 - SAIR                         |" << endl;
    cout << "+----------------------------------+" << endl;
    cout << "Escolha uma opção: ";
}


void exibirMenuLogin() { // menu de login
    cout << "+-----------------------+" << endl;
    cout << "|        LOGIN          |" << endl;
    cout << "+-----------------------+" << endl;
    cout << "| 1 - LOGIN COMO USUÁRIO|" << endl;
    cout << "| 2 - LOGIN COMO ONG    |" << endl;
    cout << "| 3 - ENTRAR COMO       |" << endl;
    cout << "|     VISITANTE         |" << endl;
    cout << "+-----------------------+" << endl;
    cout << "Escolha uma opção: ";
}


void exibirMenuCadastro() { // menu de cadastro
    cout << "+-----------------------+" << endl;
    cout << "|       CADASTRO        |" << endl;
    cout << "+-----------------------+" << endl;
    cout << "| 1 - CADASTRO ONG      |" << endl;
    cout << "| 2 - CADASTRO USUÁRIO  |" << endl;
    cout << "| 3 - VOLTAR AO MENU    |" << endl;
    cout << "|     PRINCIPAL         |" << endl;
    cout << "+-----------------------+" << endl;
    cout << "Escolha uma opção: ";
}

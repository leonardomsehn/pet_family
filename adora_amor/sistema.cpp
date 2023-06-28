#include <iostream>
#include "usuario.h"
#include "ong.h"
#include "animal.h"
#include "menus.h"
#include <vector>

using namespace std;

void executarSistema() {
    vector<Usuario> usuarios;
    vector<Ong> ongs;

    int op1;
    Animal animal;

    while (true) {
        exibirMenuPrincipal();
        cin >> op1;

        switch (op1) {
        case 1: {
            int oplogin;
            exibirMenuLogin();
            cin >> oplogin;

            switch (oplogin) {
            case 1: {
                cout << "Opção escolhida: LOGIN COMO USUÁRIO" << endl;
                Usuario usuario;
                usuario.fazerLogin(usuarios);
                break;
            }
            case 2: {
                cout << "Opção escolhida: LOGIN COMO ONG" << endl;
                Ong ong;
                ong.fazerLoginOng(ongs);
                break;
            }
            case 3:
                cout << "Bem vindo, visitante" << endl;
                cout << "Aqui estão nossos queridos animais, prontos para terem um lar amoroso." << endl;
                animal.ExibirAnimais(Animal::animais);
                break;
            }
            break;
        }

        case 2: {
            int op2;
            exibirMenuCadastro();
            cin >> op2;

            switch (op2) {
            case 1: {
                cout << "Opção escolhida: CADASTRO ONG" << endl;
                Ong novaOng;
                cout << "Cadastrar Ong: " << endl;
                novaOng.cadastraOng();
                ongs.push_back(novaOng);
                break;
            }
            case 2: {
                cout << "Opção escolhida: CADASTRO USUÁRIO" << endl;
                Usuario novoUsuario;
                cout << "Cadastrar Usuário: " << endl;
                novoUsuario.cadastraUsuarios();
                usuarios.push_back(novoUsuario);
                break;
            }
            case 3:
                break;
            }
            break;
        }

        case 3:
            cout << "Até mais" << endl;
            return;
        }
    }
}
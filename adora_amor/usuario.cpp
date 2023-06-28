#include <iostream>
#include "usuario.h"
#include <string>
#include <vector>
#include "menus.h"

// Inicializa��o do vetor de usu�rios
vector<Usuario> Usuario::usuarios;

Usuario::Usuario() {
}

Usuario::Usuario(string login, string senha)
{
    this->login = login;
    this->senha = senha;
}

void Usuario::setLogin(string login)
{
    this->login = login;
}

void Usuario::setSenha(string senha)
{
    this->senha = senha;
}

string Usuario::getLogin()
{
    return login;
}

string Usuario::getSenha()
{
    return senha;
}

void Usuario::fazerLogin(vector<Usuario>& usuarios) {

    cout << "Login: ";
    cin >> login;
    cout << "Senha: ";
    cin >> senha;

    bool encontrou = false;

    // Percorre o vetor de usu�rios cadastrados
    for (Usuario& usuario : usuarios) {
        // Verifica se o login e a senha correspondem ao usu�rio cadastrado
        if (usuario.getLogin() == login && usuario.getSenha() == senha) {
            encontrou = true;
            break;
        }
    }

    if (encontrou) {
        cout << "Login bem-sucedido!" << endl;
        exibirMenu();
    }
    else {
        cout << "Login ou senha incorretos. Tente novamente." << endl;
    }
}


void Usuario::cadastraUsuarios() {

    cout << "Para cadastrar um usu�rio, digite um login e senha: " << endl;

    cout << "Login: ";
    cin >> login;
    cout << "Senha: ";
    cin >> senha;

    Usuario novoUsuario(login, senha);
    usuarios.push_back(novoUsuario);

    cout << "Cadastrado com sucesso. Total de usu�rios do sistema: " << usuarios.size() << endl;
}

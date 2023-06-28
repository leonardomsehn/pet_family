#include <iostream>
#include "ong.h"
#include "animal.h"
#include <string>
#include <vector>
#include "menus.h"

vector<Ong> Ong::ongs;

Ong::Ong() {
}

Ong::Ong(string cnpj, string nome, string login, string senha)
{
    this->cnpj = cnpj;
    this->nome = nome;
    this->login = login;
    this->senha = senha;
}

void Ong::setCnpj(string cnpj)
{
    this->cnpj = cnpj;
}

void Ong::setNome(string nome)
{
    this->nome = nome;
}

void Ong::setLogin(string login)
{
    this->login = login;
}

void Ong::setSenha(string senha)
{
    this->senha = senha;
}

string Ong::getCnpj()
{
    return cnpj;
}

string Ong::getNome()
{
    return nome;
}

string Ong::getLogin()
{
    return login;
}

string Ong::getSenha()
{
    return senha;
}

void Ong::fazerLoginOng(vector<Ong>& ongs) {
    string login;
    string senha;

    cout << "Login: ";
    cin >> login;
    cout << "Senha: ";
    cin >> senha;

    bool encontrou = false;

    for (Ong& ong : ongs) {
        if (ong.getLogin() == login && ong.getSenha() == senha) {
            encontrou = true;
            break;
        }
    }

    if (encontrou) {

        cout << "Logado com sucesso!" << endl;

        exibirMenu();
   
    }
    else {
        cout << "Login ou senha incorretos. Tente novamente." << endl;
    }
}

void Ong::cadastraOng() {

    cout << "Para cadastrar a ONG, preencha os campos abaixo: " << endl;

    cout << "CNPJ: ";
    cin >> cnpj;
    cin.ignore();
    cout << "Nome da ONG: ";
    getline(cin, nome);
    cout << "Login: ";
    cin >> login;
    cout << "Senha: ";
    cin >> senha;

    Ong novaOng(cnpj, nome, login, senha);
    ongs.push_back(novaOng);

    cout << "Cadastrado com sucesso. Total de ongs no sistema: " << ongs.size() << endl;
}

#include <iostream>
#include "animal.h"
#include <fstream>
#include <string>
#include <vector>
using namespace std;


vector<Animal> Animal::animais;

Animal::Animal() {
}

Animal::Animal(string nome, int idade, string tipo, char sexo, char porte, string sit_vacinal)
{
    this->nome = nome;
    this->idade = idade;
    this->tipo = tipo;
    this->sexo = sexo;
    this->porte = porte;
    this->sit_vacinal = sit_vacinal;
}

void Animal::setNome(string nome)
{
    this->nome = nome;
}

void Animal::setIdade(int idade)
{
    this->idade = idade;
}

void Animal::setTipo(string tipo)
{
    this->tipo = tipo;
}

void Animal::setSexo(char sexo)
{
    this->sexo = sexo;
}

void Animal::setPorte(char porte)
{
    this->porte = porte;
}

void Animal::setSit_vacinal(string sit_vacinal)
{
    this->sit_vacinal = sit_vacinal;
}

string Animal::getNome()
{
    return nome;
}

int Animal::getIdade()
{
    return idade;
}

string Animal::getTipo()
{
    return tipo;
}

char Animal::getSexo()
{
    return sexo;
}

char Animal::getPorte()
{
    return porte;
}

string Animal::getSit_vacinal()
{
    return sit_vacinal;
}

void Animal::CadastroAnimal(vector<Animal>& animais)
{
    Animal animal;
    cout << "Nome: ";
    cin >> animal.nome;
    cout << "Tipo: (cachorro, gato, etc): ";
    cin >> animal.tipo;
    cout << "Idade (meses): ";
    cin >> animal.idade;
    cout << "Sexo (m ou f): ";
    cin >> animal.sexo;
    cout << "Porte (p, m ou g): ";
    cin >> animal.porte;
    cout << "Situação vacinal: ";
    cin >> animal.sit_vacinal;

    animais.push_back(animal); // Adiciona o novo animal ao vetor
    cout << "Seu pet, " << animal.nome << " foi doado. Não se preocupe, ele será muito bem cuidado e logo logo terá um novo lar. " << endl;
}

void Animal::ExibirAnimais(vector<Animal>& animais)


{
    for (Animal& animal : animais) {
        cout << "Nome: " << animal.getNome() << endl;
        cout << "Idade: " << animal.getIdade() << " meses" << endl;
        cout << "Tipo: " << animal.getTipo() << endl;
        cout << "Sexo: " << animal.getSexo() << endl;
        cout << "Porte: " << animal.getPorte() << endl;
        cout << "Situação Vacinal: " << animal.getSit_vacinal() << endl;
        cout << endl;
    }
}

void Animal::RemoverAnimal(vector<Animal>& animais, const string& nome)
{
    for (auto it = animais.begin(); it != animais.end(); ++it) {
        cout << "Informe o nome do pet que você deseja adotar: ";
        string nome;
        cin >> nome;
        if (it->getNome() == nome) {
            animais.erase(it);
            cout << "\nO pet" << nome << " foi adotado e está feliz em seu novo lar" << endl;
            break;
        }
    }
}

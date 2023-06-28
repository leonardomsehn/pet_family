#include <iostream>
#include <vector>

using namespace std;

class Animal {
private:
    string nome;
    int idade = 0;
    string tipo;
    char sexo;
    char porte;
    string sit_vacinal;

    // tava aqui

public:
    static vector<Animal> animais; // agora aqui

    Animal(); // construtor padrão

    Animal(string nome, int idade, string tipo, char sexo, char porte, string sit_vacinal);

    void setNome(string nome);
    void setIdade(int idade);
    void setTipo(string tipo);
    void setSexo(char sexo);
    void setPorte(char porte);
    void setSit_vacinal(string sit_vacinal);

    string getNome();
    int getIdade();
    string getTipo();
    char getSexo();
    char getPorte();
    string getSit_vacinal();

    void CadastroAnimal(vector<Animal>& animais);
    void ExibirAnimais(vector<Animal>& animais);
    void RemoverAnimal(vector<Animal>& animais, const string& nome);
};

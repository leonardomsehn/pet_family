#include <iostream>
#include <vector>

using namespace std;

class Ong {
private:
    string cnpj;
    string nome;
    string login;
    string senha;

    static vector<Ong> ongs;

public:
    Ong();

    Ong(string cnpj, string nome, string login, string senha);

    void setCnpj(string cnpj);
    void setNome(string nome);
    void setLogin(string login);
    void setSenha(string senha);

    string getCnpj();
    string getNome();
    string getLogin();
    string getSenha();

    // declara funcao

    void fazerLoginOng(vector<Ong>& ongs);
    void cadastraOng();

};
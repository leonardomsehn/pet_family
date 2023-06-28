#include <iostream>
#include <vector>

using namespace std;

class Usuario {
private:
    string login;
    string senha;

    static vector<Usuario> usuarios;

public:
    Usuario();

    Usuario(string login, string senha);

    void setLogin(string login);
    void setSenha(string senha);

    string getLogin();
    string getSenha();

    // declara funcao

    void cadastraUsuarios();
    void fazerLogin(vector<Usuario>& usuarios);

};
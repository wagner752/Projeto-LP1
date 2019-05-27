#include "teste.h"

/*Bruno SINFO
    Conferir o email
    mx5.ufrn.br
    login com @cb.ufrn.br
    Laura irá vê os problemas de cookie
*/

string Animal::getIdAnimal(){
    return IdAnimal;
}
string Animal::getCPF(){
    return CPF;
}
void Animal::setIdAnimal(string rIdAnimal){
    IdAnimal = rIdAnimal;
}
void Animal::setCPF(string rCPF){
    CPF = rCPF;
}

int main(){
    Animal A;

    map<string, Animal> *animal;
        
    A.setCPF("47");
    A.setIdAnimal("25");

    cout << A.getCPF() << endl;
    cout << A.getIdAnimal() << endl;

    return 0;
}
#include <string>
#include <iostream>
#include <map>

using namespace std;

class Animal{
    private:
        string IdAnimal;
        string CPF;
    public:
        string getIdAnimal();
        string getCPF();
        void setIdAnimal(string rIdAnimal);
        void setCPF(string rCPF);
};

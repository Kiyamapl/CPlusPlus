#include <iostream>
using namespace std;

class Semafor{
    unsigned int n;
    unsigned int max;
public:
    Semafor();
    Semafor(unsigned int n);
    void rezerwuj();
    void zwolnij();
    bool stan();
};

int main()
{
    Semafor obj(5);
    obj.rezerwuj();
    obj.rezerwuj();
    obj.rezerwuj();
    obj.rezerwuj();
    obj.rezerwuj();
    obj.rezerwuj();
    obj.rezerwuj();
    obj.zwolnij();
    cout << obj.stan() << endl;
    return 0;
}

Semafor::Semafor()
{
    this->n=0;
    this->max=1;
}

Semafor::Semafor(unsigned int n)
{
    this->n=0;
    this->max=n-1;
}

void Semafor::rezerwuj()
{
    if(this->n<this->max)n++;
}

void Semafor::zwolnij()
{
    if(this->n>0) n--;
}

bool Semafor::stan()
{
    if(this->n<this->max)return true;
    else return false;
}

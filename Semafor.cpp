#include <iostream>
using namespace std;

class Semafor{
    unsigned int n;
    unsigned int max;
    int* tab;
public:
    Semafor();
    Semafor(unsigned int n);
    void rezerwuj(int id);
    void zwolnij(int id);
    bool stan();
    void wypisz();
};

int main()
{
    Semafor obj(10);
    obj.rezerwuj(5353);
    obj.rezerwuj(2332);
    obj.rezerwuj(1231);
    obj.rezerwuj(2454);
    obj.rezerwuj(2452);
    obj.zwolnij(2332);
    obj.rezerwuj(1234);
    obj.rezerwuj(6343);
    obj.rezerwuj(6313);
    obj.zwolnij(1234);
    obj.zwolnij(1231);
    obj.wypisz();
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
    this->tab=new int[this->max];
}

void Semafor::rezerwuj(int id)
{
    if(this->n<this->max){
        tab[this->n]=id;
        n++;
    }
}

void Semafor::zwolnij(int id)
{
    unsigned int p;
    if(this->n>0){
        for(unsigned int i=0; i<n+1;i++){
            if(tab[i]==id){
                tab[i]=0;
                p=i;
            }
        }
        for(unsigned int j=p; j<n; j++){
            tab[j]=tab[j+1];
        }
        n--;
    }
}
bool Semafor::stan()
{
    if(this->n<this->max)return true;
    else return false;
}

void Semafor::wypisz()
{
    for(unsigned int i=0; i<n; i++){
       cout<<tab[i]<<endl;
    }
}

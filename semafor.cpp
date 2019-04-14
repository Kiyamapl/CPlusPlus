#include "semafor.h"

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
       std::cout<<tab[i]<<std::endl;
    }
}

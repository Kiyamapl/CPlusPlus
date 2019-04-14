#include <iostream>
#include "semafor.h"
using namespace std;

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


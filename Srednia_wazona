    double srednia=0;
    int a,b,c;
    int licz_a=0, licz_b=0, licz_c=0;
    cout << "Podaj imie i nazwisko ucznia"<<endl;
    getline(cin, nazwa);
    cout << "Podaj oceny ze sprawdzianow, aby zakonczyc wpisz 0 i enter" << endl;
    while(a!=0){
        cin>>a;
        suma_spr+=a;
        if(a!=0) licz_a++;
    }
    cout << "Podaj oceny z kartkowek, aby zakonczyc wpisz 0 i enter" << endl;
    while(b!=0){
        cin>>b;
        suma_kart+=b;
        if(b!=0) licz_b++;
    }
    cout << "Podaj oceny z aktywnosci, aby zakonczyc wpisz 0 i enter" << endl;
    while(c!=0){
        cin>>c;
        suma_akt+=c;
        if(c!=0) licz_c++;
    }
    srednia=(suma_spr*0.6+suma_kart*0.25+suma_akt*0.15)/(licz_a*0.6+licz_b*0.25+licz_c*0.15);
    cout << nazwa<<srednia<<endl;
    return 0;
}

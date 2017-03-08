#include <iostream>
#include "Naglowek1.h"
#include "Naglowek2.h"


using namespace std;

int main()
{
    string s;
    cout << "Wpisz swoje imię, 'dodaj', albo 'odejmij'" << endl;
    cin>>s;
    if(s=="dodaj"){
        int a,b,wynik;
        cout<<"podaj 2 liczby"<<endl;
        cin>>a>>b;
        wynik = dodaj(a,b);
        cout<<wynik<<endl;
    }
    else if(s=="odejmij"){
        int a,b,wynik;
        cout<<"podaj 2 liczby"<<endl;
        cin>>a>>b;
        wynik = odejmij(a,b);
        cout<<wynik<<endl;
    }
    else{
        witaj(s);
    }
    return 0;
}

/* De la Davu
#include <iostream>
#include <fstream>

using namespace std;

// fisierul text numere.in contine pe prima linie cel mult un milion de numere naturale cu cel mult 9 cifre fiecare
//sa se scrie un program care sa determine si sa afiseze pe ecran cele mai mici 3 valori din fisier care sunt multiplii ai celui de-al treilea numar
//si numarul cu cea mai mare suma a cifrelor

ifstream f("citire.txt");

int n=0, nr=0, poz3=0, sumamax=0, nrmax=0;

int s_cif(int a)
{
    int suma=0;
    while(a)
    {
        suma=suma+a%10;
        a=a/10;
    }
    return suma;
}

void citire(int v[100])
{
    int i=1;
    while(f>>v[i])
    {
        if(sumamax<s_cif(v[i]))
        {
            sumamax=s_cif(v[i]);
            nrmax=v[i];
        }
        i++;
        n++;
    }
    cout<<"Numarul cu suma cifrelor cea mai mare este: "<<nrmax<<endl;
    cout<<endl;
}

void multiplu(int v[100], int vv[100])
{
    int j=1;
    for(int i=n; i>=3; i--)
    {
        poz3=v[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(v[i]%poz3==0)
        {
            vv[j]=v[i];
            nr++;
            j++;
        }
    }
}

void sortare(int v[100], int vv[100])
{
    for(int i=1; i<=nr-1; i++)
        for(int j=i+1; j<=nr; j++)
            if(vv[i]>vv[j])
                swap(vv[j], vv[i]);
    cout<<"Cele mai mici 3 valori din vector multiplii ai lui "<<poz3<<" sunt: ";
    for(int j=2; j<=4; j++)
        cout<<vv[j]<<" ";
    cout<<endl;
}

int main()
{
    int v[100], vv[100];
    citire(v);
    multiplu(v, vv);
    sortare(v, vv);
    return 0;
}
*/



/*
Citim un text numere.int ce contine pe prima linie 1M nr nat cu cel mult 9 cifre fiecare
Sa se scrie un prog care sa determine si sa afiseze cele mai mici 3 valori din fisier care sunt multipli celui de-al treilea nr si
nr cu cea mai mare suma a cifrelor
*/

#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere.txt");

int t[100];

void citire(int v[]){
    int j=0, i=1,x, y, n=0, nr=0;;
    while(f>>v[i]){
        /*if(v[i]%y==0){
            t[i]=v[i];
            nr++;
            cout<<v[i]<<endl;
        }*/
        n++;
        cout<<v[i]<<" ";
        i++;
    }
    cout<<endl;
    y=v[3];
    int k=1;
    for(j=1;j<=n;j++){
       if(v[j]%y==0){
            t[k]=v[j];
            cout<<v[j]<<" ";
            k++;
       }
    }

}
/*
void afisare(int v[]){
    cout<<v<<" ";
}*/

int main()
{
    int v[100];
    citire(v);
    //afisare(v);
    return 0;
}

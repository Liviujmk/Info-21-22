/*
dandu-se un vector aflati al doilea cel mai mic nr din vector
*/

#include <iostream>
#include <algorithm>

int n=4, x=3, m,m1=1000, m2=1000;

int v[10]={2,3,35,34};

using namespace std;

void afisare(int v[]){
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}

int aldoileaminim(int v[])
{
    for(int i=0;i<n;i++)
    {
        if(m1>v[i])
            m1=v[i];
        else if(v[i]<m2)
            m2=v[i];
    }
    cout<<"Al doilea minim este: "<<m2<<endl;
    cout<<"Suma celor 2 minime este: ";
    return m2+m1;
}

int caut(int s, int d)
{
    if(s>d)
        return -1;
    else
        {
            m =(s+d)/2;
            if (x==v[m])
                return m;
            if (x<v[m])
                return caut(s,m-1);
            else
                return caut(m+1,d);
        }
}

void ordonare(int v[]){
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
                if(v[i]<=v[j])
                    swap(v[i], v[j]);
}

int main()
{
    int problema;
    do{
        cin>>problema;
        switch(problema){
        case 1:
            afisare(v);
            cout<<endl;
            cout<<aldoileaminim(v);
            cout<<endl;
            break;
        case 2:
            ordonare(v);
            afisare(v);
            cout<<endl;
            break;

        case 3:
            cout<<"Elementul "<<x<<" a fost gasit pe pozitia: "<<caut(0,n-1);
            cout<<endl;
            break;
        default:
            cout<<"Problema nu exista";

        }
    }
    while(problema>=4);
    return 0;
}

//// v.18.III.3
#include <iostream>

using namespace std;

int count(double a[101], int n){
    int nr=0;
    double ma,s=0;
    for(int i=0;i<n;i++){
        s=s+a[i];
    }
    ma=s/n;
    for(int i=0;i<n;i++){
        if(a[i]>=ma)
            nr++;
    }
    return nr;
}



int main()
{
    double v[]={12, 7.5, 6.5, 3, 8.5, 7.5}; 
    int n=6;
    cout<<count(v,n);
    return 0;
}


/////// v.18.III.4
//numere.txt: 26 2 5 30 13 45 62 7 79
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere.txt");

int main()
{
    int k,x,ok=0,poz=0;
    cin>>k;
    while(f>>x){
        if(x>=k)
            poz++;
        if(x==k)
            ok=1;
    }
    if(ok==1)
        cout<<poz;
    else 
        cout<<"nu exista";
    
    return 0;
}


///// v.19.III.3

#include <iostream>

using namespace std;

void aranjare(double a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main()
{
    double v[]={12, -7.5, 6.5, -3, -8, 7.5};
    int n=6;
    aranjare(v,n);
    return 0;
}

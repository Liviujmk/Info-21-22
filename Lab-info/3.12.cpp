/*#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

//int sub(int v[100], int n, int a)

int main()
{
    int x, n, nr=0;
    bool ok;
    cin>>n;
    while(f>>x){
        if(x%n==0){
            cout<<x<<" ";
            //nr++;
            ok=true;
        }
    }
    if(ok==false) // sau nr==0)
        cout<<"Nu exista";
    return 0;
}*/ // ---3VVV111





/*#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("bac.txt");

//int sub(int v[100], int n, int a)

int main()
{
    int n, x, v[101];
    n=0;
    while(f>>x){
        if(x>0)
        {
            v[n]=x;
            n++;
        }
    }
    sort(v,v+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}*/ // ---3VVV222




/*
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("bac.txt");

//int sub(int v[100], int n, int a)

int main()
{
    int n, x, v[101];
    n=0;
    while(f>>x){
        if(x>99)
        {
            v[n]=x;
            n++;
        }
    }
    sort(v,v+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}*/ // ---3VVV333

/*
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("bac.txt");

//int sub(int v[100], int n, int a)

int main()
{
    int n, x, v[101];
    bool ok;
    n=0;
    while(f>>x){
        if(x<99)
        {
            v[n]=x;
            n++;
            ok=true;
        }
    }
    if(ok==false)
        cout<<"Nu esista";

    sort(v,v+n);
    for(int i=n-1;i>=0;i--){
        cout<<v[i]<<" ";
    }

    return 0;
}*/ // ---3VVV444

/*
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("bac.txt");

//int sub(int v[100], int n, int a)

int main()
{
    int n;
    cin>>n;
    while(n){
        g<<n<<" ";
        n/=10;
    }

    return 0;
}*/ // ---3VVV555

#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("bac.txt");

int f (int a){
    int d;
    /*while(n!=1)
    {
        while(n%d==0)
        {
            return d;
        }
    d++;
    }*/
    for(d=2;d<=sqrt(a);d++){
        if(n%d==0)
            return d
    return a;
    }
}

int main()
{
    int n,k=0,x;
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>x;
        if(f(x)==x){
            cout<<x;
            k++;
        }
    }
    if(k==0)
        cout<<"Nu esista";
    return 0;
}

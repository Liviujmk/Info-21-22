III.1 

void divPrim(unsigned int n, unsigned int &s)
{
    unsigned int divizor = 2;
    while (n > 1)
    {
        if(n % divizor == 0)
        {
            unsigned int putere = 0;
            while(n % divizor == 0)
            {
                putere = putere + 1;
                n = n / divizor;
            }
            if(putere % 2 == 1)
                s = s + divizor;
        }
        divizor++;
    }
}

III.2

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    unsigned int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        char cuvant[15];
        cin >> cuvant;
        unsigned int lungimeCuv = strlen(cuvant);
        if(cuvant[lungimeCuv - 1] == 'a' || cuvant[lungimeCuv - 1] == 'e' || cuvant[lungimeCuv - 1] == 'i' || cuvant[lungimeCuv - 1] == 'o' || cuvant[lungimeCuv - 1] == 'u')
        {
            if(k != 0)
            {
                k = k - 1;
                cout << cuvant << "\n";
            }
        }
    }
    return 0;
}

III.3
#include<iostream>
#include<fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    /*unsigned int sufix, nr_1, nr_2, ultim = -1, precedent = -1;

    fin >> sufix >> nr_1;

    while(fin >> nr_2)
    {
        if(nr_1 % 1000 == sufix && nr_2 % 1000 == sufix)
        {
            ultim = nr_2;
            precedent = nr_1;
        }
        nr_1 = nr_2;
    }

    if(ultim != -1)
        cout << precedent << " " << ultim;
    else
        cout << "nu exista";
*/
    int x,a,b,ok=0, ca,cb;
    fin>>x>>a;
    while(fin>>b){
        if(a%1000 == x && b%1000 == x){
            ok=1;
            ca=a;
            cb=b;
        }
        a=b;
    }
    if(ok)
        cout<<a<<" "<<b;
    else
        cout<<"nu exista";
    fin.close();
    return 0;
}







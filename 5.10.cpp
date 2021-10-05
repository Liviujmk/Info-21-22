//scoaterea cifrelor din sir
/*
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[251], t[251], cifre[]="1234567890";
    int n, nr=0;
    cin.getline(s,250);
    cin.get();
    cin.getline(t,250);
    cout<<endl<<s<<endl<<t<<endl;
    cout<<endl;

    /*for(int i=0; i<=strlen(s); i++){
        if(s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' || s[i]=='0')
            cout<<s[i];
    }
    for(int i=0; i<=strlen(t); i++){
        if(t[i]=='1' || t[i]=='2' || t[i]=='3' || t[i]=='4' || t[i]=='5' || t[i]=='6' || t[i]=='7' || t[i]=='8' || t[i]=='9' || t[i]=='0')
            cout<<t[i];
    }*/

    //sau alta metoda
/*
    for(int i=0; i<=strlen(s); i++){
        for(char j='0'; j<='9';j++)
            if(s[i]==j)
                cout<<s[i];}
    for(int i=0; i<=strlen(t); i++){
        for(char j='0'; j<='9';j++)
            if(t[i]==j)
                cout<<t[i];}

    return 0;
}

*/

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

ifstream f("sir.txt");

int main()
{
    char c[250], s[251], t[251], sep[]=" ";
    int n, nr=0;
    f.getline(t, 250);
    f.getline(c, 51);
    cout<<t<<endl;
    char *p = strtok(t, sep);
    while(p){
        if(p[0]==c[0]){
            nr++;
            strcat(s, p);
            strcat(s, " ");
        }
        p = strtok(NULL, sep);
    }
    cout<<s<<endl<<nr;
    return 0;
}

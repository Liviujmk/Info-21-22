/*
Se citeste un text "t" avand cel mult 50 caractere litere si cifre = 1 sau 2 .Scrieti un program ce il afiseaza dupa modifcarea sa in memorie prin inserarea cuvantului "1" dupa fiecare aparitie a cifei 1 respctiv 2
*/
/*
#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    char t[51], u[]="unu", d[]="doi", tr[]="trei",aux[51];
    int n, nr=0;
    cin.getline(t,51);
    for(int i=0; i<strlen(t); i++){
        if(t[i] == '1'){
            strcpy(aux, t+i+1);
            strcpy(t+i+1, u);
            strcat(t+i+1,aux);
        }

        if(t[i] == '2'){
            strcpy(aux, t+i+1);
            strcpy(t+i+1, d);
            strcat(t+i+1,aux);
        }

        if(t[i] == '3'){
            strcpy(aux, t+i+1);
            strcpy(t+i+1, tr);
            strcat(t+i+1,aux);
        }
    }
    cout<<t;
    return 0;
}
*/

/*
    In fisierul "cuvinte.in" se afla un nr natural n si apoi n cuvinte distincte. Sa se afiseze in "cuvinte.out" primul
    cuvant in ordine alfabetica
*/

#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    char t[51], sep[]=" .,";
    int n, nr=0;
    cin.getline(t,51);
    char *p = strtok(t, sep);
    char *maxx=p;
    while(p!=NULL){
        if(strcmp(p, maxx) < 0)
            maxx=p;
        p = strtok(NULL, sep);
    }
    cout<<maxx;

    return 0;
}



#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char s[250], t[250], c[250], cons[] = "bcdfghjklmnpqrstwxyz", num[]="1234567890", voc[]="aeiou";

void ex1(){
  cin>>s;
  cout<<s[1]<<s[3]<<s[5];
}

void ex2(){
  cin>>s;
  for(int i=strlen(s)-1;i>=0;i--){
    cout<<s[i];
  }
}

void ex3(){
  cin>>s;
  cout<<"Sufixe: "<<endl;
  for(int i=1;i<strlen(s);i++){
    cout<<s+i<<endl;
  }
  /*cout<<"Prefixe: "<<endl;
  
  reverse(s, s+strlen(s));
  for(int i=strlen(s)-1;i>=1;i--){
    reverse(s+i, s+strlen(s));
    cout<<s+i<<endl;
  }*/
}

void ex4(){
  char r[100];
  cin.get(s,100);
  cin.get();
  cin.get(t,100);
  strcat(s, t);
  strcpy(r, s);
  cout<<r;
}

void ex5(){
  cin>>s;
  for(int i=0;i<strlen(s);i++)
    for(int j=0;j<strlen(s);j++)
      if((int)s[i]<(int)s[j])
        swap(s[i], s[j]);
  cout<<s;
}

void ex6(){
  cin>>s;
  for(int i=0;i<strlen(s);i++)
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
      cout<<s[i]<<" ";
}

void ex7(){
  cin>>s;
  for(int i=0;i<strlen(s);i++)
    if(97<=(int)s[i] && (int)s[i]<=122)
      cout<<char(s[i]-32);
    else
      cout<<s[i];
}

void ex8(){
  cin>>s;
  char X;cin>>X;
  for(int i=0;i<strlen(s);i++)
    if(s[i]==X)
      strcpy(s+i, s+i+1);
  cout<<s;
}

void ex9(){
  cin>>s;
  int nr=0, n=0,m=0;
  for(int i=0;i<strlen(s);i++){
    if('A'<=s[i] && 'Z' >=s[i])
      m++;
    else
    if('a'<=s[i] && 'z' >=s[i])
      n++;
    else
    if('1'<=s[i] && '9' >=s[i])
      nr++;
  }
  cout<<m<<" "<<n<<" "<<nr;
}

void ex10() {
  cin>>s;
  int k=0;
  char s2[strlen(s)];
  for(int i=0; i<strlen(s);i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
      s2[k]=s[i];
      k++;
    }
  }
  cout<<s2;
}

void ex11() {
  cin>>s;
  cout<<strlen(s); 
}

void ex12() {
  cin>>s;
  for(int i=0;i<strlen(s);i++){
    if('A'<=s[i] && 'Z' >=s[i])
      cout<<s[i]<<" ";
  }
}

void ex13() {
  cin.getline(s,100);
  char *p = strtok(s, " .,");
  while(p!=NULL) {
    cout<<p<<endl;
    p = strtok(NULL, " .,");
  }
}

void ex14() {
  cin.getline(s,100);
  cin.get();
  cin.getline(t,100);
  int ns=0, nt=0;
  char s1[100], t1[100];
  strcpy(s1, s);
  strcpy(t1, t);
  char *p = strtok(s, " .,");
  while(p!=NULL) {
    ns++;
    p = strtok(NULL, " .,");
  }
  
  char *r = strtok(t, " .,");
  while(r!=NULL) {
    nt++;
    r = strtok(NULL, " .,");
  }
  if(ns>nt)
    cout<<"Prop 1: "<<s1<<" - si are "<<ns<<" cuvinte"<<endl;
  else
    cout<<"Prop 2: "<<t1<<" - si are "<<nt<<" cuvinte"<<endl;
  
}

void ex15(){
    cin.getline(s,100);
    char *cuv = strtok(s, " ");
    while(cuv!=NULL) {
        cout<<cuv<<" ";
        reverse(cuv, cuv+strlen(cuv));
        cout<<cuv;
        cout<<endl;
        cuv = strtok(NULL, " ");
    }
}

void ex16(){
    cin.getline(s,100);
    int nr=0, r[256]={0};
    
    /*for(int i=0;i<strlen(s);i++)
        r[int(s[i])]++;
    for(int i=65;i<123;i++)
        cout<<"Litera "<<char(i)<<" "<<r[i]<<endl;*/
  
    /*for(int i=0;i<strlen(s);i++){
          nr=0;
          for(int j=0;j<=strlen(t);j++){
              if(s[i]==t[j])
                  nr++;
          }
          if(s[i] != ' ')
              cout<<"Litera "<<s[i]<<" apare de "<<nr<<" ori"<<endl;
      }*/
}

void ex17(){
    cin.getline(s,250);
    strcpy(t, s);
    char *p = strtok(s, " ");
    int nr=0;
    while(p!=NULL){
        if(strlen(p)>nr)
            nr = strlen(p);
        p = strtok(NULL, " ");
    }

    char *r = strtok(t, " ");
    while(r!=NULL){
        if(strlen(r)==nr)
            cout<<r<<endl;
        r = strtok(NULL, " ");
    }
}

void ex18(){
    cin.getline(s,250);
    cin.get();
    cin.getline(t,250);
    int nr=0, r[256]={0};

    for(int i=0;i<strlen(s);i++)
        for(int j=0;j<strlen(t);j++)
            if(s[i]==t[j])
                r[int(s[i])]++;

    for(int i=65;i<123;i++)
        if(r[i]>0)
            cout<<char(i)<<" ";

}

void ex19(){
    cin.getline(s,250);
    cin.get();
    cin.getline(t,250);
    for(int i=0;i<strlen(s);i++)
        for(int j=0;j<strlen(s);j++){
            if((int)s[i]<(int)s[j])
                swap(s[i], s[j]);
        }

    for(int i=0;i<strlen(t);i++)
        for(int j=0;j<strlen(t);j++){
            if((int)t[i]<(int)t[j])
                swap(t[i], t[j]);
        }
    cout<<s<<endl<<t;
}

void ex20(){
    int n, nr;
    f>>n;
    while(f>>s){
        nr=0;
        for(int i=0;i<strlen(s);i++)
            if(strchr("bcdfghjklmnpqrstwxyz", s[i]) == NULL)
                nr++;
        if(nr==0){
            cout<<s<<endl;
        }
    }
}

void ex2_1(){
    cin.get(s,250);
    cin.get();
    cin.get(t,250);
    cin.get();
    cin.get(c,250);
    int ns=strlen(s), nt=strlen(t), nc=strlen(c);

    if (ns>nt && nt>nc)
        cout<<c<<" <-> "<<t<<" <-> "<<s;
    else if(ns>nc && nt<nc)
        cout<<t<<" <-> "<<c<<" <-> "<<s;
    else if(nt>ns && ns>nc)
        cout<<t<<" <-> "<<s<<" <-> "<<t;
    else if(nt>nc && nc>ns)
        cout<<s<<" <-> "<<c<<" <-> "<<t;
    else if(nc>nt && nt>ns)
        cout<<s<<" <-> "<<t<<" <-> "<<c;
    else if(nc>ns && ns>nt)
        cout<<t<<" <-> "<<s<<" <-> "<<c;
}

void ex2_2() {
    cin.get(s,250);
    cin.get();
    cin.get(t,250);
    char aux;
    for(int i=0;i<3;i++){
        aux=s[i];
        s[i]=t[i];
        t[i]=aux;
    }
    cout<<s<<" <-> "<<t;
}

void ex2_3() {
    cin.get(s,250);
    cin.get();
    cin.get(t,250);
    int x;
    x=strlen(d);
    for(int i=0;i<strlen(s)-1;i++){
        t[x]=s[i];
        x++;
        cout<<d<<endl;
    }
}

void ex2_4() {
    cin.get(s,250);
    cin.get();
    cin.get(t,250);
    cin.get();
    cin.get(c,250);
    for(int i=0;i<strlen(s);i++)
        for(int j=0;j<strlen(s);j++){
            if((int)s[i]<(int)s[j])
                swap(s[i], s[j]);
        }

    for(int i=0;i<strlen(t);i++)
        for(int j=0;j<strlen(t);j++){
            if((int)t[i]<(int)t[j])
                swap(t[i], t[j]);
        }

    for(int i=0;i<strlen(c);i++)
        for(int j=0;j<strlen(c);j++){
            if((int)c[i]<(int)c[j])
                swap(c[i], c[j]);
        }
    cout<<s<<endl<<t<<endl<<c;
}

void ex2_5() {
    int n;
    f>>n;
    while(f>>s){
        for(int i=0;i<strlen(s);i++)
            cout<<s[i];
        cout<<" ";
        for(int i=strlen(s)-1;i>=0;i--)
            cout<<s[i];
        cout<<endl;
    }
}

void ex2_6() {
    int n;
    f>>n;
    for(int nc=1;nc<=n;nc++){
        f>>s;
        char sr[250];
        strcpy(sr,s);
        reverse(sr, sr+strlen(sr));
        if(strcmp(s, sr)==0)
            cout<<s<<endl;
    }
}

void ex2_7() {
    char x;
    cin.get(s,250);
    cin.get();
    cin>>x;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==x)
            cout<<i<<" ";
    }
}

void ex2_8() {
    char x;
    cin.get(s,250);
    cin.get();
    cin>>x;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==x)
            strcpy(s+i, s+i+1);
    }
    cout<<s;
}

void ex2_9() {
    cin.get(s,250);
    cin.get();
    cin.get(t, 250);
    for(int i=0;i<strlen(s);i++)
        if(strstr(s, t)!=NULL)
            if(s[i]==t[0])
                cout<<i<<" ";
}

void ex2_10() {
    cin.get(s,250);
    cin.get();
    cin.get(t, 250);
    for(int i=0;i<strlen(s);i++)
        if(strstr(s, t)!=NULL)
            if(s[i]==t[0])
                strcpy(s+i, s+i+strlen(t));
    cout<<s;
}

void ex2_11() {
    cin.get(s,250);
    cin.get();
    cin.get(t, 250);
    cin.get();
    cin.get(c, 250);
    char *p = strstr(s, t);
    char aux[250];
    while(p){
        strcpy(p, p+strlen(t));
        strcpy(aux,p);
        strcpy(p,c);
        strcpy(p+strlen(c), aux);
        p=strstr(p+1, t);
    }
    cout<<s;
}

void ex2_12(){
    cin.get(s,250);
    for(int i=0;i<strlen(s);i++){
        if(s[i]==' ')
            strcpy(s+i, s+i+1);
        for(int j=0;j<strlen(s);j++){
            if((int)s[i]<(int)s[j])
                swap(s[i], s[j]);
        }
    }

    cout<<s;
}

void ex2_13(){
    cin.getline(s, 250);
    char *p = strtok(s, " .,");
    while(p!=NULL){
        for(int i=0;i<strlen(p);i++)
            cout<<p[i];
        cout<<" ";
        for(int i=strlen(p)-1;i>=0;i--)
            cout<<p[i];
        cout<<endl;

        p=strtok(NULL, " .,");
    }
}

void ex2_14(){
    cin.getline(s, 250);
    char aux[250];
    strcpy(aux, s);
    char *p = strtok(s, " .,");
    int nr=0;
    while(p!=NULL){
        char sr[250];
        strcpy(sr,p);
        reverse(sr, sr+strlen(sr));
        if(strcmp(p, sr)==0)
            if(strlen(p)>nr)
                nr=strlen(p);
        p=strtok(NULL, " .,");
    }

    char *a = strtok(aux, " .,");
    while(a!=NULL){
        char sr[250];
        strcpy(sr,a);
        reverse(sr, sr+strlen(sr));
        if(strcmp(a, sr)==0 && strlen(a)==nr)
            cout<<a;
        a=strtok(NULL, " .,");
    }

}

void ex2_15(){
    cin.get(s, 250);
    int nr=0;

    //a
    /*for(int i=0;i<strlen(s);i++)
        if(strchr(cons, s[i])){
            nr=1;
            break;
        }
    if(nr==0){
        cout<<"Sirul e format exclusiv din caractere numerice";
    }*/

    //b
    /*for(int i=0;i<strlen(s);i++)
        if(strchr(num, s[i])){
            nr=1;
            break;
        }
    if(nr==0){
        cout<<"Sirul e format exclusiv din caractere non-numerice";
    }*/

    //c
    /*for(int i=0;i<strlen(s);i++)
        if(strchr(cons, s[i])==0){
            nr++;
        }

    if(nr==strlen(s)){
        cout<<"Sirul e format doar din vocale";
    }*/

    //d
    for(int i=0;i<strlen(s);i++)
        if(strchr(voc, s[i])==0){
            nr++;
        }

    if(nr==strlen(s)){
        cout<<"Sirul e format doar din caractere care nu sunt vocale";
    }
}

void ex2_16(){
    cin.get(s, 250);
    cin.get();
    cin.get(t, 250);
    for(int i=0;i<=strlen(s);i++){
        if(strchr(t, s[i]))
            cout<<s[i];
    }
}
/*
void ex2_17(){
    cin.get(s, 250);
    for(int i=0;i<=strlen(s);i++){
        if(strchr(num, s[i])){
            cout<<s[i];
        }
    }
}*/

void ex2_18(){
    int n;
    f>>n;
    for(int i=1;i<=n;i++){
        f>>s;
        strcat(t,s);
    }
    cout<<t;
}

void ex2_19(){
    cin.getline(s,250);
    if((s[0]==' ' && s[1]!=' ') && (s[strlen(s)-1]==' ' && s[strlen(s)-2]!=' ')){
        strcpy(s, s+1);
        s[strlen(s)-1]='\0';
    }
    cout<<s;
}

void ex2_20(){
    cin.getline(s,250);
    char *p = strtok(s, " ");
    int nr=0;
    while(p!=NULL){
        if(p[0]==p[strlen(p)-1])
            nr++;
        for(int i=0;i<strlen(p);i++)
        for(int j=0;j<strlen(p);j++){
            if((int)s[i]<(int)p[j])
                swap(p[i], p[j]);
        }
        cout<<p<<endl;
        p = strtok(NULL, " ");
    }
    cout<<nr<<" incep si se termina cu aceeasi litera";
}

void ex2_21(){
    int nr1=0;
    cin.getline(s, 250);
    for(int i=0;i<=strlen(s);i++)
        if(s[i]==' ')
            nr1++;
    char *p = strtok(s, " ,");
    int nr2=0;
    while(p!=NULL){
        nr2++;
        for(int i=0;i<strlen(p);i++){
            if(65<=(int)p[i] && (int)p[i]<=90)
                p[i]=p[i]+32;
        }
        p[0]-=32;
        cout<<p<<endl;
        p = strtok(NULL, " ,");
    }
    cout<<nr1<<" spatii si "<<nr2<<" cuvinte";
}

/*
void insertt(char chr, char str[], int poz, int &stll){
    int stl=strlen(str);
    for(int i=stl-1;i>=poz;i--)
        str[i+1]=str[i];
    stl++;
    str[poz]=chr;
    stll=stl;
}
void ex2_22(){
    cin.get(s,250);
    int n = strlen(s),stll;
    for(int i=0;i<n;i++)
        if(strchr(voc, s[i]))
            insertt(s[i], s, i+1,stll);
    for(int i=0;i<stll;i++)
        cout<<s[i];
}*/

void ex2_23(){
    cin.get(s,250);
    char sr[250];
    strcpy(sr,s);
    reverse(sr, sr+strlen(sr));
    if(strcmp(s, sr)==0)
        cout<<"DAAAA"<<endl;
    else
        cout<<"NUUUUUU";
}

void ex2_24(){
    cin.get(s,250);
    for(int i=0;i<strlen(s);i++){
        if(97<=(int)s[i] && (int)s[i]<=122)
            s[i]=s[i]-32;
    }
    cout<<s;
}

void ex2_25(){
    cin.get(s,250);
    for(int i=0;i<strlen(s);i++){
        if(65<=(int)s[i] && (int)s[i]<=90)
            s[i]=s[i]+32;
    }
    cout<<s;
}

void ex2_26(){
    cin.get(s,250);
    char c = 'a';
    int nr=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==c)
            nr++;
    }
    cout<<nr;
}

void ex2_27(){
    cin.get(s,250);
    for(int i=1;i<strlen(s);i++){
        cout<<s+i<<endl;
    }
    char rev[250];
    strcpy(rev, s);
    reverse(rev, rev+strlen(rev));
    for(int i=1;i<strlen(rev);i++){
        char pr[strlen(rev)];
        strcpy(pr, rev+i);
        reverse(pr, pr+strlen(pr));
        cout<<pr<<endl;
    }
}

void ex2_28(){
    cin.get(s,250);
    char c = 'a';
    int nr=0,p;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==c || s[i]==s[p]-32){
            nr++;
            p=i;
        }
    }
    cout<<nr;
}

void ex2_29(){
    cin.get(s,250);
    int nr=0,ok=0;
    char *p = strtok(s, " .");
    while(p!=NULL){
        nr++;
        for(int i=0;i<strlen(p);i++)
            if('1'>=p[i] && p[i]<='9'){
                ok=1;
                break;
            }
        p = strtok(NULL, " ,");
    }
    cout<<nr<<" "<<ok;
}

void ex2_30()
{
    cin.get(s,250);
    cin.get();
    cin.get(t,250);
    char *p = strtok(s, " ");
    int nr=0;
    while(p!=NULL)
    {
        if(strcmp(t, p)==0)
            nr++;
        p=strtok(NULL, " ");
    }
    cout<<nr;

}

void ex2_31()
{
    cin.get(s,250);
    for(int i=0; i<strlen(s); i++)
    {
        s[i]=s[i]+2;
    }
    cout<<s;

}

void ex2_32()
{
    int n=0;
    while(f>>x)
    {
        n++;
        strcpy(s1[n],x);
    }
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(strcmp(s1[i],s1[j])>0)
            {
                char aux[100];
                strcpy(aux,s1[i]);
                strcpy(s1[i],s1[j]);
                strcpy(s1[j],aux);
            }
    for(int i=1; i<=n; i++)
        cout<<s1[i]<<endl;

}

void ex2_33()
{
    cin.get(s,250);
    /*int x=2;
    strcpy(t , s + x);
    strcpy(s + x + 1 , t);
    s[x] = 'A';*/
    for(int i=0; i<strlen(s); i++)
    {
        if(strchr(voc, s[i])!=NULL)
        {
             strcpy(t, s + i);
            strcpy(s + i + 1, t);
            s[i] = 'p';
        }
    }
    cout<<s;
}

void ex2_34()
{
    cin.get(s,250);
    char *p =strtok(s, " ");
    while(p!=NULL)
    {
        if(p[strlen(p)-1]==p[strlen(p)-2])
            cout<<p[strlen(p)-1]<<p[strlen(p)-2]<<endl;
        p=strtok(NULL, " ");
    }

}

void ex2_35(){
    cin.getline(s,250);
    strcpy(t, s);
    char *p = strtok(s, " ");
    int nr=0;
    while(p!=NULL){
        if(strlen(p)>nr)
            nr = strlen(p);
        p = strtok(NULL, " ");
    }

    char *r = strtok(t, " ");
    while(r!=NULL){
        if(strlen(r)==nr)
            cout<<r<<endl;
        r = strtok(NULL, " ");
    }
}

void ex2_36(){
    cin.get(s,250);
    cin.get();
    cin.get(t, 250);
    int nr=0;
    for(int j=0;j<strlen(t);j++) {
        if(strchr(s, t[j])!=NULL)
            nr++;
    }
    if(nr==strlen(t))
        cout<<"Da";
}

int main()
{
  ex16();
  return 0;
}

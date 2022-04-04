#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char s[100], t[100];

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

int main()
{
  ex16();
  return 0;
}

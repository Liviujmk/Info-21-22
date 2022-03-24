I.1. c
  2. a
  3. c
  4. d
  5. b

II.1.a.
     b.
     
III.1
  #include <iostream>
  using namespace std;
  int n,d,p;
  int main()
  {
    cout<<"Introduceti numarul n: ";
    cin>>n;
    d=2;
    while(n>1)
    {
            p=0;
            while(n%d==0)
            {
                p++;
                n=n/d;
            }
            if(p==1){
                cout<<d<<"^"<<p<<" ";
                break;
            }
            d=d+1;
    }
    return 0;
    }

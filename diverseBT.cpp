/*Permutari
#include<iostream>
using namespace std;
int st[10],n;

void init(int k)
{
    st[k]=0;
}

int succesor(int k)
{
    if(st[k]<n)
        {st[k]++;
        return 1;}
    return 0;
}

int valid(int k)
{
    for(int i=1;i<k;i++)
            if(st[i]==st[k])return 0;
    return 1;
}
int solutie(int k)
{
    return k==n;
}
void tipar()
{
    for(int i=1;i<=n;i++)
        cout<<st[i]<<" ";
    cout<<endl;
}
void bt(int k)
{
    init(k);
    while(succesor(k))
        if(valid(k))
         if(solutie(k))tipar();
         else bt(k+1);

}

int main()
{cin>>n;
 bt(1);
    return 0;
}
Dame
#include <iostream>
#include <cmath>
using namespace std;

int st[10],n;

void init(int k)
{
    st[k]=0;
}

int succesor(int k)
{
    if(st[k]<n)
        {st[k]++;
        return 1;}
    return 0;
}

int valid(int k)
{
    for(int i=1;i<k;i++)
            {if(st[i]==st[k])return 0;
            if(abs(i-k)==abs(st[i]-st[k]))return 0;}
    return 1;
}
int solutie(int k)
{ if(k==n)
    return 1;
    else
        return 0;
}
void tipar()
{
    for(int i=1;i<=n;i++)
      {
      for(int j=1;j<=n;j++)
        if(j==st[i])
          cout<<"*";
        else
          cout<<"-";
        cout<<endl;
        }
    cout<<endl;
}
void bt(int k)
{
    init(k);
    while(succesor(k))
        if(valid(k))
         if(solutie(k))tipar();
         else bt(k+1);

}

int main()
{cin>>n;
 bt(1);
    return 0;
}
ture
#include<iostream>
using namespace std;
int st[10],n;

void init(int k)
{
    st[k]=0;
}

int succesor(int k)
{
    if(st[k]<n)
        {st[k]++;
        return 1;}
    return 0;
}

int valid(int k)
{
    for(int i=1;i<k;i++)
            if(st[i]==st[k])return 0;
    return 1;
}
int solutie(int k)
{
    return k==n;
}
void tipar()
{
    for(int i=1;i<=n;i++)
      {
      for(int j=1;j<=n;j++)
        if(j==st[i])
          cout<<"*";
        else
          cout<<"-";
        cout<<endl;
        }
    cout<<endl;
}
void bt(int k)
{
    init(k);
    while(succesor(k))
        if(valid(k))
         if(solutie(k))tipar();
         else bt(k+1);

}

int main()
{cin>>n;
 bt(1);
    return 0;
}
Nebuni
#include <cmath>
using namespace std;
int st[10],n;

void init(int k)
{
    st[k]=0;
}

int succesor(int k)
{
    if(st[k]<n)
        {st[k]++;
        return 1;}
    return 0;
}

int valid(int k)
{
  for(int i = 1 ; i < k; i ++)
        if(k-i== abs(st[k] - st[i]))
        {
            return 0;
        }
    return 1;
}
int solutie(int k)
{
    return k==n;
}
void tipar()
{
    for(int i=1;i<=n;i++)
      {
      for(int j=1;j<=n;j++)
        if(j==st[i])
          cout<<"*";
        else
          cout<<"-";
        cout<<endl;
        }
    cout<<endl;
}
void bt(int k)
{
    init(k);
    while(succesor(k))
        if(valid(k))
         if(solutie(k))tipar();
         else bt(k+1);

}

int main()
{cin>>n;
 bt(1);
    return 0;
}
regi
#include<iostream>
using namespace std;
int st[10],n;

void init(int k)
{
    st[k]=0;
}

int succesor(int k)
{
    if(st[k]<n)
        {st[k]++;
        return 1;}
    return 0;
}

int valid(int k)
{
    for(int i=1;i<k;i++)
            if(st[i]==st[k])return 0;
    return 1;
}
int solutie(int k)
{
    return k==n;
}
void tipar()
{
    for(int i=1;i<=n;i++)
      {
      for(int j=1;j<=n;j++)
        if(j==st[i])
          cout<<"*";
        else
          cout<<"-";
        cout<<endl;
        }
    cout<<endl;
}
void bt(int k)
{
    init(k);
    while(succesor(k))
        if(valid(k))
         if(solutie(k))tipar();
         else bt(k+1);

}

int main()
{cin>>n;
 bt(1);
    return 0;
  }
Pioni
#include <iostream>


using namespace std;

int st[10],n;

void init(int k)
{
    st[k]=0;
}

int succesor(int k)
{
    if(st[k]<n)
        {st[k]++;
        return 1;}
    return 0;
}

int valid(int k)
{
    if(k > 1){
      if(abs(st[k-1]-st[k]) == 1 )
        return 0;
      }
    return 1;
}

int solutie(int k)
{
    return k==n;
}

void tipar()
{
    for(int i=1;i<=n;i++){
        for(int j = 1; j <= n;j++){
          if(j == st[i])
            cout<<'*';
          else
            cout<<'-';
        cout<<' ';
        }
        cout<<'\n';
      }
    cout<<endl;
}
void bt(int k)
{
    init(k);
    while(succesor(k))
        if(valid(k))
         if(solutie(k))
           tipar();
         else
           bt(k+1);

}

int main()
{cin>>n;
 bt(1);
    return 0;
}
Tarile
 #include <iostream>
#include <fstream>
using namespace std;
ifstream f("harti.in");
ofstream out("harti.out");
int st[10],n,m;
int a[10][10];
char v1[20][20];
void init(int k)
{
    st[k]=0;
}

int succesor(int k)
{
    if(st[k]<m)
        {st[k]++;
        return 1;}
    return 0;
}

int valid(int k)
{
    for(int i=1;i<k;i++)
        if(st[i]==st[k] && a[i][k]==1)return 0;
    return 1;
}
int solutie(int k)
{
    return k==n;
}
void tipar()
{
    for(int i=1;i<=n;i++)
        out<<v1[st[i]]<<" ";
    out<<'\n';
}
void bt(int k)
{
    init(k);
    while(succesor(k))
        if(valid(k))
         if(solutie(k))tipar();
         else bt(k+1);

}

int main()
{f>>n; int i,j;
  f>>m;
  for( i=1;i<=m;i++)
    f>>v1[i];
    for(i=1;i<=m;i++)
      cout<<v1[i]<<" ";
  cout<<endl;
  while(f>>i>>j)
    a[j][i]=a[i][j]=1;
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
      cout<<endl;
    }
        bt(1);
    return 0;
}
In harti.in trb sa scrii:
6
4
alb verde galben rosu
1 2
1 3
1 4
1 5
1 6
2 3
2 5
2 6
3 4
3 5
4 5
5 6
Saritura calului
#include <iostream>
#include <stdlib.h>
using namespace std;
const int x[8]={-1,1,2,2,1,-1,-2,-2};
const int y[8]={2,2,1,-1,-2,-2,-1,1};
int n,sol[1000][2],t[25][25];
void back(int k,int lin, int col)
{
  int linie,coloana,i;
  if(k==n*n)
  {
    for(i=1;i<=n;i++)
      {
        for(int j=1;j<=n;j++)
          cout<<t[i][j]<<" ";
          cout<<endl;

      }
    cout<<endl;
  }
  else
  {
    sol[k][0]=lin;
    sol[k][1]=col;
    for(i=0;i<7;i++)
      {
        linie=lin+x[i];
        coloana=col+y[i];
        if(linie<=n && linie>=1 && coloana<=n && coloana>=1 && t[linie][coloana]==0)
        {
          t[linie][coloana]=k;
          back(k+1,linie,coloana);
          t[linie][coloana]=0;
        }
      }
  }
}
int main()
{
  cout<<"n=";
  cin>>n;
  back(1,1,1);
  return 0;
}
 Aranjamente
#include <iostream>
using namespace std;

int st[10],n,p;

void init(int k)
{
    st[k]=0;
}

int succesor(int k)
{
    if(st[k]<n)
        {st[k]++;
        return 1;}
    return 0;
}

int valid(int k)
{
    for(int i=1;i<k;i++)
        if(st[i]==st[k])return 0;
    return 1;
}
int solutie(int k)
{
    return k==p;
}
void tipar()
{
    for(int i=1;i<=p;i++)
        cout<<st[i]<<" ";
    cout<<endl;
}
void bt(int k)
{
    init(k);
    while(succesor(k))
        if(valid(k))
         if(solutie(k))tipar();
         else bt(k+1);

}

int main()
{cin>>n>>p;
 bt(1);
    return 0;
}
Combinari
#include <iostream>
using namespace std;
int st[10],n,p;

void init(int k)
{
  if(k>1)st[k]=st[k-1];
  else
    st[k]=0;
}

int succesor(int k)
{
    if(st[k]<n-p+k)
        {st[k]++;
        return 1;}
    return 0;
}

int valid(int k)
{
    for(int i=1;i<k;i++)
        if(st[i]==st[k])return 0;
    return 1;
}
int solutie(int k)
{
    return k==p;
}
void tipar()
{
  cout<<"(";
    for(int i=1;i<p;i++)
        cout<<st[i]<<",";
cout<<st[p]<<")";
    cout<<endl;
}
void bt(int k)
{
    init(k);
    while(succesor(k))
        if(valid(k))
         if(solutie(k))tipar();
         else bt(k+1);

}

int main()
{cin>>n>>p;
 bt(1);
    return 0;
}*/
soarece
 #include <iostream>
#include <fstream>
using namespace std;
ifstream f("soarece.in");
ofstream g("soarece.out");
int n,m,is,js,ib,jb,a[11][11],t;
const int x[]={0,0,1,-1};
const int y[]={1,-1,0,0};

void back(int i,int j,int k)
{
  for(int d=0;d<4;d++)
    {
      int in=i+x[d];
      int jn=j+y[d];
      if(in>=1 && in<=n && jn>=1 && jn <= m)
      if(a[in][jn]==0)
      {
        a[in][jn]=k;
        if(in==ib && jn==jb) t++;
        else back(in,jn,k+1);
        a[in][jn]=0;
      }
      }
}
int main() {
  f>>n>>m;
  for(int i=1;i<=n;++i)
    for(int j=1;j<=m;j++)
      f>>a[i][j],a[i][j]=-a[i][j];
  f>>is>>js>>ib>>jb;
  a[is][js]=1;
  back(is, js, 2);
  g<<t;
  return 0;
}

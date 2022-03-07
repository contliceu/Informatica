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

#include<bits/stdc++.h>
using namespace std;
#define ll long long
bitset<10000000>bs;
vector<int>p;
void sieve(ll upper){
    bs.set();
    bs[0]=bs[1]=0;
    p.push_back(2);
    for(ll i=3; i<=upper+1; i+=2)
    {
        if(bs[i]){
            for(long long int j=i*i; j<=upper+1; j+=i)
                bs[j]=0;
            p.push_back((int)i);
        }
    }
}
int main()
{

    sieve(2000000);
  //  cout<<"s="<<p.size()<<endl;
    int T;
    cin>>T;
    while(T--)
    {
        long long int n;
        cin>>n;
        cout<<p[n-1]<<endl;
    }

}

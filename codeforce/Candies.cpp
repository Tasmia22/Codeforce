#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,p;
        cin>>n;
        int i=2;
        p=pow(2,i)-1;
        while(n%p!=0){
                i++;
            p=pow(2,i)-1;
        }
        cout<<n/p<<endl;
    }
}

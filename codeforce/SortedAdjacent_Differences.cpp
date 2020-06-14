#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        vector<int>newa;
        int i=0,j=n-1;
        while(i<j && j>=0){
            newa.push_back(a[j]);
            newa.push_back(a[i]);
            i++;
            j--;
        }
        if(n%2!=0){
            newa.push_back(a[i]);
        }
        int k=newa.size()-1;
while(k>=0){
    cout<<newa[k]<<" ";
    k--;
}
        cout<<endl;
    }
    return 0;

}

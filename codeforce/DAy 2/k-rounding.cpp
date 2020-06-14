    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long int n,k,d;
        cin>>n>>k;
        d=pow(10,k);
        for(int i=1;;i++)
        {
            if((n*i)%d==0)
            {
                cout<<n*i<<endl;
                break;
            }
        }
        return 0;
    }

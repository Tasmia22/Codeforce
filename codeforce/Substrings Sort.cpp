    #include<bits/stdc++.h>
    using namespace std;
    vector< pair<long long, string> > v;
    int main()
    {
        int n;
        cin>>n;
        string S;
        for(int i=1; i<=n; i++)
        {
            cin>>S;
            int len=S.length();
            v.push_back(make_pair(len,S));
        }
        sort(v.begin(),v.end());

        int cnt=0;
        for (int i=1; i<n; i++)
        {
            int lop_len=(v[i].first-v[i-1].first);
            int flag=0;
            string prev_s=v[i-1].second;
         //   cout<<i-1<<"  "<<v[i-1].second<<endl;
            for(int j=0; j<=lop_len ; j++)
            {
                string r=v[i].second.substr(j,v[i-1].first);
               // cout<<r<<"  ";
                if(prev_s==r)
                    {flag=1;
                    break;}
            }
            if(flag)
                cnt++;
        }

        if(cnt==(n-1))
        {
            cout<<"YES"<<endl;
            for (int i=0; i<n; i++)
            {
                cout<< v[i].second << endl;
            }
        }
        else
            cout<<"NO"<<endl;
    }

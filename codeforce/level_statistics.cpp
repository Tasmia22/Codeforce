#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int y=n*2;
        int arr[y+1];
        arr[0]=-1;
        arr[1]=-1;
        int flag=0;
        for(int i=2; i<=y; i+=2)
        {
            cin>>arr[i]>>arr[i+1];
            if(arr[i]<arr[i+1] || arr[i]<=arr[i-1] ||  arr[i]<arr[i-2])
            {
                flag=1;
                //cout<<" "<<arr[i]<<" "<<arr[i+1]<<endl;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}

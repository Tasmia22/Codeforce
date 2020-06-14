    #include <iostream>
    using namespace std;
    int main() {
    	int n;
    	cin>>n;
    	if(n>0){
    	    cout<<n;
    	}
    	else{
    	   int a = n%10;
    	   n=n/10;
    	   int b = n%10;
    	 //  cout<<"n"<<n<<"   a="<<a<<"   b="<<b<<endl;
    	   if(a>b)
            cout<<n-b+a;
           else
            cout<<n;
    	}
    	return 0;
    }

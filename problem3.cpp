#include<bits/stdc++.h>
using namespace std;
int main() 
{
    
    int t;
    cin>>t;
    
    while(t != 0)
    {
        
        long long n;
        
        cin>>n;
        
        long long div = 2LL;
        cout<<div<<endl;
        while(div<=floor(sqrt(n))){
            if(n%div==0LL){
                n  /= div;
            }
            else
            {
                div++;
            }
        }
        
        cout<<n<<endl;
        
        t--;
    }
    
    return 0;
}
//fundamental Any integer greater than 1 is either a prime number, or can be written as a unique product of prime numbers (ignoring the order).





   

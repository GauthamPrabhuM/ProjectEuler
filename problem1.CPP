 #include<iostream>
 using namespace std;
long sum=0;
 long a;

 int main()
 {

    long t;
     cin>>t;
     for(int i=0; i<t; i++)
     {
         cin>>a;
         for(long j=a-1; j>0; j--)
         {

             if(j%3==0 || j%5==0)
             {
                  sum+=j;
                
             } 
             if(j%15==0)
            {
              sum-=j;
            
            } 
         }
         cout<<sum<<endl;


     }
     return 0;
 }

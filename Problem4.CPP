#include <iostream>
using namespace std ;
bool ispallin(int n)
{
int  reverse = 0, temp;
temp = n;

 while (temp != 0)
 {
  reverse = reverse * 10;
  reverse = reverse + temp%10;
  temp    = temp/10;
  }

  if (n == reverse)
  return true;
  else
  return false;


}
 int main() {
int a[999*999]={0},i,j,no;//0 implies no. at i th position is pallindrome
for(i=100;i<1000;i++)
{
for(j=100;j<1000;j++)
{
    if(a[i*j]==0)//no. is pallin
    {
         if(ispallin(i*j))
         no=i*j;

        else a[i*j]=1;//no. at this pos is not pallindrome
}
 }

}
cout<<no;
return 0;
}

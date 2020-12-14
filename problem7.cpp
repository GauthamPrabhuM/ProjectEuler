#include<iostream.h>
#include<conio.h>
bool isPrime(int numm) {
    if (numm <= 1) {
        return false;
    }
 
    if(numm == 2){
        return true;
    }
 
    if (numm % 2 == 0) {
        return false;
    }
 
    int counter = 3;
 
    while ((counter * counter) <= numm) {
        if (numm % counter == 0) {
            return false;
        } else {
            counter +=2;
        }
    }
 
    return true;
}
void main()
{
int upperLimit = 10001;
int counter = 1;
bool isPrime;
int j;
List primes = new List();
 
primes.Add(2);
 
while(primes.Count < upperLimit){
    counter += 2;
    j = 0;
    isPrime = true;
    while (primes[j]*primes[j] <= counter) {
        if (counter % primes[j] == 0) {
            isPrime = false;
            break;
        }
        j++;
    }
    if (isPrime) {
        primes.Add(counter);
    }
}
cout<<counter;
}

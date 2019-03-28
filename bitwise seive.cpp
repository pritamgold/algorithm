#include<bits/stdc++.h>
using namespace std;
int prime[1000/64];

bool ifnotPrime(int prime[], int x)
{
    int slot= prime[x/64];
    int position = ((x>>1) & 31); // by dividing 2 & get mod with 32
    int mask = 1 << position;
    return slot & mask;
}
void makeComposite(int prime[], int x)
{
    int slot = prime[x/64];
    int position = (x>>1) & 31;
    int mask = 1 << position;
    prime[x/64] = slot | mask;
}
void bitWiseSieve(int n)
{
    //int prime[n/64];
    memset(prime,0,sizeof(prime));   // '0' means prime
    for(int i=3; i*i<=n; i+=2){
        if(!ifnotPrime(prime,i)){
            for(int j=i*i; j<=n; j+=i){
                makeComposite(prime,j);
            }
        }
    }
}
int main()
{
    bitWiseSieve(1000);
    int N;
    while(cin>> N){
        for(int i=3; i<=N; i+=2){
            if(!ifnotPrime(prime,i)) cout<< i << endl;
        }
    }


    return 0;
}

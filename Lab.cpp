#include <iostream>
#include <chrono>
using namespace std;

bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }
    for(int i = 2; i<= num-1; i++)
    {
        if (num%i==0)
        {
            return false;
        }
    }
    return true;
}

void test(int n)
{

    for(int i = 3; i<=n; i++)
    {
        if(isPrime(i)== true)
        {
            cout<<i<<'\t';
        }
    }
    cout<<endl;
}


void sieve(int number)
{
int i,j;
    int primes[number+1];


    for(i = 2; i<=number; i++)
        primes[i] = i;

        i = 2;
    while ((i*i) <= number)
    {
        if (primes[i] != 0)
        {
            for( j=2; j<number; j++)
            {
                if (primes[i]*j > number)
                    break;
                else

                    primes[primes[i]*j]=0;
            }
        }
        i++;
    }

    for(i = 2; i<=number; i++)
    {

        if (primes[i]!=0)
            printf("%d\t",primes[i]);
    }


}


int main()
{
 //   auto start = high_resolution_clock::now

     test(10000);
//  sieve(10000);

//auto stop= high_resolution_clock::now()
//auto duration = duration_cast<microsecond>(stop - start);
//cout<<duration.count();

    return 0;
}

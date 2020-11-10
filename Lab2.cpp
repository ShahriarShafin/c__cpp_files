#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    int coins[10]= {10,2,5,1000,500,100,200,50,20,1};
    int s = sizeof(coins)/sizeof(int);  //sizeof(int) or 4
    sort(coins,coins+s);

    // sorted as 1,2,5,20,50,100,200,500,1000

    int taka = 9999;
    for(int  i=s-1; i>=0; i--)
    {
        int note = coins[i];
        while(taka >= note)
        {
            taka -= note;
            cout<<note<<" ";
        }
    }
    return 0;
}




v/w= value per weight ;
tv = 250
pc = 400
ac = 300

pc >ac>tv
 pc ok ac not tv ok


 input as yours666


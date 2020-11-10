#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

struct Item
{
    int value, weight;

};

bool compare(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

void fractionalKnapsack(int W, struct Item arr[], int n)
{

    sort(arr, arr + n, compare;


    int curWeight = 0;
    double finalvalue = 0.0;


    for (int i = 0; i < n; i++)
    {

        if (curWeight + arr[i].weight <= W)
        {

            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
            cout<<"Item "<<i+1<<": "<<arr[i].weight<<endl;
        }


        else
        {
            double remain = W - curWeight;
            finalvalue += arr[i].value * ((double) remain / arr[i].weight);
            cout<<"Item "<<i+1<<": "<<remain<<endl;
            break;
        }
    }


    cout << "Total value gained: "
         << finalvalue;
}


int main()
{
    int capacity,numberOfiItems;
    cout<<"Number Of Items:";
    cin>>numberOfiItems;
    Item arr[numberOfiItems];
    for(int i = 0; i < numberOfiItems; i++)
    {
        cout<<"Weight of Item "<<i+1<<": ";
        cin>>arr[i].weight;
        cout<<"Value of Item "<<i+1<<": ";
        cin>>arr[i].value;
    }
    cout<<"Maximum,capacity: ";
    cin>>capacity;

    int n = sizeof(arr) / sizeof(arr[0]);
    fractionalKnapsack(capacity, arr, numberOfiItems);
    return 0;
}

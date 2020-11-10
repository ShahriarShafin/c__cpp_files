


#include <bits/stdc++.h>


using namespace std;


struct Item

{

    int value, weight,number;

};


bool compare_vw(struct Item p, struct Item q)

{

   double d1 = p.value / p.weight;

    double d2 = q.value / q.weight;

    return d1 > d2;

}


double fractionalKnapsack(int m, struct Item arr[], int n)

{

    sort(arr, arr + n, compare_vw);


    int curWeight = 0;


    double curvalue = 0.0;

    int Weight = m;


    for (int i = 0; i < n; i++)

    {

        if (curWeight + arr[i].weight <= m)


        {

            curWeight += arr[i].weight;

            Weight -=arr[i].weight;

            printf("Item %d :%d kg\n",arr[i].number,arr[i].weight);


            curvalue += arr[i].value;


        }


      else

        {

            double remain = m - curWeight;

            printf("Item %d :%d kg\n",arr[i].number,Weight);

            Weight = 0;

            curvalue += arr[i].value * ( remain / arr[i].weight);

        }


        if(Weight==0)break;

    }

    return curvalue;

}

int main()

{

    int m;

    int n ;


    cout<<"Number of items: ";

    cin>>n;

    cout<<" "<<endl;


    Item arr[n];


    for(int j=0;j<n;j++)

    {

        cout<<"Weight of item "<< j+1<< " : ";

        cin>>arr[j].weight;

        cout<<"value of item "<< j+1<<" : ";

        cin>>arr[j].value;


        arr[j].number =j+1;

    }


    cout<<"Maximum, capacity: ";

    cin>>m;

    cout<<" "<<endl;

    cout << "Total value gained: "<< fractionalKnapsack(m, arr, n);

    return 0;

}




#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0, x;

    cout << "Enter the Starting Number : ";
    cin >> x;

    int i = x;
    while(i < x+10){
        sum+=i;
        i++;
    }
    cout << sum;
    return 0;
}
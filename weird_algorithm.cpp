#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {

    ll n;

    cin >> n;

    cout << n << " ";

    while(n > 1) {

          if(n%2) {
            n = n*3+1;
            cout << n << " ";
          }
          else {
            n=n/2;
            cout << n << " ";
          }

    } 

    return 0;
}


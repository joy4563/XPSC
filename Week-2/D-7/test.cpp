#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int test;
    cin >> test;
   while(test>0){
       cout << test % 10<<endl;
       test /= 10;
   }

    return 0;
}
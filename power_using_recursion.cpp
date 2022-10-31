#include<bits/stdc++.h>
using namespace std;

int pow(int x, int n){
    if(n==0)
    return 1;
    
    int ans = x* pow(x, n-1);
    return ans;
}

int main(){
   int ans= pow(2,10);
   cout<<ans;
   return 0;
}
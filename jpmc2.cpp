#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> solution(vector<int> A){
    vector<pair<int, int>> ans;
    sort(A.begin(), A.end());
    int mins = INT_MAX;
    int curMIN=0;
    for(int i =0; i<A.size()-1 ; i++){
        curMIN = abs(A[i+1]-A[i]);
        mins = min(curMIN, mins);
    }
    for(int i =1; i<A.size()-1;i++)
    {
        if(mins == abs(A[i+1]-A[i]))
        ans.push_back({A[i], A[i+1]});
    }
    return ans;
}

int main(){
vector<pair<int, int>> ans1;
vector<int> A = {-4, 2, 4, -1, 3};
ans1 = solution(A);
for(int i =0; i<ans1.size(); i++)
cout<<ans1[i].first<<"  "<<ans1[i].second<<endl;
}
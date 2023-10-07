#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
map<string,int>mpp;
mpp.emplace("raj",21);
mpp.emplace("aman",21);
mpp.emplace("hemant",21);
mpp.emplace("utkarsh",21);
mpp.emplace("raj",29);
mpp.erase("raj");
for(auto it:mpp){
    cout<<it.first<<" "<<it.second<<" ";
    cout<<endl;
}
cout<<mpp.count("raj");
return 0;
set<int>st;
st.count
}
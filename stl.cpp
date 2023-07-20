#include<bits/stdc++.h>
using namespace std;

bool vis[10000+7];
vector<int> graph[4+1];

int main(){
    int E; cin>>E;

    while(E--){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);  //undirected
    }

    for(auto V : graph){
        for(auto e : V){
            cout<<e<<" ";
        }
        cout<<endl;
    }
}
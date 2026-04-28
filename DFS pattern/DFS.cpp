#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> graph[N];
bool visited[N];


void dfs(int vertex){

    // take action on the vertex after entering the vertex  
    visited[vertex] = true;
    cout << vertex << " ";

    for(int child : graph[vertex]){
          // take action on chlid before entering the child node    
        if(!visited[child]){
            dfs(child);
            // take action on child after exiting the child node
        }
        // take action on vertex before exiting the vertex
    }
     // take action on vertex after exiting the vertex
    }
int main(){
    int n, m;
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int v1, v2;
        cin >> v1 >> v2;

        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    dfs(1);

    return 0;
}
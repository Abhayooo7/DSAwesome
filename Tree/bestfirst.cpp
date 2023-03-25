#include<iostream>
#include<list>
#include<queue>

typedef std:: pair<int, int> pi;

using namespace std;

vector<vector<pi> > graph;

void addedge(int x, int y, int cost)
{
    graph[x].push_back(make_pair(cost, y));
    graph[y].push_back(make_pair(cost, x));
}

void best_first_search(int actual_Src, int target, int n){

    vector<bool> visited(n,0);

    priority_queue<pi, vector<pi>, greater<pi> > pq;

    pq.push(make_pair(0,actual_Src));

    int s = actual_Src;
    visited[s] = true;

    while(!pq.empty()){
        int x = pq.top().second;
        pq.pop();

        cout<<x<<" ";

        if(x==target){
            break;
        }

        for (int i = 0; i < graph[x].size(); i++) {
            if (!visited[graph[x][i].second]) {
                visited[graph[x][i].second] = true;
                pq.push(make_pair(graph[x][i].first,graph[x][i].second));
            }
        }
    }
}

int main(){

    
    int v = 14;
    graph.resize(v);


    addedge(0,1,3);
    addedge(0,2,6);
    addedge(0,1,1);
    addedge(1,7,5); 
    addedge(1,4,9);
    addedge(2,1,2);
    addedge(2,2,7);
    addedge(3,8,2);
    addedge(4,12,10);
    addedge(9,6,11);

    int source = 0;
    int target = 9;

    best_first_search(source, target, v);
    
    return 0;
}
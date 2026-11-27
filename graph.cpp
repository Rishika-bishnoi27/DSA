// ---------------Adjacency matrix-----------------
#include<iostream>
using namespace std;
 
int main(){
 
    vector<vector<int>> vec(4, vector<int> (4, 0));
 
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<vec[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
 
    // vec[0][1] = 1;
    // vec[1][2] = 1;
    // vec[2][3] = 1;
    // vec[0][3] = 1;
 
    // vector<vector<int>> vec = {
    //     {0, 1, 0, 1},
    //     {0, 0, 1, 0},
    //     {0, 0, 0, 1},
    //     {0, 0, 0, 0}
    // }
 
    cout<<"create graph"<<endl;
    for(int i=0; i<4; i++){
        int u, v, w;
 
        //Undirected matrix
        cin>>u>>v>>w;
        vec[u][v] = w;
        vec[v][u] = w;
 
        //Directed matrix
        cin>>u>>v>>w;
        vec[u][v] = w;
       
    }
 
    cout<<"\n Adjacency matrix \n";
    for(auto x: vec){
        for(int i=0; i<4; i++){
            cout<<x[i]<<"  ";
        }
        cout<<endl;
    }
 
    // int arr[0] = 1;
    // int arr[4] = {1, 2, 3, 4};
    //user input
 
 
    return 0;
}






// -------------------Adjacncy list-------------------
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int V;
    cout<<"Enter number of vertices: ";
    cin>>V;
 
    vector<vector<int>> vec(V);
 
    // vec[0].push_back(1);
    // vec[1].push_back(0);
    // vec[0].push_back(3);
    // vec[1].push_back(2);
    // vec[2].push_back(3);
 
    for(int i=0; i<V; i++){
        int u, v;
        cin>>u>>v;
        //Undirected Graph
        vec[u].push_back(v);
        vec[v].push_back(u);   //comment hoga agr directed graph bnana ho to
    }
 
    for(int i=0; i<4; i++){
        cout<<i<<": ";
        for(auto x: vec[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}






#include<bits/stdc++.h>
using namespace std;
 
class Edge{
    public:
        int u, v, w;
};
 
int main(){
 
    int V, E;
    cout<<"Enter number of vertices: ";
    cin>>V;
    cout<<"Enter number of Edges: ";
    cin>>E;
 
    // vector<Edge> edges = {
    //     {0, 1, 10},
    //     {1, 2, 7},
    //     {2, 3, 9},
    //     {3, 0, 12}
    // }
 
    vector<Edge> edges;
 
    for(int i=0; i<E; i++){
        Edge e;
        cin>>e.u>>e.v>>e.w;
        edges.push_back(e);
    }
 
    for(int i=0; i<E; i++){
        cout<<edges[i].u<<" "<<edges[i].v<<" "<<edges[i].w<<endl;
    }
 
}
 
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
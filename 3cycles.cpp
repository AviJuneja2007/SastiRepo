#include <iostream>
using namespace std;

int main() {
    // Write your code here
    int V, E;
  cin >> V >> E;

    int** graph = new int * [V];

    for(int i=0 ;i <V ;i++)
    {
        graph[i]=new int[V];
        for( int j=0 ;j<V ;j++)
            graph[i][j]=0; 
    }

    for(int i=0 ;i< E ;i++)
    {
        int x,y; 
        cin>>x>>y;
        graph[x][y]=1;
        graph[y][x]=1;
    }
    int n = V;
    int count=0;
    cout<<endl;
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            cout<<a<<" "<<b<<endl;
            if(graph[a][b]==1){
                for(int k=0;k<n;k++){
                    if(k == a || k==b){
                        continue;
                    }
                    if(graph[b][k]==1){
                        if(graph[a][k]==1){
                            count++;
                        }
                    }
                }
            }
        }
    }
    count = count/6;
    cout<<count;
    
}
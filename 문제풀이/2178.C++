#include <bits/stdc++.h>
using namespace std;

int n, m,ret ;
string str;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int a[104][104];
int visited[104][104];
queue<pair<int,int>> q ;

void bfs(int y, int x){
    visited[y][x] = 1;
    q.push({y,x});
    while(q.size()){
        y = q.front().first;
        x = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i ++){
            int ny = dy[i] + y;
            int nx = dx[i] + x;
            if(ny >= n || ny < 0 || nx >= m || nx < 0 || a[ny][nx] == 0) continue; 
            if(visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny,nx});
        }

    }

}


int main(){

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> str;
         for(int k = 0; k < m; k ++){
             a[i][k] = str[k] - '0';
         }
    
    }

    bfs(0,0);

    cout << visited[n-1][m-1];


    return 0;
}
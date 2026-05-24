#include <bits/stdc++.h>
using namespace std;

const int max_n = 33;
int N, M, H; 
int ladder[max_n][max_n];

bool check(int idx){
    int pos = idx;
    for(int i = 1; i <= H; i ++){
        if(ladder[i][pos] == 1){
            pos++;
        }else if(pos > 1 &&  ladder[i][pos - 1] ==  1){
            pos--;
        }
    }
    if(idx == pos){
        // i가 i 번재로 온거임
    }
}

int main(){

    cin >> N >> M >> H;
    
    for(int i = 0; i < M; i ++){
        int n , m;
        cin >> n >> m;
        ladder[n][m] = 1;
    }    

    for(int i  = 1; i <= N; i++){
        check(i);
    }


    return 0;
}
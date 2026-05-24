// //2026-03-25
// #include <bits/stdc++.h>
// using namespace std;


// int n,k, m, sum ;
// int ret = -100000;
// vector<int> v ;

// int main(){


//     cin >> n >> k ;

//     for(int i = 0; i < n; i ++){
//         cin >> m;
//         v.push_back(m);
//     }

//     for(int i = 0; i < n - k + 1; i++){
//         sum = 0;
//         for(int j = i; j < i + k; j ++){
//            sum += v[j];
//         }
//         ret = max(ret,sum);
//     }

//     cout << ret ;
//     return 0;
// } 시간초과남


// solve 2 누적합을 이용해서 문제풀기



#include <bits/stdc++.h>
using namespace std;

int n,k, m, sum ;
int ret = -100000;
vector<int> v ;
int prefix[1000000];

int main(){

    cin >> n >> k ;

    for(int i = 0; i < n; i ++){
        cin >> m;
        v.push_back(m);
    }

    prefix[0] = 0;
    for(int i = 0; i < n; i ++){
        prefix[i + 1] = v[i] + prefix[i];
    }

    for(int i = 0; i < n - k + 1; i ++){
        sum = prefix[i+k] - prefix[i];
        ret = max(ret,sum);
    }

    cout << ret ;
    return 0;
}


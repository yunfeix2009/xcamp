//
//  main.cpp
//  C202L3HW4
//
//  Created by Yunfei Xia on 10/12/24.
//

#include <iostream>
#include <queue>

using namespace std;

int n, idx, curr;
const int mx_n = 110;
int a[mx_n];
queue<int> q;
int timer = 0;

int main(int argc, const char * argv[]) {
    cin >> n >> idx;
    for (int i = 0; i<n; i++){
        cin >> curr;
        a[i] = curr;
        q.push(i);
    }
    while (a[idx] != 0){
        timer++;
        if (--a[q.front()] != 0){
            q.push(q.front());
        }
        q.pop();
        
        
    }
    cout << timer;
    return 0;
}

/*
 4 0
 4 1 1 1
 */

//7

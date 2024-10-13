//
//  main.cpp
//  C202L3HW1
//
//  Created by Yunfei Xia on 10/12/24.
//

#include <iostream>
#include <queue>

using namespace std;

int n, curr;
queue<int> q;

int main(int argc, const char * argv[]) {
    cin >> n;
    for (int i = 1; i<=n; i++) q.push(i);
    
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
        q.push(q.front());
        q.pop();
    }
    
    return 0;
}

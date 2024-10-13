//
//  main.cpp
//  C202L3Ex4
//
//  Created by Yunfei Xia on 10/12/24.
//

#include <iostream>
#include <queue>

using namespace std;

int n, k, curr;
int cnt = 0;
queue<int> q;

int main(int argc, const char * argv[]) {
    cin >> n >> k;
    for (int i = 1; i<=n; i++){
        q.push(i);
    }
    
    while(!q.empty()){
        cnt++;
        if (cnt == k){
            cout << q.front() << endl;
            q.pop();
            cnt = 0;
        }
        else{
            q.push(q.front());
            q.pop();
        }
    }
    return 0;
}

/*
 3 2
 1 2 3
 */

 /*
 2
 1
 3
 */

/*
 Regina's
 
 #include <iostream>
 #include <deque>
 #include <limits.h>

 using namespace std;

 int main()
 {
     int n, m;
     cin >> n >> m;
     deque<int> q;
     for (int i = 0; i < n; i++) {
         int a;
         cin >> a;
         q.push_back(a);
     }
     for (int i = 0; i < n-m+1; i++) {
         int ans = INT_MAX;
         for (int j = 0; j < m; j++) {
             ans = min(ans, q.at(i+j));
         }
         cout << ans << " ";
     }
 }
 */

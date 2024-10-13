//
//  main.cpp
//  C202L3Ex3
//
//  Created by Yunfei Xia on 10/12/24.
//


//use the q.size instead of current_killed
#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
int n, k;
int max_killed = 0;
int current_virus;
int current_sum = 0;

int main(int argc, const char * argv[]) {
    cin >> n >> k;
    for (int i = 0; i<n; i++){
        

        cin >> current_virus;
        q.push(current_virus);
        current_sum += current_virus;
        if(current_sum > k){
            max_killed = max(static_cast<int>(q.size())-1, max_killed);
            while (current_sum > k){
                current_sum -= q.front();
                q.pop();
            }
            
        }
        else max_killed = max(static_cast<int>(q.size()), max_killed);
        
    }
    cout << max_killed;
    return 0;
}


/*
 5 5
 3 2 1 2 3
 */

// 3



/*
 Regina's
 #include <iostream>
 #include <queue>

 using namespace std;

 int main()
 {
     int n, k;
     cin >> n >> k;
     queue<int> q;
     int temp[n];
     for (int i = 0; i < n; i++) {
         cin >> temp[i];
         q.push(temp[i]);
     }
     int ans = 0;
     int count = 0;
     int curr = 0;
     for (int i = 0; i < n; i++) {
         curr += temp[i];
         if (curr > k) {
             curr -= q.front();
             q.pop();
         }
         else {
             count++;
         }
         ans = max(ans, count);
     }
     cout << ans << endl;
 }
 */

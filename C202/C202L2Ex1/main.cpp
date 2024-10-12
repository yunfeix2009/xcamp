//
//  main.cpp
//  C202L2Ex1
//
//  Created by Yunfei Xia on 10/5/24.
//

#include <iostream>
#include <map>
using namespace std;
int n, target;
//const int mx_n = 10;
map<int, int> mp;

int main(int argc, const char * argv[]) {
    cin >> n >> target;
    int value;
    
    for (int i=0; i<n; i++){
        cin >> value;
        mp[value] = i;
    }

    for (const auto& x : mp){
        if (mp.find(target - x.first) != mp.end()) {
          if (x.second+1 == mp[target - x.first]+1) continue;
          }
            std::cout << (x.second+1) << " " << mp[target - x.first]+1;
            return 0;
        
    }
    cout << "IMPOSSIBLE";
    return 0;

}

/*
 4 8
 2 7 5 1
 */

// 4 2
 


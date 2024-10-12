//
//  main.cpp
//  C202L2HW2
//
//  Created by Yunfei Xia on 10/7/24.
//
/*
 
 string str
 set<string> st
 
 procedure
 while k<=n:
    for i in 0, i<=n-k
        set.insert(str.substr(i, k)
    if set.size == n-k+1:
        cout k
        return
    else
        clear set
 */

#include <iostream>
#include<set>

using namespace std;

string str;
set<string> st;
int n;

int main(int argc, const char * argv[]) {
    cin >> n;
    cin >> str;
    for (int k = 1; k<=n; k++){
        for (int i =0; i<=n-k; i++){
            st.insert(str.substr(i, k));
        }
        if (st.size() == n-k+1){
            cout << k;
            return 0;
        }
        st.clear();
    }
}

/*
 7
 ABCDABC
 */

//4

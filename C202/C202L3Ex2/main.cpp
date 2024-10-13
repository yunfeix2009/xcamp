//
//  main.cpp
//  C202L3Ex2
//
//  Created by Yunfei Xia on 10/12/24.
//

#include <iostream>
#include<queue>
using namespace std;

queue<int> q;

int main(int argc, const char * argv[]) {
    q.push(10086);
    q.pop();
    q.push(1);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(8);
    q.push(13);
    
    cout << "head is " <<  q.front() << endl;
    cout << "tail is " <<  q.back() << endl;
    cout << "size is " <<  q.size() << endl;
    if (q.empty()) cout << "what?! this is empty?!" << endl;
    else cout << "just kidding, it's not empty" << endl;
    return 0;
}

/*
 Regina
 #include <iostream>
 #include <queue>

 using namespace std;

 int gethead(queue<int> q) {
     return q.front();
 }

 int gettail(queue<int> q) {
     return q.back();
 }

 int length(queue<int> q) {
     return q.size();
 }

 bool isEmpty(queue<int> q) {
     return q.empty();
 }

 int main()
 {
     queue<int> q;
     q.push(1);
     q.push(2);
     q.push(3);
     while (!q.empty()) {
         cout << q.front() << " ";
         q.pop();
     }
     cout << endl;
 }
 */

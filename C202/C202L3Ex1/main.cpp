//
//  main.cpp
//  C202L3Ex1
//
//  Created by Yunfei Xia on 10/12/24.
//

#include <iostream>
using namespace std;
const int mx_n = 1000;
int q[mx_n];
int head = 0;
int tail = -1;


int return_head(){
    return q[head];
}
int return_tail(){
    return q[tail];
}

int return_length(){
    return (tail - head + 1);
}

bool check_empty(){
    return (head > tail);
}

void push(int x){
    q[++tail] = x;
    return; 
}

void pop(){
    head++;
    return;
}

int main(int argc, const char * argv[]) {
    if (check_empty()) cout << "empty now" << endl;
    else cout << "not empty!" << endl;
    push(9);
    cout << "now appending 9!" << endl;
    push(11);
    cout << "now appending 11!" << endl;
    pop();
    cout << head << " " << tail << endl;
    cout << "head is " << return_head() << endl;
    cout << "tail is " << return_tail() << endl;
    cout << "length is " << return_length() << endl;
    if (check_empty()) cout << "empty now" << endl;
    else cout << "not empty!" << endl;
    
    return 0;
}

/*
 Regina's
 #include <iostream>

 using namespace std;

 int gethead(int q[], int head) {
     return q[head];
 }

 int gettail(int q[], int tail) {
     return q[tail];
 }

 int length(int q[], int head, int tail) {
     if (isEmpty(q, head, tail)) {
         return 0;
     }
     return tail-head+1;
 }

 bool isEmpty(int q[], int head, int tail) {
     return tail < head;
 }

 int main()
 {
     int q[10000];
     int head = 0, tail = -1;
     q[++tail] = 9;
     q[++tail] = 11;
 }
 */

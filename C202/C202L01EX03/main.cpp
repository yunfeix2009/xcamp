//
//  main.cpp
//  C202L01EX03
//
//  Created by Yunfei Xia on 10/2/24.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

const int mx_n = 1000;
char maze[mx_n][mx_n];
bool visited[mx_n][mx_n];
int count_a = 0;
int n, m;

bool if_out_of_bounce(int x, int y){ return x<0 || y<0 || x>=n || y >=m;}

void bad_surronding(int x, int y){
    if (!if_out_of_bounce(x, y)){
        if (maze[x][y] == '.') {
            maze[x][y] = '#';
            return;
        }
        if (maze[x][y] == 'G'){
            cout << "No";
            exit(1);
        }
    }
}

bool if_possible(int x, int y){
    if (maze[x][y] == '#' || if_out_of_bounce(x, y) || (x==n && y==m)) return false;
    if (maze[x][y] == 'G'){
        maze[x][y] = '.';
        count_a--;
    }
    return true;
}

void floodfill(int x, int y){
    if (if_possible(x, y)){
        visited[x][y] = true;
        return;
    }
    floodfill(x, y+1);
    floodfill(x, y-1);
    floodfill(x+1, y);
    floodfill(x-1, y);
}

int main(int argc, const char * argv[]) {
    cin >> n >> m;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> maze[i][j];
        }
    }    
    
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (maze[i][j] == 'G') count_a++;
            if (maze[i][j] == 'B'){
                bad_surronding(i, j+1);
                bad_surronding(i, j-1);
                bad_surronding(i+1, j);
                bad_surronding(i-1, j);
            }
        }
    }
    
    floodfill(n-1, m-1);
    
    if (count_a == 0) cout << "Yes";
    else cout << "No";
    return 0;
}

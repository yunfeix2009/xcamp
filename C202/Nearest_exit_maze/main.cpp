//
//  main.cpp
//  Nearest_exit_maze
//
//  Created by Yunfei Xia on 10/5/24.
//

#include <iostream>
using namespace std;

const int mx_n = 100;
char maze[mx_n][mx_n];
bool visited[mx_n][mx_n];
int shortest_path = 10000;
int step_count = -1;
int r, c, entrance_x, entrance_y;

bool exited(int x, int y){
    return maze[x][y] == '.' && (x==0 || y == 0 || x == r-1 || y == c-1);
}

bool impossible(int x, int y){
    return maze[x][y] == '+' || x<0 || y < 0 || x > r-1 || y > c-1 || visited[x][y];
}

void floodfill(int x, int y, int step_count){
    if (impossible(x, y)) return;
    step_count++;
    visited[x][y] = true;
    if (exited(x, y)){
        shortest_path = min(shortest_path, step_count);
        return;
    }
    floodfill(x, y+1, step_count);
    floodfill(x, y-1, step_count);
    floodfill(x+1, y, step_count);
    floodfill(x-1, y, step_count);
    step_count--;
    visited[x][y] = false;
    return;
}

int main(int argc, const char * argv[]) {
    cin >> r >> c;
    cin >> entrance_x >> entrance_y;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> maze[i][j];
        }
    }
    floodfill(entrance_x, entrance_y, step_count);
    if (shortest_path == 10000) cout << -1;
    else cout << shortest_path;
    return 0;
}

/*
3 4
1 2
+ + . +
. . . +
+ + + .
*/

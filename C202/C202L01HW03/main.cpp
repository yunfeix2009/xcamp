#include <iostream>
using namespace std;

const int mx_n = 20;
char maze[mx_n][mx_n];
int max_num = 0;
int r, c;
//define visited as a char array
bool visited_char[(int)('Z')+1];

bool impossible(int x, int y){
//    check if in the maze and visited before, only check the letter is enough
    return x<0 || y<0 || x>=r || y>=c || visited_char[(int)(maze[x][y])];
}

void floodfill(int x, int y, int step_count){
//    if not valid, return
    if (impossible(x, y)) return;
//    If valid, check if longest, then mark
    step_count ++;
    if (max_num < step_count) max_num = step_count;
    visited_char[static_cast<int>(maze[x][y])] = true;
//    fill the adjacent cells(letters)
    floodfill(x, y+1, step_count);
    floodfill(x, y-1, step_count);
    floodfill(x+1, y, step_count);
    floodfill(x-1, y, step_count);
    
//    backtracking
    visited_char[static_cast<int>(maze[x][y])] = false;
    step_count--;
    
}

int main(int argc, const char * argv[]) {
    //read input
    cin >> r >> c;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> maze[i][j];
        }
    }    
    
    //floodfill from topleft
    floodfill(0, 0, max_num);
    // insert code here...
    std::cout << max_num;
    return 0;
}

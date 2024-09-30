#include<iostream>
using namespace std;
const int mx_n = 1000;
char maze[mx_n][mx_n];
bool visted[mx_n][mx_n];
int r, c, room_num;

// define "impossible" to smooth the code
bool impossible(int x, int y){
    return x<0 || y<0 || x>=r || y>=c || maze[x][y] == '#' || visted[x][y];
}

//fill in the room that's newly discovered
void floodfill(int x, int y){
    if (impossible(x, y)) return;
    visted[x][y] = true;
    //visit the neighbors
    floodfill(x, y+1);
    floodfill(x, y-1);
    floodfill(x+1, y);
    floodfill(x-1, y);
}

//check if current position is a new room, if so, fill in the room
void count_rooms(int x, int y){
    if (impossible(x, y)) return;
    room_num++;
    floodfill(x, y);
    return;
}

int main(){
    // read input
    room_num = 0;
  cin >> r >> c;
  for (int i=0; i<r; i++){
    for (int j = 0; j<c; j++){
      cin >> maze[i][j];
    }
  }
    //loop the maze and count the room at each position
    for (int i=0; i<r; i++){
    for (int j = 0; j<c; j++){
        count_rooms(i, j);
    }
  }
    cout << room_num;
  return 0;
}

/*
10 10
#..#.##..#
#.#####.#.
####.####.
...#.#.###
#######...
#..#.###.#
.#.#.#####
###.#.#...
#..###.##.
###...##.#
 
 output: 18
 
 Sample Input:
 5 8
 ########
 #..#...#
 ####.#.#
 #..#...#
 ########
 Output:
 3
*/

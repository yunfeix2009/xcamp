//
//  main.cpp
//  C202L2Ex2
//
//  Created by Yunfei Xia on 10/5/24.
//

#include <iostream>
#include <set>

using namespace std;

char board[3][3];
set<char> win_indi;
set<set<char>> win_team;
set<char> line_record;

void check_win(char a, char b, char c){
    line_record.insert(a);
    line_record.insert(b);
    line_record.insert(c);

    switch (line_record.size()) {
        case 1: {
//            set<char>::iterator it = line_record.begin();
//            win_indi.insert(*(it));
            win_indi.insert(a);
            line_record.clear();
            break;
        }
        case 2: {
            win_team.insert(line_record);
            line_record.clear();
            break;
        }
        default: {
            line_record.clear();
            break;
        }
    }
}

int main(int argc, const char * argv[]) {
    
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++) cin >> board[i][j];
    }
    
    
    for (int i=0; i<3; i++){
        check_win(board[i][0], board[i][1], board[i][2]);
        check_win(board[0][i], board[1][i], board[2][i]);
    }
    check_win(board[0][0], board[1][1], board[2][2]);
    check_win(board[0][2], board[1][1], board[2][0]);
    
        
    std::cout << win_indi.size() << endl;
    std::cout << win_team.size() << endl;
    return 0;
}
////
////  main.cpp
////  C202L2Ex2
////
////  Created by Yunfei Xia on 10/5/24.
////
//
//#include <iostream>
//#include <set>
//
//using namespace std;
//
//int board[3][3];
//set<int> winning_group;
//set<set<int>> total_w;
//
//int main(int argc, const char * argv[]) {
//    for (int i=0; i<3; i++){
//        for (int j=0; j<3; i++) cin >> board[i][j];
//    }
//    for (int i=0; i<3; i++){
//        for (int j=0; j<3; i++) cin >> board[i][j];
//    }
//    
//    
//        
//    std::cout << "Hello, World!\n";
//    return 0;
//}

#include<iostream>
#include<map>

using namespace std;
int n;
map<string, int> mp;
string city, state;
int cnt=0;

int main(){
  cin >> n;
    
    
  for (int i = 0; i<n; i++){
    cin >> city >> state;
      
      if (city.substr(0, 2) == state) continue;
      if (mp[state+city.substr(0, 2)]){
          cnt += mp[state+city.substr(0, 2)];
      }
      mp[city.substr(0, 2)+state]++;

  }
  cout << cnt;
  return 0;
}

//#include<iostream>
//#include<map>
////#include<set>
//
//using namespace std;
//int n;
//map<string, int> mp;
//string city, state;
//int cnt=0;
//map<string, int>::iterator it;
//
//int main(){
//  cin >> n;
//  for (int i = 0; i<n; i++){
//    cin >> city >> state;
//    mp[state+city.substr(0, 2)]++;
//  }
//  for (auto& pair : mp){
//      string target =pair.first.substr(2, 2)+pair.first.substr(0, 2);
//      cout << pair.first << endl;
//      cout << target << endl << endl;
//      it = mp.find(target);
//      if (it != mp.end()){
//          cnt += pair.second * mp[target];
//          mp[pair.first] = 0;
//          mp[target] = 0;
//      }
      
//  }
//      if (mp[pair.second] == pair.first){
//          mp[pair.second] = " ";
//          cnt++;
//      }
  
//  cout << cnt;
//  return 0;
//}

/*
#include<iostream>
#include<map>
#include<set>

using namespace std;
int n;
map<string, set<string>> mp;
string city, state;
int cnt=0;
map<string, string>::iterator it;

int main(){
  cin >> n;
  for (int i = 0; i<n; i++){
    cin >> city >> state;
    mp[state].insert(city.substr(0, 2));
  }
  for (auto& pair : mp){
      for (auto& cit : pair.second){
          for (auto& cit_2 : mp[cit]){
//              cout << pair.first << " " << cit << endl;
//              cout << cit_2 << endl;
              if (cit_2 == pair.first){
                  cnt++;
                  pair.second.erase(cit);
                  mp[cit].erase(cit_2);
              }
          }
      }
//      if (mp[pair.second] == pair.first){
//          mp[pair.second] = " ";
//          cnt++;
//      }
  }
  cout << cnt;
  return 0;
}
*/

/*
6
MIAMI FL
DALLAS TX
FLINT MI
CLEMSON SC
BOSTON MA
ORLANDO FL
 */

//1

//Multiple cities with the same name can exist, but they will be in different states.

#include <iostream>
#include <map>
#include<set>

using namespace std;

int n;
set<string> worst_cow;
set<string> bad_cow;
const int mx_n = 10000;
int worst_milk = mx_n;
int bad_milk = mx_n;
map<string, int> mp;

int main(int argc, const char * argv[]){
    mp["Bessie"] = 0;
    mp["Elsie"] = 0;
    mp["Daisy"] = 0;
    mp["Gertie"] = 0;
    mp["Annabelle"] = 0;
    mp["Maggie"] = 0;
    mp["Henrietta"] = 0;

    cin >> n;
    string name;
    int milk;
    for (int i=0; i<n; i++){
        cin >> name >> milk;
        mp[name] = mp[name]+milk;
    }
    
    for(auto& x : mp){
        if (x.second < worst_milk){
            worst_cow.clear();
            worst_cow.insert(x.first);
            worst_milk = x.second;
            continue;
        }
        else if (x.second == worst_milk){
            worst_cow.insert(x.first);
            continue;
        }
    }
    for (auto& x:worst_cow) mp[x] = mx_n;

    for(auto& x : mp){
        if (x.second < bad_milk){
            bad_cow.clear();
            bad_cow.insert(x.first);
            bad_milk = x.second;
            continue;
        }
        else if (x.second == bad_milk){
            bad_cow.insert(x.first);
            continue;
        }
    }
    if (bad_cow.size() == 1) cout << *bad_cow.begin() << endl;
    else cout << "Tie" << endl;
    
    return 0;
}

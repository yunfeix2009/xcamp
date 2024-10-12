#include <iostream>
#include <set>

using namespace std;

int main()
{
    std::set<int> mySet;
    
    mySet.insert(1);
    mySet.insert(3);
    mySet.insert(4);
    mySet.insert(5);
    
    //insert a 3 one more time
    mySet.insert(3);
    
    for (const int &elem : mySet){
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    
    mySet.erase(5);
    
    for (const int &elem : mySet){
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    
    // let's see if we have a 6 in the set
    std::cout << (mySet.count(3) == 1) << std::endl;
    
    for (std::set<int>::iterator it = mySet.begin(); it != mySet.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    set<int>::iterator it = mySet.find(7);
    if (it == mySet.end()) cout << "no" << endl;
    else cout << "yes" << endl;
    
    std::cout << (mySet.find(3) != mySet.end()) << std::endl;
    
    
}


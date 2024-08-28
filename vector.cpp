#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>  vtr;
    vtr.emplace_back(4);
    vtr.emplace_back(3);
    vtr.emplace_back(5);
    vtr.emplace_back(6);
    vtr.emplace_back(7);
    vector<int>::iterator it = vtr.begin();
    for(it ; it!=vtr.end();it++){
        cout<<*it;
    }



    return 0;
}
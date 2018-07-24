#include <iostream>
#include <vector>
#include "solutions.h"
using namespace std;

int main(){
    cout<<"test5";
    solution s;
    cout<<"test4";
    int n[8]={1,3,0,7,0,9,1,0};
    vector<int> ary;
    for (int i = 0; i < 8; i ++){
        ary.push_back(ary[i]);
    }
    cout<<"test3";
    s.move_zeroes(ary);
    for(int i = 0; i < ary.size(); i++){
        cout << ary[i];
    }
    return 0;
}

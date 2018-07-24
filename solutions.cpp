#include "solutions.h"
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution::move_zeroes(vector<int> ary){
        cout<<"test0";
        vector<int> save_ary;
        int j = 0;
        int n = 0;
        cout << "test1";
        for (int i = 0; i <ary.size(); i++){
            if (ary[i] == 0){
                save_ary.push_back(i);
            }
        }
        cout << "test2";
        for(int i = 0; i < ary.size(); i++){
            if(i != save_ary[j]) continue;
            else{
                n++;
                j++;
                while (++ i != save_ary[j]){
                    ary[i-n] = ary[i];
                }
                i --;
            }
        }
        for (j; j>0; j --){
            ary[ary.size()-j]= 0;
        }
        return ary;
}

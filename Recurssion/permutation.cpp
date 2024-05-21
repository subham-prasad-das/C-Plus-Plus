#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>nums, vector<vector<int>>&ans, int index){
    if(index >= nums.size()){
        ans.push_back(nums);
        return ;
    }

    for(int i=index; i<nums.size(); i++){
        swap(nums[index], nums[i]);
        solve(nums, ans, index);
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>>permute(vector<int>nums){
    vector<vector<int>>ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

/*int main(){
    vector<int>nums = {1,2,3};
    vector<vector<int>>v = permute(nums, v);
    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<v[i].size(); i++){
            cout<<v[i][j];
        }
    }    
    return 0;
}*/
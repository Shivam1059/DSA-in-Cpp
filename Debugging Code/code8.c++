//Debug the code. Find the length of the longest strictly increasing subsequence.

#include<iostream>
#include<vector>
using namespace std;

int lengthOfLIS(vector<int>& nums) 
    {
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] > ans.back())
            {
                ans.push_back(nums[i]);
            }
            else
            {
                int index = lower_bound(ans.begin(), ans.end(), nums[i])-ans.begin(); // Before solving get acquainted with lower_bound()
                ans[index]=nums[i];
            }
        }    
        return ans.size();
    }


int main(){

  vector<int>nums = {50,60,70,10,20,30,40};
  int ans = lengthOfLIS(nums);

  cout<<" length of longest stric : "<<ans;


  return 0;
}
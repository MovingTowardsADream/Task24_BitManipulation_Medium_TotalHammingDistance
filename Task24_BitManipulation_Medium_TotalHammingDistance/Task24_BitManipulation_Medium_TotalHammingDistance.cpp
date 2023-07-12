#include <iostream>
#include <vector>

class Solution {
public:
    static int totalHammingDistance(std::vector<int>& nums)
    {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < 31; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
                if (nums[j] & (1 << i))
                    cnt++;
            ans += cnt * (n - cnt);
        }
        return ans;
    }
};

int main()
{
    std::vector<int> nums = { 4,14,2 };
    std::cout << Solution::totalHammingDistance(nums);
}

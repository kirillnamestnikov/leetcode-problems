class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        size_t n = nums.size();
        std::vector< int > arr(201, 0);
        for (const auto & el: nums)
        {
            ++arr[el + 100];
        }
        std::sort(nums.begin(), nums.end(), [&](int a, int b){
            if (arr[a + 100] == arr[b + 100])
            {
                return a > b;
            }
            return arr[a + 100] < arr[b + 100];
        });
        return nums;
    }
};

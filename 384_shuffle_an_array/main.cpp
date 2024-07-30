class Solution {
public:
    Solution(vector<int>& nums) {
        nums_ = nums;
        old_ = nums_;
    }
    vector<int> reset() {
        return old_;
    }
    vector<int> shuffle() {
        std::next_permutation(nums_.begin(), nums_.end());
        return nums_;
    }
private:
    std::vector< int > nums_;
    std::vector< int > old_;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */

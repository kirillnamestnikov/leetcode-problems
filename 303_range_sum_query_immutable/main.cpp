class NumArray {
public:
    NumArray(vector<int>& nums) {
        data_ = nums;
        sums_ = nums;
        for (size_t i = 1; i < nums.size(); ++i)
        {
            sums_[i] = sums_[i - 1] + data_[i];
        }
    }
    
    int sumRange(int left, int right) {
        return (sums_[right] - sums_[left] + data_[left]);
    }
private:
    std::vector< int > data_;
    std::vector< int > sums_;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

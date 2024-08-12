class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        k_ = k;
        for (const auto & num: nums)
        {
            queue_.push(num);
            if (queue_.size() > k_)
            {
                queue_.pop();
            }
        }
    }
    
    int add(int val) {
        queue_.push(val);
        if (queue_.size() > k_)
        {
            queue_.pop();
        }
        return queue_.top();
    }
private:
    int k_;
    std::priority_queue< int, std::vector< int >, std::greater< int > > queue_;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

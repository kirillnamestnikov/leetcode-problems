class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int previous = -1;
        int answer = 0;
        for (const auto & i: timeSeries)
        {
            answer += duration;
            if (previous >= i)
            {
                answer -= std::abs(previous - i) + 1;
            }
            previous = i + duration - 1;
        }
        return answer;
    }
};

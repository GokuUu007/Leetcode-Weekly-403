class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        multiset<double> p, avg;
        for (auto &x : nums)
            p.insert(x);
        
        const int n = int(nums.size());
        
        for (int i = 0; i < n / 2; ++i) {
            double mn = *(p.begin());
            double mx = *(p.rbegin());
            p.erase(p.find(mn));
            p.erase(p.find(mx));
            avg.insert((mn + mx) / 2.0);
        }
        return *avg.begin();
    }
};

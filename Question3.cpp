int maxSubArray(vector<int>& arr) {
        int max_ = arr[0];
        int sum = 0;
        for(auto &it:arr){
            sum += it;
            max_ = max(max_,sum);
            sum = sum<0?0:sum;
        }
        return max_;
}

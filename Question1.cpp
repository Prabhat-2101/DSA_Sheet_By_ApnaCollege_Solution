#include<bits/stdc++.h>
using namespace std;

//time: 2*N worst case;
pair<int,int> findMaxMin(vector<int> &arr){
    pair<int,int> res;
    res.first = INT_MAX,res.second=INT_MIN;
    for(const int &ele: arr){
        res.first = min(ele,res.first);
        res.second = max(ele,res.second);
    }
    return res;
}

// 3N/2
pair<int,int> findMinMax(vector<int> &arr,int low,int high){
    if(low==high)
        return {arr[low],arr[low]};
    
    if(low+1==high){
        if(arr[low]>arr[high])
            return {arr[high],arr[low]};
        return {arr[low],arr[high]};
    }
    
    int mid = (low+high)/2;
    pair<int,int> left = findMinMax(arr,low,mid);
    pair<int,int> right = findMinMax(arr,mid+1,high);
    
    left.first = min(left.first,right.first);
    left.second = max(left.second,right.second);
    
    return left;
}

int main(){
    vector<int> arr = {1000, 11, 445, 111, 330, 3000};
    pair<int,int> res = findMinMax(arr,0,arr.size()-1);
    cout<<"Minimum: "<<res.first<<endl;
    cout<<"Maximum: "<<res.second<<endl;
    return 0;
}

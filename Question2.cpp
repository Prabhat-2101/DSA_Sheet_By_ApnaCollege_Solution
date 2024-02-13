#include<bits/stdc++.h>
using namespace std;

void reverse_array(vector<int> &arr){
    int fwd=0,bwd=arr.size()-1;
    while(fwd<bwd){
        swap(arr[fwd],arr[bwd]);
        fwd++;bwd--;
    }
}

int main(){
    vector<int> arr = {1000, 11, 445, 111, 330, 3000};
    reverse_array(arr);
    for(const int &ele: arr) cout<<ele<<" ";
    cout<<endl;
    return 0;
}

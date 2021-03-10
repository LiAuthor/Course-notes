#include"iostream"
#include"algorithm"
#include"vector"
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    reverse(nums.begin(),nums.end());
    //vector<int>::iterator it=unique(nums.begin(),nums.end());
    //reverse(nums.begin(),it);//注意it处表示开区间，前开后闭区间
    return nums[k-1];
}
int main(){
    vector<int> temp={3,2,3,1,2,4,5,5,6};
    cout<<findKthLargest(temp,4)<<endl;
    return 0;
}
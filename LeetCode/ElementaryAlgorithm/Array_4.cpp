#include"iostream"
#include"vector"
#include"algorithm"
#include"set"
using namespace std;
int main(){
    vector<int> nums={1,2,4,5,6,7,3};
    set<int> s;
    bool ans=false;
    pair<set<int>::iterator,bool> p;
    for(int i=0;i<nums.size();i++){
        p=s.insert(nums[i]);
        if(!p.second){
            ans=true;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
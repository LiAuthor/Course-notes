/*https://leetcode-cn.com/problemset/all/?search=%E4%B9%B0%E5%8D%96%E8%82%A1%E7%A5%A8%E7%9A%84%E6%9C%80%E4%BD%B3%E6%97%B6%E6%9C%BA*/
/*https://www.cnblogs.com/ariel-dreamland/p/9166176.html*/
#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
// I暴力破解
int maxProfit(vector<int> &prices) {
  int result = 0, temp, length = prices.size();
  for (int x = 0; x < length - 1; ++x)
    for (int y = x + 1; y < length; ++y) {
      temp = prices[y] - prices[x];
      if (temp >= result)
        result = temp;
    }
  return result;
}
/*方法二
    int maxProfit(vector<int>& prices) {
        vector<int> price;
        for(int i=1;i<prices.size();++i)
            price.push_back(prices[i]-prices[i-1]);
        int profit=0,max_profit=0;
        for(int i=0;i<price.size();++i){
            if(price[i]+profit>0)
                profit+=price[i];
            else profit=0;
            if(profit>max_profit) max_profit=profit;
        }
        return max_profit;
        */
/*方法三双指针
 int maxProfit(vector<int>& prices) {
         int left = 0, right = 1;
         int res = 0;
         if (prices.empty() || prices.size() < 2)
                 return 0;
         while (right < prices.size()) {
                 if (prices[right] > prices[left]) {
                         res = max(res, prices[right++] - prices[left]);
                 }
                 else
                         left = right++;
         }
         return res;
 }*/
// II
int maxProfitII(vector<int> &prices) {
  //贪心算法,在已知每天的价格之后,便宜时买入贵时卖出,虽然每次赚的少,但是最终一定最多
  int maxPro = 0, tmp = 0;
  for (int i = 1; i < prices.size(); ++i) {
    tmp = prices[i] - prices[i - 1];
    if (tmp > 0)
      maxPro += tmp;
  }
  return maxPro;
}
/*https://www.cnblogs.com/ariel-dreamland/p/9166176.html*/
// III
int maxProfitIII(vector<int> &prices) {
  if (prices.empty())
    return 0;
  int g[3] = {0};
  int l[3] = {0};
  for (int i = 0; i < prices.size() - 1; ++i) {
    int diff = prices[i + 1] - prices[i];
    for (int j = 2; j >= 1; --j) {
      l[j] = max(g[j - 1] + max(diff, 0), l[j] + diff);
      g[j] = max(l[j], g[j]);
    }
  }
  return g[2];
}

/*
int maxProfitIII_twe(vector<int> &prices) {
  if (prices.size() == 0) {
    return 0;
  }
  int i1, i2, o1, o2;
  i1 = Integer.MIN_VALUE;
  i2 = Integer.MIN_VALUE;
  o1 = 0;
  o2 = 0;
  for (int i = 0; i < prices.size(); ++i) {
    i1 = Math.max(i1, -prices[i]);
    o1 = Math.max(o1, prices[i] + i1);
    i2 = Math.max(i2, o1 - prices[i]);
    o2 = Math.max(o2, i2 + prices[i]);
  }
  return o2;
}
*/

// VI
int main() {
  vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
  cout << maxProfitIII(prices) << endl;
  return 0;
}
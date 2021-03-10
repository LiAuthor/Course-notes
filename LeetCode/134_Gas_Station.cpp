#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
/*
int canComplete(vector<int> &gas, vector<int> &cost) {
  int gas_s = gas.size(), cost_s = cost.size();
  if (gas_s == 1 && gas[0] >= cost[0])
    return 0;
  else if (gas_s == 1 && gas[0] < cost[0])
    return -1;
  else {
    for (int i = 0; i < gas_s; ++i)
      gas.push_back(gas[i]);
    for (int i = 0; i < cost_s; ++i)
      cost.push_back(cost[i]);
    int t = 0, tank = 0;
    for (int i = 0; i < gas.size() / 2; ++i) {
      //判断i是否具有潜力
      if (gas[i] >= cost[i]) {
        t = i + 1;
        // tank表示到达下一站并且加过本站油量之后的剩余油量
        tank = gas[t - 1] - cost[t - 1] + gas[t];
        //判断tank能否满足到达下一站
        while (tank >= cost[t]) {
          ++t;
          //如果遇到两站的油量相同即代表为同一站
          if (gas[i] == gas[t])
            return i;
          tank = tank - cost[t - 1] + gas[t];
        }
      }
    }
  }
  return -1;
}*/
int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
  int total = 0, sum = 0, start = 0;
  for (int i = 0; i < gas.size(); ++i) {
    // total为负值时相当于提前透支之后从能满足要求的位置开始
    total += gas[i] - cost[i];
    sum += gas[i] - cost[i];
    if (sum < 0) {
      start = i + 1;
      sum = 0;
    }
  }
  return (total < 0) ? -1 : start;
}
int canCompleteCircuitII(vector<int> &gas, vector<int> &cost) {
  int t = 0, tank = 0, gas_s = gas.size();
  for (int i = 0; i < gas_s; ++i) {
    //判断i是否具有潜力
    if (gas[i] >= cost[i]) {
      t = i + 1;
      // tank表示到达下一站并且加过本站油量之后的剩余油量
      tank = gas[t - 1] - cost[t - 1] + gas[t];
      //判断tank能否满足到达下一站
      while (tank >= cost[t]) {
        ++t;
        //如果遇到两站的油量相同即代表为同一站
        if (t > gas_s)
          t -= gas_s;
        if (i == t)
          return i;
        tank = tank - cost[t - 1] + gas[t];
      }
    }
  }
  return -1;
}
int main() {
  vector<int> gas = {1, 2, 3, 4, 3, 2, 4, 1, 5, 3, 2, 4},
              cost = {1, 1, 1, 3, 2, 4, 3, 6, 7, 4, 3, 1};
  cout << canCompleteCircuit(gas, cost) << endl;
  return 0;
}
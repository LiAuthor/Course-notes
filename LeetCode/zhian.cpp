#include "algorithm"
#include "climits"
#include "iostream"
#include "vector"
using namespace std;
int main() {
  int N, M, S, F;
  cin >> N >> M >> S >> F;
  int TimeSize = F - S;
  // table为工作时间表格 1代表在岗 0反之
  vector<vector<int>> table(N, vector<int>(TimeSize, 0));
  //第二三行输入数据分别记为lineone linetwe
  vector<int> lineone(N, 0), linetwe(N, 0);
  //输入数据
  for (int i = 0; i < N; ++i)
    cin >> lineone[i];
  for (int i = 0; i < N; ++i)
    cin >> linetwe[i];
  //对工作时间进行置1
  for (int i = 0; i < N; ++i) {
    for (int j = lineone[i]; j < linetwe[i]; ++j)
      table[i][j] = 1;
  }
  /*
  for(int i=0;i<N;++i){
    for(int j=0;j<TimeSize;++j)
      cout<<table[i][j]<<" ";
    cout<<endl;
  }
  */
  int WorkPer = 0;
  // Work记录每个时刻工作的人数
  vector<int> Work(TimeSize, 0);
  for (int j = 0; j < TimeSize; ++j) {
    for (int i = 0; i < N; ++i) {
      if (table[i][j] == 1) {
        ++WorkPer;
      }
    }
    Work[j] = WorkPer;
    WorkPer = 0;
  }
  sort(Work.begin(), Work.end());
  if (Work[TimeSize] >= M)
    cout << "Yes"
         << " " << Work[TimeSize - 1] << endl;
  else
    cout << "No"
         << " " << Work[0] << endl;
  return 0;
}
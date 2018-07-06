#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
      vector<vector<int>> sol;
      for(int i = 0; i<A.size(); i++){
        vector<int> temp;
        for(int j = 0; j<A.size(); j++){
          temp.push_back(!A[i][j]);
        }
        reverse(temp.begin(), temp.end());
        sol.push_back(temp);
      }
      return sol;
    }
};

int main(){

  vector<vector<int>> input = {{1,1,0},{1,0,1},{0,0,0}};
  vector<vector<int>> ret = Solution().flipAndInvertImage(input);

  for(int i = 0; i<ret.size(); i++){
    for(int j = 0; j<ret.size(); j++){
      cout << ret[i][j] << endl;
    }
  }
  return 0;

}

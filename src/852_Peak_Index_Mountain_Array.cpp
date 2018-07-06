/*
Let's call an array A a mountain if the following properties hold:
  1. A.length >= 3
  2. There exists some 0 < i < A.length - 1 such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]

Given an array that is definitely a mountain, return any i such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1].

Example 1:
Input: [0,1,0]
Output: 1

Example 2:
Input: [0,2,1,0]
Output: 1

Note:
  1. 3 <= A.length <= 10000
  2. 0 <= A[i] <= 10^6
  3. A is a mountain, as defined above.
*/


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int peakIndexInMountainArray(vector<int>& A) {
    int mid = A.size() / 2;
    while(!this->checkCondition(A, mid)){
      if(A[mid] < A[mid - 1])
        mid = mid - 1;
      else if(A[mid] < A[mid + 1])
        mid = mid + 1;
    }
  return mid;
  }

  bool checkCondition(vector<int>& A, int index){
    if(A[index] > A[index-1] && A[index] > A[index+1])
      return true;
    return false;
  }
};

int main(){

  vector<int> input = {0,2,3,4,5,9,8,7,6,5,4,3};

  int ret = Solution().peakIndexInMountainArray(input);
  cout << ret << endl;

  return 0;
}

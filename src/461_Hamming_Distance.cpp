/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, calculate the Hamming distance.

Note:
0 ≤ x, y < 2^31.

Example:
Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑
The above arrows point to positions where the corresponding bits are different.
*/

#include <iostream>
#include <vector>
#include <bitset>
#include <string>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
      string x_binary = bitset<32>(x).to_string(); //to binary
      string y_binary = bitset<32>(y).to_string(); //to binary
      int count = 0;
      for (int i = 0 ; i < x_binary.length(); i++){
          if(x_binary[i] != y_binary[i]){
            count++;
          }
        }
      return count;
    }
};

int main(){

  int x = 1;
  int y = 4;

  int ret = Solution().hammingDistance(x,y);
  cout << ret << endl;
  return 0;

}

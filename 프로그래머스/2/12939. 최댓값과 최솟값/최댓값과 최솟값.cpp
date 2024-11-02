#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    stringstream ss(s);
    vector<int> nums;
    string num;
    while(getline(ss, num, ' '))
        nums.push_back(stoi(num));
    
    sort(nums.begin(), nums.end());
    answer = to_string(nums[0]) + " " + to_string(nums[nums.size() - 1]);
    
    return answer;
}
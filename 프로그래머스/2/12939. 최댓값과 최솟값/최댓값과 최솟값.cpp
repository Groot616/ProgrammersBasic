#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    stringstream letter(s);
    vector<int> nums;
    int num;
    while(letter >> num)
        nums.push_back(num);
    
    sort(nums.begin(), nums.end()); 
    answer = to_string(nums[0]) + " " + to_string(nums[nums.size() - 1]);
    
    return answer;
}
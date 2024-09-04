#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    
    for(const auto& e : order)
    {
        if(e == "iceamericano" || e == "americanoice" || e == "hotamericano" || e == "americanohot" || e == "americano" || e == "anything")
        {
            answer += 4500;
        }
        else
        {
            //case "icecafelatte":
            //case "cafelatteice":
            //case "hotcafelatte":
            //case "cafelattehot":
            //case "cafelatte":
                answer += 5000;
        }
    }
    
    return answer;
}
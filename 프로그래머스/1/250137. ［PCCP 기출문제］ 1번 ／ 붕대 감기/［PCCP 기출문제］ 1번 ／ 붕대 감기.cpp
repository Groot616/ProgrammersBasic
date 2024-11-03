#include <string>
#include <vector>

using namespace std;

bool bCharacterDeath(const int health)
{
    if(health <= 0) return true;
    else return false;
}

bool bOverHealth(const int health, const int maxHealth)
{
    if(health > maxHealth) return true;
    else if(health <= maxHealth) return false;
}

void addTimer(int& deltaTime, int& haelingTime)
{
    ++deltaTime;
    ++haelingTime;
}

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    
    int deltaTime = 0;
    int healingTime = 0;
    int idx = 0;
    int maxHealth = health;
    
    while(idx < attacks.size())
    {
        addTimer(deltaTime, healingTime);
        
        if(deltaTime != attacks[idx][0])
        {
            health += bandage[1];
            if(healingTime == bandage[0])
            {
                health += bandage[2];
                healingTime = 0;
            }
            if(bOverHealth(health, maxHealth)) health = maxHealth;
        }
        else
        {
            healingTime = 0;
            health -= attacks[idx][1];
            ++idx;
            
            if(bCharacterDeath(health))
            {
                health = -1;
                break;
            }
        }
    }
    answer = health;
    
    return answer;
}
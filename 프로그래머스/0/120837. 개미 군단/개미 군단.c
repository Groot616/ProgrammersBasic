#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    
    int GeneralAnt = 0;
    int SolderAnt = 0;
    int WorkerAnt = 0;
    
    GeneralAnt = hp / 5;
    hp %= 5;
    SolderAnt = hp / 3;
    hp %= 3;
    WorkerAnt = hp;
    
    answer = GeneralAnt + SolderAnt + WorkerAnt;
    
    return answer;
}
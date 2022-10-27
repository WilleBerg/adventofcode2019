#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>
#include <map>
#include "D:\fromDesktop\Programmering\adventofcode2019\hfiles\readInput.h"

using namespace std;

map<char, int> charintmap;
charintmap['0'] = 0;
charintmap['1'] = 1;
charintmap['2'] = 2;
charintmap['3'] = 3;
charintmap['4'] = 4;
charintmap['5'] = 5;
charintmap['6'] = 6;
charintmap['7'] = 7;
charintmap['8'] = 8;
charintmap['9'] = 9;

int ctoi(char c){ return charintmap[c]; }

int main(){
    vector<string> input;
    readInput(&input, "day1/input.txt");
    int sum = 0;
    for(int i = 0; i < input.size(); i++){
        sum += (floor(stoi(input[i])/3) - 2);
    }
    cout << sum;
    
    return 0;
}

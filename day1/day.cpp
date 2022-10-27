#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>
#include "D:\fromDesktop\Programmering\adventofcode2019\hfiles\readInput.h"

using namespace std;

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

#include "D:\fromDesktop\Programmering\adventofcode2019\hfiles\readInput.h"

using namespace std;

int helper(int curr, int sum){
    if(curr < 2) return sum;
    else{
        curr = floor(curr/3) - 2;     
        if (curr > 0) sum += curr;
        return helper(curr, sum);
    }
}

int main(){
    vector<string> input;
    readInput(&input, "day1/input.txt");
    int sum = 0;
    for(int i = 0; i < input.size(); i++){
         sum += helper(stoi(input[i]), 0);
    }
    cout << sum;
    return 0;
}

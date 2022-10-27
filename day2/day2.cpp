#include "D:\fromDesktop\Programmering\adventofcode2019\hfiles\readInput.h"

using namespace std;

vector<int> add(vector<int> v, int pos){
    int sum = 0;
    for(int i = 0; i < 2; i++){
        int curr = v.at(pos + i);
        sum += v[curr];
    }
    v[v[pos + 2]] = sum;
    return v;
}
vector<int> mult(vector<int> v, int pos){
    int sum = 1;
    for(int i = 0; i < 2; i++){
        int curr = v.at(pos + i);
        sum *= v[curr];
    }
    v[v[pos + 2]] = sum;
    return v;
}

int testProgram(vector<int> conv){
    for(int i = 0; i < conv.size(); i++){
        int curr = conv[i];
        switch(curr){
            case 1:
                conv = add(conv, i + 1);
                i += 3;
                continue;
            case 2:
                conv = mult(conv, i + 1);
                i += 3;
                continue;
            case 99:
               // for(int i = 0; i < conv.size(); i++){
               //     cout << conv[i] << endl;
            //}    
                return conv[0];
            default:
                break;
        }
    }
}

int main(){
    onStart();
    vector<string> input;
    readInput(&input, "day2/input.txt");
    vector<int> conv;

    conv = split(input, ',');
    int result = 0;
    for(int i = 0; i < 100;i++){
        conv[1] = i;
        for(int j = 0; j < 100; j++){
            conv[2] = j;
            result = testProgram(conv); 
            if(result == 19690720){
                cout << "Answer is " << i << " and " << j << endl;
            }
        }
    }
    
    return 0;
}

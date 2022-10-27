#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include <map>

#define CURRENT_DIRECTORY "D:/fromDesktop/Programmering/adventofcode2019/"

using namespace std;

map<char, int> charintmap;
void onStart(){
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
}

int ctoi(char c){ return charintmap[c]; }

vector<int> split(vector<string> vec, char delimiter){
    string tmp = "";
    vector<int> result;
    for (int i = 0; i < vec.size(); i++)
    {
        tmp = "";
        for (int j = 0; j < vec[i].length(); j++)
        {
            if (vec[i][j] == delimiter)
            {
                result.push_back(stoi(tmp));
                tmp = "";
            } else {
                tmp += vec[i][j];
            }
        }
        if (tmp != "")
        {
            result.push_back(stoi(tmp));
        }
    }
    return result;
}

string ctos(char c){
    string s = "" + c;
    return s;
}

char stringing(string a){
    return a[0];
}
string charing(char a, char b){
    string tmp = "";
    tmp += a;
    tmp += b;
    return tmp;
}
void readInput(vector<string> *d, string inputDirectory){
    fstream file;
    file.open(CURRENT_DIRECTORY + inputDirectory);
    if (file.is_open())
    {
        while (file)
        {
            string tmp;
            file >> tmp;
            if (tmp != "")
            {
                d->push_back(tmp);
            }
        }
    }
}

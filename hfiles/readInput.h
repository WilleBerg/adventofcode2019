#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>

#define CURRENT_DIRECTORY "D:/fromDesktop/Programmering/adventofcode2019/"

using namespace std;

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

#include <iostream>
#include <vector>
#include <readInput.h>
#include <string>

void readInput(vector<string> *d, string inputDirectory){
    fstream file;
    file.open(inputDirectory);
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

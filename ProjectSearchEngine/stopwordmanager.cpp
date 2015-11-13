#include "stopwordmanager.h"

StopWordManager::StopWordManager()
{
    ifstream inFile("stopWordList.txt");
    string currWord;
    while(inFile >> currWord)
        StopWords.push_back(currWord);
}


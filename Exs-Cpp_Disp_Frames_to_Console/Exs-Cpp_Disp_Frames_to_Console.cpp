
#include <iostream>
#include <fstream>
#include <string>
#include<Windows.h>
int main()
{
    int i, j;
    std::string line;
    std::ifstream frames;
    frames.open("1.txt");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            std::getline(frames, line);
            std::cout << line + "\n";
        };
        Sleep(1000);
        system("cls");
    };
}

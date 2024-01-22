#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(nullptr));
    int x, y;

    cout << "Enter height and widht: ";
    cin >> x >> y;

    ofstream picture ("C:\\develop\\test\\build\\modul_20_task_2\\pic.txt");
    if (!picture.is_open())
    {
        cerr << "Error, file is not open:";
        return 1;
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            picture << rand() % 2;
        }
        picture << endl;
    }

    picture.close();
}
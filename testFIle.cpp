#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(nullptr));
    const short min = 1;
    const short max = 6;
    short roll1 = (rand() % (max-min+1)) + min;
    short roll2 = (rand() % (max-min+1)) + min;
    cout << "Roll 1: " << roll1 << endl << "Roll 2: " << roll2 << endl;
    return 0;
}
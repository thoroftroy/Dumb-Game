#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

//Main function
int main() 
{
    //Setup randomizer and such
    srand(time(nullptr)); //This seeds the randomizer
    //define min and max values as the range for the randomizer and then use the following function:
    //short randomNumber = (rand() % (max-min+1)) + min;
    cout << "What is your name? ";
    string playerName{};
    cin >> playerName;
    cout << "Hello there " << playerName << " it is nice to meet you!"<< endl;
    cout << "Let's get you some stats shall we..";

    short playerHealthMax{100};
    short playerHealthMin{50};
    short playerHealth = (rand() % (playerHealthMax-playerHealthMin+1)) + playerHealthMin;

    short playerDamageMax{6};
    short playerDamageMin{1};
    short playerDamage = (rand() % (playerDamageMax-playerDamageMin+1)) + playerDamageMin;

    short playerSpeedMax{3};
    short playerSpeedMin{1};
    short playerSpeed = (rand() % (playerSpeedMax-playerSpeedMin+1)) + playerSpeedMin;

    cout << "You have: " << endl << 
            "Health:" << playerHealth << endl << 
            "Damage:" << playerDamage << endl <<
            "Speed:" << playerSpeed << endl;

    cout << "So, " << playerName << ", are you happy with your stats? ";
    string happy{};
    cin >> happy;
    if(happy == "yes" | happy == "Yes")
    {
        cout << " Good" << endl;
    }else if(happy == "no" | happy == "No")
    {
       cout << "Well quit complaining" << endl;
    }else
    {
        cout << " okay?" << endl;
    }
    cout << "I don't care" << endl << "So let's move right along shall we?" << endl;

    //Don't close the program until the user hits a key
    cin.ignore(); //This will wait until a user hits a button
    return 0;
}
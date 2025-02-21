/*This header file includes the driver class which is used to create and initialize all the games once the program starts.
  The class wil hold the vector of game which is the purpose of the software, to hold data on video games that a user can use
  to help lesson the time it takes to search for a game. The admin will also use this class to update any game that is stored
  and also will be able to add any game they would like.
  The artifact was implemented on 4/22/2021 by John Houston and designed by all group members including Kimberly Hernandez, Sohail Adhikari, Parth Patel, John Houston
*/
#include "gameClass.h"
#include<vector>
#include<string>
#ifndef driver_h
#define driver_h

using namespace std;


//Driver class declaration
class driver
{
    private:           
        vector<gameClass> vectorGames;    //vector of gameclass objects
       
    public:
        driver();     //constructor

        vector<gameClass> getGameVector();   //returns vector to user interface to update vector of game objects

        void createNewGame(string, string, int, int, string, int, string);   //this is the function the admin will use to create a new game object

        int getVectorSize();    //this fucntion will return the size of the driver class vector of game objects


        //this is the constructor for  the driver class that initializes all the games and pushes them back into a driver vector
        driver()
        {
                gameClass pacman(�Pacman�, �NI�, 1980, 5, �Classic�, 4, �2D�);
                vectorGames.push_back(pacman);

                gameClass contra(�Contra�, �NI�, 1987, 8, �Classic�, 4, �2D�);
                vectorGames.push_back(contra);

                gameClass supermarioworld(�Super Mario World�, �NI�, 1990, 4, �Classic�, 24, �, �rT�);
                vectorGames.push_back(supermarioworld);

                gameClass csgo(CSGO, �PC�, 2012, 15, �FPS�, 4, �gN�);
                vectorGames.push_back(csgo);

                gameClass valorant(�Valorant�, �PC, 2020, 2, �FPS�, 4, gN);
                vectorGames.push_back(valorant);

                gameClass cod(�Black Ops�, �XB�, 2010, 40, �FPS�, 4, �gN�);
                vectorGames.push_back(cod);

                gameClass devilmaycry4(�Devil may cry 4�, �PS�, 2008, 85, �Action�, 4, �hH�);
                vectorGames.push_back(devilmaycry4);

                gameClass godofwar(�God of war�, �PS�, 2016, 30, �Action�, 4, �hH�);
                vectorGames.push_back(godofwar);

                gameClass skyrim(�Elder Scrolls v : Skyrim�, �XB�, 2011, 15, �Action�, 1, fY);
                vectorGames.push_back(skyrim);

                gameClass BOTW(�Zelda Breath of the wild�, �NI�, 2017, 49, �RPG�, 5, fY);
                vectorGames.push_back(BOTW);

                gameClass finalfantasy7(�Final Fantasy 7�, �PS�, 1997, 20, �RPG�, 2, tB);
                vectorGames.push_back(finalfantasy7);

                gameClass mariorpg(�Mario RPG�, NI, 1994, 17, �RPG�, 3, tB);
                vectorGames.push_back(mariorpg);

                gameClass ageofempires(�Age of Empires�, �PC�, 2020, 53, �Stratagy�, 4, rT);
                vectorGames.push_back(ageofempires);

                gameClass stellaris(�Stellaris�, �PC�, 2016, 40, �Strategy�, 4, �2D�);
                vectorGames.push_back(stellaris);

                gameClass xcom2(�Xcom 2�, �PS�, 2016, 50, �Strategy�, 4, gN);
                vectorGames.push_back(xcom2);

        }

        vector<gameClass> getGameVector()  //function to return a vector 
        {
            return vectorGames;
        }

        int getVectorSize()  //function to return the size of the vector of game objects
        {
            return vectorGames.size()
        }

        void createNewGame(string name, string hardware, int year, int price, string genre, int ratings, string attribute)  //this fucntion is used to when the admin wants to create a new game object to store in driver vector
        {
            gameClass objNewGame(name, hardware, year, price, genre, ratings, attribute);

            vectorGames.push_back(objNewGame);
        }

}   
        

#endif // !driver.h


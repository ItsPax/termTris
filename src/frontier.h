#ifndef FRONTIER_H

const int WIDTH = 10;
const int HEIGHT = 20;
const int TIME_TO_WAIT = 10; // units are in tenths of a second
const int NUM_BLOCKS = 7;

#include <string>

#define FRONTIER_H

class Frontier  {

    char blocks[WIDTH][HEIGHT];

public:
    // variables 
    bool shouldSpawn;
    bool isAlive[WIDTH][HEIGHT];
    int originX;
    int originY;


    //functions

    // general game logic
    void printFrontier(); // prints the frontier using iostream; cout
    void fillFrontierWithDots(); // fills frontier with dots
    void spawnBlock(); // spawns a pseudo-random block using rand()
    void turn(); // the game logic for each "step" of the game
    void drop(); // drops all blocks by 1
    void move(int,int,int,int); // moves all blocks from (i,j) to (x,y)
    void setAllDead(); // sets all blocks to dead
    void cleanLines(); // goes through every line, and if it finds a line of dead blocks (not '.'s) then it deletes that entire row
    void deleteAndShiftLine(int); // deletes and shifts line
    void fillLine(); // test function; fills one line at the bottom with a certain amount of blocks
    void moveAllAlive(int); // moves all alive according to the integer
    bool isAllowed(int); // checks to see if the movement is allowed
    	// instructions for isAllowed and moveAllALive
	// 	Pass in 0 to check left movement
	// 	Pass 1n 1 to check right movement
	// 	Pass in 2 to check down movement
    void checkRotationAndRotateAllAlive();
    // clockwise rotation
    bool isInBounds(int,int); // checks if the coordinates passed in (i,j) are in bounds
};

#endif

#include <iostream>

using namespace std;




struct Player
{
	char Name[20];
	int hp;
	int score;
	int posX;
	int posY;
	int vel;
};

void player()
{
	Player Ike;
	Ike.hp = 100;
	Ike.score = 1200;
	Ike.posX = 24;
	Ike.posY = 16;
	Ike.vel = 132;
}




struct rectangle
{
	int posX;
	int posY;
	int point1, point2, point3, point4;
	int colour;
};




int main();

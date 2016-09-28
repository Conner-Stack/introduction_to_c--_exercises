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
	float point1, point2, point3, point4;
	int colour;
};

struct player2
{
	char name[20];
	int score;


};


void second()
{
	rectangle rectangle = { 2.3f, 4.3f, -2.3f, -4.3f };

	player2 frank;

	cin >> frank.name >> frank.score;
	cout << frank.name << endl << frank.score << endl;

}


void playermult()
{

	player2 player[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> player[i].name >> player[i].score;




	}
	for (int i = 0; i < 5; i++)
	{
		cout << player[i].name << " " << player[i].score << endl;


	}


}
int main()
{
	playermult();

	system("pause");
	return 0;

}

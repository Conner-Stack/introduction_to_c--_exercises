#include "rps.h""



using namespace std;

void Application::Run()
{
	while (!gameover)
	{
		Update();
	}
	Shutdown();
}
void RockPaperScissors::Application() {};

void RockPaperScissors::Start()
{
	cout << "you have started the game" << endl;
	Run();
}


void RockPaperScissors::Update()
{
	
			srand(time(NULL));
			int rps = 0;
			int playerchoice;
			cout << "welcome to rock paper scissors \nTo play, please press 1 for rock, 2 for paper, or 3 for scissors" << endl;
				cin >> playerchoice;
				switch (playerchoice)
				{
				case 1:
		
					cout << "you have picked rock" << endl;
					rps = rand() % 3 + 1;
					break;
				case 2:
					cout << "you have picked paper" << endl;
					rps = rand() & 3 + 1;
					break;
				case 3:
					cout << "you have picked scissors" << endl;
					rps = rand() % 3 + 1;
					break;
				case 4:
					cout << "you have quit the game" << endl;
					Shutdown();
				}
				if (playerchoice == rps)
				{
					cout << "it's a tie!, try again." << endl;
				}
				else if (playerchoice == 1)
				{
					if (rps == 2)
						cout << "your opponent has chosen paper, you lose!" << endl;
					else if (rps == 3)
						cout << "your oppenent has chosen scissors, you win!" << endl;
		
				}
				else if (playerchoice == 2)
				{
					if (rps == 1)
						cout << "your opponent has chosen rock, you win!" << endl;
					else if (rps == 3)
						cout << "your opponent has chosen scissors, you lose!" << endl;
				}
				else if (playerchoice == 3)
				{
					if (rps == 1)
						cout << "your opponent has chosen rock, you lose!" << endl;
					else if (rps == 2)
					{
						cout << "your opponent has chosen paper, you win!" << endl;

					}
				}

}

void RockPaperScissors::Shutdown()
{
	cout << "game end" << endl;
	gameover = true;
}
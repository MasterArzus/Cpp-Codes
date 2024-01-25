#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
	class TicTacToe // 三连棋（就是三子棋）
	{
	public:
		TicTacToe(){ }

		/*bool checkChessInDirection(int direction, int continuousCount, int currentXCoordinate, int currentYCoordinate) {
			switch (direction)
				case 1: if (board[currentXCoordinate, currentYCoordinate] == board[currentXCoordinate + 1, currentYCoordinate]) {
				if (continuousCount == 3) {
					return true;
				}
				else {
				     return checkChessInDirection( direction, continuousCount + 1, currentXCoordinate + 1, currentYCoordinate);
				}
			    }
			    else {
				    return false;
			    }
		}
		*/
		void Juding3combols(int x, int y, bool &judge) {
			static int counter = 0;
			counter++;
			// judge for rows
			bool haswinner = false;
			for (int i = 0; i < 3; i++)
			{
				if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2])&& board[i][0] !=0)
				{
					judge = false;
					bool haswinner = true;
					cout << "Player " << board[i][0] << " wins !" << endl;
				}
			}

			// judge for columns
			for (int i = 0; i < 3; i++)
			{
				if ((board[0][i] == board[1][i]) && (board[1][i] == board[2][i])&& board[0][i] !=0)
				{
					judge = false;
					bool haswinner = true;
					cout << "Player " << board[i][0] << " wins !" << endl;
				}
			}

			// judge for lines
			if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])&& board[0][0] !=0)
			{
				judge = false;
				bool haswinner = true;
				cout << "Player " << board[0][0] << " wins !" << endl;
			}

			if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0])&& board[0][2] !=0)
			{
				judge = false;
				bool haswinner = true;
				cout << "Player " << board[0][0] << "wins !" << endl;
			}

			// judge no winner
			if ((haswinner == false)&&counter==9)
			{
				judge = false;
				cout << "\nTie (平局) this time." << endl;
			}

		}

		void playersmove() {
			bool playing = true;
			int counter = 0;
			int x = 1; // on x axis
			int y = 1; // on y axis

						// displaying the board
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cout << setw(3) << board[i][j];
				}
				cout << endl;
			}

			while (playing)  // curcus on
			{
				
				cout << "Now Player " << counter % 2 + 1 << " move on, enter as  x(—> This way)  y(| This way)  with the range of 1-3: \n ps: x y中间空一格" << endl;
	   Input:	cin >> x >> y;
				if ((x>0 && x<4)&& (y>0) && (y<4) && (board[x-1][y-1] == 0))
				{
					counter++;
					if (counter % 2 == 1)  // 0 is player 1
					{
						board[x-1][y-1] = 1;
					}
					else                   // 1 is player 2
					{
						board[x-1][y-1] = 2;
					}
				}
				else
				{
					cout << "Forbbidened enter, please try again:" << endl;
					goto Input;
				}

				// displaying the board
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						cout << setw(3) << board[i][j];
					}
					cout << endl;
				}
				Juding3combols(x,y,playing);
			}
		}

		~TicTacToe(){ }

	private:
		int board[3][3] = {};  //3*3 chessboard
		//const size_t rows = 3;
		//const size_t columns = 3;
		//array< array <int, columns>, rows> board{};   为什么此类中不允许声明static.
		//int Y = 1, X = 1; // 坐标

	};

	TicTacToe game1;
	cout << "Welcome to the game TicTacToe, players take turns to move.\n The one who get 3 combols will win the game.\n Wish you good luck! \n\n";
	game1.playersmove( );

}


#include "method.h"

void gotoxy(int x, int y) {
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

class GameBoard {
public:
	void DrawLine();
	void DrawStone(int x, int y, int player);
};

void GameBoard::DrawLine() {
	gotoxy(0, 0);
	cout << "┌─┬─┬─┬─┬─┬─┬─┐" << endl;
	cout << "│  │  │  │  │  │  │  │" << endl;
	cout << "├─┼─┼─┼─┼─┼─┼─┤" << endl;
	cout << "│  │  │  │  │  │  │  │" << endl;
	cout << "├─┼─┼─┼─┼─┼─┼─┤" << endl;
	cout << "│  │  │  │  │  │  │  │" << endl;
	cout << "├─┼─┼─┼─┼─┼─┼─┤" << endl;
	cout << "│  │  │  │  │  │  │  │" << endl;
	cout << "├─┼─┼─┼─┼─┼─┼─┤" << endl;
	cout << "│  │  │  │  │  │  │  │" << endl;
	cout << "├─┼─┼─┼─┼─┼─┼─┤" << endl;
	cout << "│  │  │  │  │  │  │  │" << endl;
	cout << "└─┴─┴─┴─┴─┴─┴─┘" << endl;
}

void GameBoard::DrawStone(int x, int y, int player) {
	gotoxy(y * 4 - 2, x * 2 - 1);
	switch (player) {
	case 1:
		cout << "X";
		break;
	case 2:
		cout << "O";
		break;
	default:
		break;
	}
}

class FourCounterGame {
private:
	int aStoneState[7][8];
	GameBoard aGameboard;
	int aTurn;
public:
	void InitGame();
	void DrawGameBoard();
	void DuringTurn();
	int CheckGameState();
	void Run();
};

void FourCounterGame::InitGame() {
	//srand(time(NULL));
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 8; j++) {
			aStoneState[i][j] = 0;
		}
	}
	//turn = rand() % 2 + 1;
	aTurn = 1;
}

void FourCounterGame::DrawGameBoard() {
	aGameboard.DrawLine();

	for (int i = 1; i < 7; i++) {
		for (int j = 1; j < 8; j++) {
			aGameboard.DrawStone(i, j, aStoneState[i][j]);
		}
	}
}

void FourCounterGame::DuringTurn() {
	DrawGameBoard();
	int inputNum, retry = 1;

	do {
		do {
			gotoxy(0, 13);
			cout << aTurn << "Player input : ";
			cin >> inputNum;
			gotoxy(0, 13);
			cout << aTurn << "                  ";
		} while (inputNum < 1 || inputNum > 7);

		int i;

		for (i = 1; i < 7; i++) {
			if (aStoneState[i][inputNum] != 0)
				break;
		}
		if (i != 1) {
			aStoneState[i - 1][inputNum] = aTurn;
			aTurn = aTurn % 2 + 1;
			retry = 0;
		}
	} while (retry == 1);
}

int FourCounterGame::CheckGameState() {
	int baseY = 1, baseX = 1;
	int tempY, tempX, overCount = 0;

	for (baseY = 1; baseY < 7; baseY++) {
		for (baseX = 1; baseX < 8; baseX++) {
			if (aStoneState[baseY][baseX] == 0)
				continue;
			//수평 방향
			tempY = baseY;
			tempX = baseX;
			while (baseX < 5 && aStoneState[baseY][baseX] == aStoneState[tempY][tempX++]) {
				overCount++;
				if (overCount == 4)
					return aStoneState[baseY][baseX];
			}
			overCount = 0;

			//수직 방향
			tempY = baseY;
			tempX = baseX;
			while (baseY < 4 && aStoneState[baseY][baseX] == aStoneState[tempY++][tempX]) {
				overCount++;
				if (overCount == 4)
					return aStoneState[baseY][baseX];
			}
			overCount = 0;

			//오른쪽 아래
			tempY = baseY;
			tempX = baseX;
			while (baseX < 5 && baseY < 4 && aStoneState[baseY][baseX] == aStoneState[tempY++][tempX++]) {
				overCount++;
				if (overCount == 4)
					return aStoneState[baseY][baseX];
			}
			overCount = 0;

			//오른쪽 위
			tempY = baseY;
			tempX = baseX;
			while (baseX > 3 && baseY < 4 && aStoneState[baseY][baseX] == aStoneState[tempY++][tempX--]) {
				overCount++;
				if (overCount == 4)
					return aStoneState[baseY][baseX];
			}
			overCount = 0;

		}
	}

	for (baseY = 1; baseY < 8; baseY++) {
		for (baseX = 1; baseX < 7; baseX++) {
			if (aStoneState[baseY][baseX] != 0)
				return -1;
		}
	}

	return 0;
}

void FourCounterGame::Run() {
	int final;
	system("cls");
	InitGame();
	do {
		DuringTurn();
		final = CheckGameState();
	} while (final == -1);

	DrawGameBoard();
	gotoxy(20, 15);
	switch (final) {
	case 0:
		cout << "비겼습니다!!" << endl;
		break;
	default:
		cout << final << "Player가 이겼습니다!!" << endl;
		break;
	}
}

void Effector::Problem17() {
	FourCounterGame fcg;
	fcg.Run();
}
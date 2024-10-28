#pragma once

struct Chess_pos
{
	int ROW;
	int COL;
};

typedef enum  {
	CHESS_BLACK = 1,
	CHESS_WHITE = -1,
	CHESS_NONE = 0
}chess_kind;

class chess
{
public:
	//初始化棋盘 
	void init();
	//判断是否为有效点击，并存储有效点击；
	bool clickboard(int x, int y, Chess_pos* pos);
	int getGradesize();//获取棋盘格的大小
	int getChessData(int x, int y);//获取指定位置的棋子类型
	int getChessData(Chess_pos* pos);//获取指定位置的棋子类型
	//在棋盘的指定位置落子
	void chessDown(Chess_pos* pos, chess_kind kind);
	bool checkOver();//判断游戏是否结束
};


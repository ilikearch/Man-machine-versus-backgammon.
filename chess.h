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
	//��ʼ������ 
	void init();
	//�ж��Ƿ�Ϊ��Ч��������洢��Ч�����
	bool clickboard(int x, int y, Chess_pos* pos);
	int getGradesize();//��ȡ���̸�Ĵ�С
	int getChessData(int x, int y);//��ȡָ��λ�õ���������
	int getChessData(Chess_pos* pos);//��ȡָ��λ�õ���������
	//�����̵�ָ��λ������
	void chessDown(Chess_pos* pos, chess_kind kind);
	bool checkOver();//�ж���Ϸ�Ƿ����
};


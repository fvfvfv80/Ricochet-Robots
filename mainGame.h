#pragma once
#include "gameNode.h"
#include "loadingScene.h"



#include "cRobotGame.h"
//==================================================================
//		## mainGame ## (���ΰ��� - �Ѱ� ������ ����)
//==================================================================

class mainGame : public gameNode
{
public:
	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	mainGame();
	~mainGame();
};


#pragma once
#include "Actions\Action.h"
#include"ApplicationManager.h"

class ScrambleFind : public Action
{
public:
	ScrambleFind(ApplicationManager *pApp);
	virtual void ReadActionParameters();
	virtual void Execute();
};

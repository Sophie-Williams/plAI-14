#pragma once
#include "Player.h"

class HumanPlayerWASD : public Player
{
public:
	void initialise(InformationProvider* info);
	RaftControls controlRaft(InformationProvider* info);
	void getTeamName(char teamName[]);
};


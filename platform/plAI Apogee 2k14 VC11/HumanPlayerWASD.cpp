#include "HumanPlayerWASD.h"
#include "VectorOps.h"

using namespace sf;

void HumanPlayerWASD::initialise(InformationProvider* info)
{

}

RaftControls HumanPlayerWASD::controlRaft(InformationProvider* info)
{
	RaftControls controls;

	Vector2f a = Vector2f(0,0);
	if (Keyboard::isKeyPressed(Keyboard::W)) a.y = -1;
	if (Keyboard::isKeyPressed(Keyboard::S)) a.y += 1;
	if (Keyboard::isKeyPressed(Keyboard::A)) a.x = -1;
	if (Keyboard::isKeyPressed(Keyboard::D)) a.x += 1;
	if (Keyboard::isKeyPressed(Keyboard::LControl)) controls.brake = true; else
	{
		controls.brake = false;
	}
	controls.thrust = a;

	if(Keyboard::isKeyPressed(Keyboard::Space))
	{
		controls.canonDirection = (Vector2f)Vector2i(rand(), rand());
	}
	else
	{
		controls.canonDirection = Vector2f(0, 0);
	}
	return controls;
}

void HumanPlayerWASD::getTeamName(char teamName[])
{
	strcpy_s(teamName, 256, "Manual Player WASD");
}
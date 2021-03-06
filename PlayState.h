#pragma once
#include <SFML/Graphics.hpp>
#include "GameState.h"

class PlayState : public GameState
{
public:
	void Init();
	void Cleanup();

	void Pause();
	void Resume();

	void HandleEvents(GameEngine* game);
	void Update(GameEngine* game);
	void Draw(GameEngine* game);

	static PlayState* Instance()
	{
		return &m_PlayState;
	}

protected:
	PlayState() { }

private:
	static PlayState m_PlayState;
};
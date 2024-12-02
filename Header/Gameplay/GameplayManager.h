#pragma once
#include "../../Header/Gameplay/Boundary/Boundary.h"
#include "../../Header/Gameplay/Ball/Ball.h"
#include "../../Header/Gameplay/Paddle/Paddle.h"
#include "../../Header/Event/EventManager.h"
using namespace Event;

namespace Gameplay
{
	class GameplayManager
	{
	private:
		float player1_position_x = 40.0f;
		float player1_position_y = 300.0f;

		float player2_postion_x = 1210.0f;
		float player2_postion_y = 300.0f;

		EventManager* event_manager;
		Boundary* boundary = new Boundary();
		Ball* ball = new Ball();
		Paddle* player1 = new Paddle(player1_position_x, player1_position_y);
		Paddle* player2 = new Paddle(player2_postion_x, player2_postion_y);

	public:
		GameplayManager(EventManager* manager);

		void CheckRoundState();

		void resetPlayers();

		void update();
		void render(RenderWindow* game_window);
	};
}
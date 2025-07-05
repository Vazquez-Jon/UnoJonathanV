//Jonathan Vazquez
// player.h

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "card.h"


class Player {
private:
	string name_ = "";
	vector<Card> cards_;

public:
	Player();
}

#endif  //PLAYER_H

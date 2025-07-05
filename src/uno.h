// Jonathan Vazquez
// uno.h


#ifndef UNO_H
#define UNO_H

#include <vector>

include "player.h"

class Uno {
private:
	vector<Player> players_;

public:
	Uno();
	int Run();

}

#endif // UNO_H

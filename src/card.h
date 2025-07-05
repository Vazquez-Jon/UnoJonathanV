// Jonathan Vazquez
// card.h

#ifndef CARD_H
#define CARD_H

class Card {
public:
	enum class CardColor {
		kRed,
		kGreen,
		kYellow,
		kBlue,
		kAll
	};
//	TODO: add in wild cards, ie +2, +4, reverse, no-turn, wild
	enum class CardValue {
		kOne, kTwo, kThree, kFour, kFive, kSix, kSeven, kEight, kNine
	}
	Card();
private:
	CardColor color;
	CardValue value;
}

#endif // CARD_H

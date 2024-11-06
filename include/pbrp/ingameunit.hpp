/*
	24.10.17
*/

#pragma once

#ifndef PBRP_INGAMEUNIT_HPP
#define PBRP_INGAMEUNIT_HPP

#include "defs.hpp"

namespace pbrp {

struct InGameField {

	state_t		mStateFlag;
	inning_t	mInningInfo;
	score_t		mHomeTeamScore;
	score_t		mAwayTeamScore;
	playerID_t	mBaseInfo[3];
	count_t		mBallCount;
	count_t		mStrikeCount;
	count_t		mOutCount;

};

class InGameUnit : protected InGameField {

public:

	state_t GetStateFlag() const;

	inning_t GetInningInfo() const;

	score_t GetHomeTeamScore() const;

	score_t GetAwayTeamScore() const;

	template <int baseNumber>
	playerID_t GetBaseInfo() const {
		return mBaseInfo[baseNumber - 1];
	}
	
	playerID_t GetBaseInfo(const int baseNumber) const;

	score_t GetBallCount() const;

	score_t GetStrikeCount() const;

	score_t GetOutCount() const;

};

}

#endif
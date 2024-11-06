/*
	24.10.17 
*/

#include "pbrp/ingameunit.hpp"

namespace pbrp {

state_t InGameUnit::GetStateFlag() const {
	return mStateFlag;
}

inning_t InGameUnit::GetInningInfo() const {
	return mInningInfo;
}
score_t InGameUnit::GetHomeTeamScore() const {
	return mHomeTeamScore;
}
score_t InGameUnit::GetAwayTeamScore() const {
	return mAwayTeamScore;
}

playerID_t InGameUnit::GetBaseInfo(const int baseNumber) const {
	
	return (baseNumber > 0 && baseNumber < 4) ?
		mBaseInfo[baseNumber - 1] : 0u;
}

score_t InGameUnit::GetBallCount() const {
	return mBallCount;
}
score_t InGameUnit::GetStrikeCount() const {
	return mStrikeCount;
}
score_t InGameUnit::GetOutCount() const {
	return mOutCount;
}

}
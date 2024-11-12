/*
	24.11.
*/

#include "pbrp/pregameunit.hpp"

namespace pbrp {

std::string PreGameUnit::GetStartTime() const {
	return mStartTime;
}

state_t PreGameUnit::GetPreStateFlag() const {
	return mPreStateFlag;
}

stadiumID_t PreGameUnit::GetStadiumID() const {
	return mStadiumID;
}

teamID_t PreGameUnit::GetHomeTeamID() const {
	return mHomeTeamID;
}

teamID_t PreGameUnit::GetAwayTeamID() const {
	return mAwayTeamID;
}

}
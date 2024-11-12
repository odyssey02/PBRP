/*
	24.11.
*/

#pragma once

#ifndef PBRP_PREGAMEUNIT_HPP
#define PBRP_PREGAMEUNIT_HPP

#include "defs.hpp"

namespace pbrp {

struct PreGameField {

	std::string mStartTime;
	state_t mPreStateFlag;
	stadiumID_t mStadiumID;
	teamID_t mHomeTeamID;
	teamID_t mAwayTeamID;

};

class PreGameUnit : protected PreGameField {

public:

	std::string GetStartTime() const;

	state_t GetPreStateFlag() const;

	stadiumID_t GetStadiumID() const;

	teamID_t GetHomeTeamID() const;

	teamID_t GetAwayTeamID() const;

};

}

#endif
/*
	24.10.17
*/

#pragma once

#ifndef PBRP_GAMEDATAUNIT_HPP
#define PBRP_GAMEDATAUNIT_HPP

#include "defs.hpp"
#include "networkunit.hpp"
#include "ingameunit.hpp"

namespace pbrp {

class GameDataUnit :
	public NetworkUnit,
	public InGameUnit
{

public:

	GameDataUnit(const char *);

	bool Update();

	state_t GetUnitState() const;

	const InGameField* GetInGameField() const;

private:
	state_t mUnitState;

};

}

#endif
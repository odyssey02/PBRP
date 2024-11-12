/*
	24.10.17
*/

#pragma once

#ifndef PBRP_GAMEDATAUNIT_HPP
#define PBRP_GAMEDATAUNIT_HPP

#include "defs.hpp"
#include "networkunit.hpp"
#include "ingameunit.hpp"
#include "pregameunit.hpp"

namespace pbrp {

class GameDataUnit :
	public NetworkUnit,
	public InGameUnit,
	public PreGameUnit
{

public:

	GameDataUnit(const char *);

	bool Update();

	state_t GetUnitState() const;

	const InGameField* GetInGameField() const;
	
	InGameField* DEBUG__GetInGameField();

	const PreGameField* GetPreGameField() const;

	PreGameField* DEBUG__GetPreGameField();

private:
	state_t mUnitState;

};

}

#endif
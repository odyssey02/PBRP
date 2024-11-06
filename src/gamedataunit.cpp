/*
	24.10.17
*/

#include "pbrp/gamedataunit.hpp"

namespace pbrp {

GameDataUnit::GameDataUnit(const char *const url) : NetworkUnit(url) {}

bool GameDataUnit::Update() {

	++mUnitState;

	return true;
}

state_t GameDataUnit::GetUnitState() const {
	return mUnitState;
}

const InGameField* GameDataUnit::GetInGameField() const {
	return static_cast<const InGameField*>(this);
}

}
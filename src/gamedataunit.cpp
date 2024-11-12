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

InGameField* GameDataUnit::DEBUG__GetInGameField() {
	return static_cast<InGameField*>(this);
}

const PreGameField* GameDataUnit::GetPreGameField() const {
	return static_cast<const PreGameField*>(this);
}

PreGameField* GameDataUnit::DEBUG__GetPreGameField() {
	return static_cast<PreGameField*>(this);
}

}
/*
	24.10.17
*/

#pragma once

#ifndef PBRP_NETWORKUNIT_HPP
#define PBRP_NETWORKUNIT_HPP

#include "defs.hpp"

namespace pbrp {

class NetworkUnit {

public:

	NetworkUnit(const char *const);

	~NetworkUnit();

	bool NetUpdate(void *, size_t);

	bool DEBUG_Update(void *, size_t, void *);

	state_t GetNetworkState() const;

private:

	std::vector<unsigned char> mBuffer;
	void *const mPtr;
	state_t mNetworkState;

};

}

#endif
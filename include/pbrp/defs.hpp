/*
	24.10.17
*/

#pragma once

#ifndef PBRP_DEFS_HPP
#define PBRP_DEFS_HPP

#include <cstdint>
#include <cstring>
#include <utility>
#include <vector>
#include <chrono>

namespace pbrp {

using state_t		= uint32_t;
using inning_t		= uint32_t;
using score_t		= uint32_t;
using count_t		= uint32_t;
using playerID_t	= uint32_t;
using teamID_t		= uint32_t;
using stadiumID_t	= uint32_t;

}

#endif
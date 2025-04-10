/*DataAcquisition.hpp*/

#pragma once

#include "rp.h"
#include "Common.hpp"

void initialize_acq();
void acquire_data(Channel &channel, rp_channel_t rp_channel);
void cleanup();
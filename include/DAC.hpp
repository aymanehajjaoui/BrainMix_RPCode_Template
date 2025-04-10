/*DAC.hpp*/

#pragma once

#include "Common.hpp"
#include <thread>
#include <atomic>
#include <type_traits>

void initialize_DAC();

// Templated version for flexible output types
template <typename T>
float OutputToVoltage(T value);

void dac_output_loop(Channel &channel, rp_channel_t rp_channel);

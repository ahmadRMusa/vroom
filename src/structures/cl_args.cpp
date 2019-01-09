/*

This file is part of VROOM.

Copyright (c) 2015-2018, Julien Coupey.
All rights reserved (see LICENSE).

*/

#include "structures/cl_args.h"

namespace vroom {
namespace io {

const unsigned CLArgs::max_exploration_level = 5;

// Default values.
CLArgs::CLArgs()
  : geometry(false), router(ROUTER::OSRM), nb_threads(4), exploration_level(5) {
}

} // namespace io
} // namespace vroom

//
// Created by milo on 25/02/2026.
//

#ifndef SAND_PARTICLE_H
#define SAND_PARTICLE_H

#include "DInt.h"

namespace Sand {
    class Particle {
    private:
        DInt::DInt pos = {};
    public:
        Particle(DInt::DInt nPos);
    };
} // Sand

#endif //SAND_PARTICLE_H
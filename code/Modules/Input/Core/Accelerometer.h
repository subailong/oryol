#pragma once
//------------------------------------------------------------------------------
/**
    @class Oryol::Accelerometer
    @brief returns device acceleration data
*/
#include "glm/vec3.hpp"

namespace Oryol {

class Accelerometer {
public:
    /// does the host platform provide acceleration data?
    bool Attached = false;
    /// acceleration vector including gravity in m/sec^2
    glm::vec3 Acceleration;
};

} // namespace Oryol
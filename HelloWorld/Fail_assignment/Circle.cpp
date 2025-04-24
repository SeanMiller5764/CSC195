#include "Circle.h"
#include <iostream>

    float Circle:: Area() {
        std::cout <<"Radius: " << GetRadius();
        return 3.14f * GetRadius() * GetRadius();
    }

    void Circle::SetRadius(float radius)  { m_radius = radius; }
    float Circle::GetRadius() { return Circle::m_radius; }

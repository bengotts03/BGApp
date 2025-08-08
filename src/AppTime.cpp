//
// Created by Ben Gotts on 08/08/2025.
//

#include "AppTime.h"
#include <GLFW/glfw3.h>

double Time::NormalTime = 0;
double Time::DeltaTime = 0;
double Time::PreviousNormalTime = 0;

void Time::Update() {
    NormalTime = glfwGetTime();

    DeltaTime = NormalTime - PreviousNormalTime;

    PreviousNormalTime = NormalTime;
}

//
// Created by Ben Gotts on 08/08/2025.
//

#ifndef BGAPP_APPTIME_H
#define BGAPP_APPTIME_H

class Time {
public:
    static double NormalTime;
    static double PreviousNormalTime;
    static double DeltaTime;

    static void Update();
};

#endif //BGAPP_APPTIME_H
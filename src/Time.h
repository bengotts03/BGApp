//
// Created by Ben Gotts on 03/08/2025.
//

#ifndef TIME_H
#define TIME_H

class Time {
public:
    static double NormalTime;
    static double PreviousNormalTime;
    static double DeltaTime;

    static void Update();
};

#endif //TIME_H
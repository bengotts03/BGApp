//
// Created by Ben Gotts on 03/08/2025.
//

#ifndef PERFORMANCE_H
#define PERFORMANCE_H

class Performance {
public:
    static float FPS;
    static float AverageFPS;

    static float MS;

    static void Update();
private:
    static double _timeDifference;
    static unsigned int _fpsCount;
    static double _previousTime;
};

#endif //PERFORMANCE_H

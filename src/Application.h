//
// Created by Ben Gotts on 03/08/2025.
//

#ifndef APPLICATION_H
#define APPLICATION_H

#include "Window.h"
#include <memory>

class Application {
public:
    static Window* AppWindow;

    void Start();
    void Update();
    void Shutdown();

    Window& GetWindow();
private:
    std::unique_ptr<Window> _window;
};

#endif //APPLICATION_H

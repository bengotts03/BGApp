//
// Created by Ben Gotts on 03/08/2025.
//

#ifndef WINDOW_H
#define WINDOW_H

#include <GLFW/glfw3.h>

class Window {
public:
    Window(unsigned int width, unsigned int height);
    ~Window();

    void Update();

    GLFWwindow* GetNativeWindow() const;

    unsigned int GetWindowWidth() const;
    unsigned int GetWindowHeight() const;
private:
    GLFWwindow* _window;
    unsigned int _width;
    unsigned int _height;
};

#endif //WINDOW_H
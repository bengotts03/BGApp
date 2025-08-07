//
// Created by Ben Gotts on 03/08/2025.
//

#include "Application.h"
#include "Window.h"
#include "Input.h"
#include "Performance.h"
#include "Time.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 800

void Application::Start() {
    _window = std::make_unique<Window>(SCREEN_WIDTH, SCREEN_HEIGHT);

    Time();
    Performance();
    Input::Init(_window.get());
}

void Application::Update() {
    Time::Update();
    Performance::Update();
    Input::UpdateStates();

    _window->Update();
}

void Application::Shutdown() {
}

Window& Application::GetWindow() {
    return *_window;
}
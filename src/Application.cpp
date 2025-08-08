//
// Created by Ben Gotts on 03/08/2025.
//

#include "Application.h"
#include "Window.h"
#include "Input.h"
#include "Performance.h"
#include "AppTime.h"

namespace BGAppCore {

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 800

    Application* Application::_instance;

    Application::Application() {
        if (_instance == nullptr)
            _instance = this;

        _isRunning = true;

        _window = std::make_unique<Window>(SCREEN_WIDTH, SCREEN_HEIGHT);

        Time();
        Performance();
        Input::Init(_window.get());
    }

    Application::~Application() {

    }

    void Application::Start() {
        for (auto& layer: _runtimeLayers) {
            layer->Start();
        }

        while (_isRunning) {
            Time::Update();
            Performance::Update();
            Input::UpdateStates();

            for (auto& layer: _runtimeLayers) {
                layer->Update();
            }

            _window->Update();
        }

        for (auto& layer: _runtimeLayers) {
            layer->Shutdown();
        }
    }

    Window& Application::GetWindow() {
        return *_window;
    }

    void Application::AddLayer(RuntimeLayer* layer) {
        _runtimeLayers.emplace_back(layer);
    }

    void Application::RemoveLayer(RuntimeLayer* layer) {
        _runtimeLayers.erase(std::find(_runtimeLayers.begin(), _runtimeLayers.end(), layer));
    }
}

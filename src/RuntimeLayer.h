#pragma once

class RuntimeLayer {
public:
    virtual ~RuntimeLayer() = default;

    virtual void Start();
    virtual void Update();
    virtual void Shutdown();
};

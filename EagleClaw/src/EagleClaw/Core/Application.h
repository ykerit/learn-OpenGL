#pragma once

#include "EagleClaw/Core/ApplicationEvent.h"
#include "EagleClaw/Core/Base.h"
#include "EagleClaw/Core/Event.h"
#include "EagleClaw/Core/LayerStack.h"
#include "EagleClaw/Core/window.h"

int main();

namespace EagleClaw
{
    class Application
    {
    public:
        Application(const std::string& name);

        virtual ~Application();

        void OnEvent(Event& event);
        void PushLayer(Layer* layer);
        void PushLayerOverlay(Layer* layer);

        Window& GetWindow() { return *window_; }

        void Close() { running_ = false; }
        void Run();

        static Application& Get() { return *instance_; }

    private:
        bool OnWindowClose(WindowCloseEvent& e);
        bool OnWindowResize(WindowResizeEvent& e);

        std::unique_ptr<Window> window_;
        LayerStack stack_;
        bool running_ = true;
        static Application* instance_;
        friend int ::main();
    };

    Application* CreateApplication();
}  // namespace EagleClaw
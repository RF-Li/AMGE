#pragma once
#include "Core.h"

namespace AMGE
{ 
    class AMGE_API Application
    {
    public:
        Application();
        virtual ~Application();
        void Run();
    };

    Application* CreateApplication();
}


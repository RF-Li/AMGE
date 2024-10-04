#include <AMGE.h>
class SandBox :public AMGE::Application
{
public:
    SandBox()
    {
    }
    ~SandBox()
    {
    
    }
};

AMGE::Application* AMGE::CreateApplication()
{
    return new SandBox();
}
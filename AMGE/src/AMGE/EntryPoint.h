#pragma once
#ifdef AMGE_PLATFORM_WINDOWS
extern AMGE::Application* AMGE::CreateApplication();


int main(int argc, char** argv)
{
    printf("AMGE engine!");
    auto app = AMGE::CreateApplication();
    app->Run();
    delete app;

    return 0;
}
#endif // 

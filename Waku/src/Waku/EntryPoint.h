#pragma once
#ifdef WK_PLATFORM_WINDOWS

extern Waku::Application* Waku::CreateApplication();

int main(int argc,char** argv) {
	printf("Waku Engine");
	auto app = Waku::CreateApplication();
	app->Run();
	delete app;
}
#else
	#error Waku only supports on Windows!
#endif
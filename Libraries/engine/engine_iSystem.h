#pragma once

#include <string>
#include <vector>

namespace engine
{
	class Monitor;
	class Window;
}

namespace engine
{
	class iSystem
	{
		iSystem();
		virtual ~iSystem() {}
		virtual int Init(void) = 0;
		virtual double GetTime(void) const = 0;
		virtual uint64_t GetTimerFrequency(void) = 0;
		virtual uint64_t GetTimerValue(void) = 0;

		virtual void PollEvents(void) = 0;
		virtual void PostEmptyEvent(void) = 0;
		virtual void SetTime(double time) = 0;
		virtual void SwapInterval(int interval) = 0;
		virtual void Terminate(void) = 0;
		virtual void WaitEvents(void) = 0;
		virtual void WaitEventsTimeout(double timeout) =0;
		virtual void WindowHint(int hint, int value) = 0;
		virtual void DefaultWindowHints(void) = 0;
		virtual engine::Monitor& GetPrimaryMonitor(void) = 0;
		virtual std::vector<engine::Monitor> GetMonitors(void) = 0;
		virtual engine::Window & CreateWindow(	
												int width, 
												int height, 
												const std::string& title, 
												const engine::Monitor & monitor, 
												const engine::Window* share) = 0;

		virtual engine::Window& GetCurrentContext(void) = 0;
	};

}
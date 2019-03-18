#pragma once

#include <windows.h>

class Timer
{
public: 
	Timer()
	{
		QueryPerformanceFrequency(&fre);
	}
	void timerStart()
	{
		QueryPerformanceCounter(&start);
	}
	void timerEnd()
	{
		QueryPerformanceCounter(&end);
		intervalUs = (
			(double)end.QuadPart - (double)start.QuadPart
			) / (double)fre.QuadPart;
	}
	double intervalMs() const
	{
		return intervalUs * 1000;
	}
private:
	double intervalUs;
	LARGE_INTEGER start;
	LARGE_INTEGER end;
	LARGE_INTEGER fre;
};
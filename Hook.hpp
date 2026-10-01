#pragma once
#include <Windows.h>
#include<thread>
#include <atomic>
#include <atomic>

class Hook {
public:



	Hook();

	~Hook();

	void Strat();	

	void Stop();

private:
	void Run();
	void PollXboxController();
	void PollXboxController();

	std::atomic<bool> isExist;
	std::thread *xboxThread;

	static LRESULT CALLBACK KeyboardHookProc(int nCode, WPARAM wParam, LPARAM lParam);

	static LRESULT CALLBACK MouseHookProc(int nCode, WPARAM wParam,  LPARAM lParam);

	static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam,LPARAM lParam);

	HWND m_hWnd;

	std::thread *th;

};

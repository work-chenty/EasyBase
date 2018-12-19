#include "../Inc/Task.h"

HANDLE hMutex = NULL;

DWORD WINAPI CallBackFun( LPVOID lpParameter )
{
	WaitForSingleObject(hMutex, INFINITE);

	OnRunTask();

	ReleaseMutex(hMutex);
}

CTask::CTask()
{
	m_hThread = NULL;
}

void CTask::ActivateTask()
{
	m_hThread = CreateThread(NULL, 0, CallBackFun, NULL, 0, NULL);
}

void CTask::StopTask()
{
	CloseHandle(m_hThread);
}

CTask::~CTask()
{

}
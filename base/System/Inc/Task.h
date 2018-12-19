/**
  * @file   Task.h
  * @brief Thisis a brief description.
  * @author ChenTY
  * @par   Copyright (c):
  *          ChenTY.
  *         All Rights Reserved
  * @date   2018:12:19 
  *  @note   mattersneeding attention
  *  @version <version  number>
  */ 

#ifndef Task_h__
#define Task_h__

#include "Sys_export.h"
#include <Windows.h>
/**
  * @class <CTask>
  *  @brief  Simple Task , just inheritate it.
  *  @note   
 */

DWORD WINAPI CallBackFun(LPVOID lpParameter);

class Sys_export_dll CTask
{
public:
	CTask();
	virtual ~CTask();

	/*
	*  @function : ActivateTask
	*  @brief    : start thread
	*  @input	 : void
	*  @output	 : void
	*  @return   : void
	*  @author   : ChenTY
	*  @date     : 2018/12/19
	*/
	void ActivateTask();
	
	/*
	*  @function : StopTask
	*  @brief    : stop thread
	*  @input	 : void
	*  @output	 : void
	*  @return   : void
	*  @author   : ChenTY
	*  @date     : 2018/12/19
	*/
	void StopTask();

	/*
	*  @function : OnRunTask
	*  @brief    : Callback func interface
	*  @input	 : void
	*  @output	 : void
	*  @return   : void
	*  @author   : ChenTY
	*  @date     : 2018/12/19
	*/
	virtual void OnRunTask() = 0;

private:
	HANDLE m_hThread;	///< Thread handle
};

#endif // Task_h__

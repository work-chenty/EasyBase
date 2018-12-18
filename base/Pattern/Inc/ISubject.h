/**************************************************************************
	*  @Copyright (c) 2018, ChenTY, All rights reserved.
	*  @file	 : ISubject.h
	*  @version  : ver 1.0
    *  @author   : ChenTY
    *  @date     : 2018/12/18 23:21
    *  @brief    : Abstract subject for Observer
**************************************************************************/

#ifndef ISubject_h__
#define ISubject_h__

#include <vector>
#include "IObserver.h"

class ISubject: std::vector<IObserver*>
{
public:
	typedef std::vector<IObserver*>::iterator vecIter;

	virtual ~ISubject(){}
	/*
	*  @function : AttachObser
	*  @brief    : Add an Observer
	*  @input	 : IObserver*
	*  @output	 : void
	*  @return   : void
	*  @author   : ChenTY
	*  @date     : 2018/12/18
	*/
	void AttachObser(IObserver* pObser);

	/*
	*  @function : DetachObser
	*  @brief    : Remove An Observer
	*  @input	 : IObserver*
	*  @output	 : void
	*  @return   : void
	*  @author   : ChenTY
	*  @date     : 2018/12/18
	*/
	void DetachObser(IObserver* pObser);

	/*
	*  @function : OnNotify
	*  @brief    : Notify all observers
	*  @input	 : void
	*  @output	 : void
	*  @return   : void
	*  @author   : ChenTY
	*  @date     : 2018/12/18
	*/
	void OnNotify();

protected:
	ISubject(){}
};
#endif // ISubject_h__
/**************************************************************************
	*  @Copyright (c) 2018, ChenTY, All rights reserved.
	*  @file	 : IObserver.h
	*  @version  : ver 1.0
    *  @author   : ChenTY
    *  @date     : 2018/12/18 23:18
    *  @brief    : Abstract Observer class
**************************************************************************/
#ifndef IObserver_h__
#define IObserver_h__

class IObserver
{
public:
	virtual ~IObserver(){}
	virtual void Update() = 0;

protected:
	IObserver(){}
};
#endif // IObserver_h__
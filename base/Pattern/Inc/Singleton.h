/**************************************************************************
	*  @Copyright (c) 2018, ChenTY, All rights reserved.
	*  @file	 : Singleton.h
	*  @version  : ver 1.0
    *  @author   : ChenMH
    *  @date     : 2018/12/18 23:05
    *  @brief    : Singleton Pattern
**************************************************************************/
#ifndef Singleton_h__
#define Singleton_h__

/*
*  @function :  DECLARE_SINGLETON
*  @brief    :	Singleton macro used in class declaration
*  @input	 :  ClassName
*  @output	 :
*  @return   :	
*  @author   :	ChenTY
*  @date     :	2018/12/18
*/
#define DECLARE_SINGLETON(ClassName) \
	static ClassName* InitInstance()\
	{\
	static ClassName m_handle;\
	return &m_handle;\
}

#endif // Singleton_h__


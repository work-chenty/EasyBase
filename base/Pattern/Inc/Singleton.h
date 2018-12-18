/**
  * @file   Singleton.h
  * @brief Thisis a brief description.
  * @author ChenTY
  * @par   Copyright (c):
  *          ChenTY.
  *         All Rights Reserved
  * @date   2018:12:19 
  *  @note   mattersneeding attention
  *  @version <version  number>
  */ 

#ifndef Singleton_h__
#define Singleton_h__

#define DECLARE_SINGLETON(ClassName) \
	static ClassName* InitInstance()\
	{\
	static ClassName m_handle;\
	return &m_handle;\
}

#endif // Singleton_h__


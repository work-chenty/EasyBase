/**
  * @file   IObserver.h
  * @brief Thisis a brief description.
  * @author ChenTY
  * @par   Copyright (c):
  *          ChenTY.
  *         All Rights Reserved
  * @date   2018:12:19 
  *  @note   mattersneeding attention
  *  @version <version  number>
  */ 
#ifndef IObserver_h__
#define IObserver_h__

/**
  * @class <IObserver>
  *  @brief  Abstract Observer.
  *  @note   nothing
 */
class IObserver
{
public:
	virtual ~IObserver(){}
	virtual void Update() = 0;

protected:
	IObserver(){}
};
#endif // IObserver_h__
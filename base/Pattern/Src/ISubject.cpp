#include "../Inc/ISubject.h"

void ISubject::AttachObser(IObserver* pObser)
{
	push_back(pObser);
}

void ISubject::DetachObser(IObserver* pObser)
{
	for (vecIter iter = this->begin(); iter != this->end() ; iter++)
	{
		if ((*iter) == pObser)
		{
			this->erase(iter);
		}
	}
}

void ISubject::OnNotify()
{
	for (int i = 0; i < this->size(); i++)
	{
		if ((*this)[i] != NULL)
		{
			(*this)[i]->Update();
		}
	}
}
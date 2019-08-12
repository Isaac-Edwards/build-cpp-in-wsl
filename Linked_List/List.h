#ifndef LIST_H
#define LIST_H

#include "Link.h"

class List
{
public:
  List(const int& firstElement);

  Link addLink(const int& element);

private:
  Link* m_currentLink; // Do we need this?
  Link* m_firstLink;
  Link* m_lastLink;
};

#endif
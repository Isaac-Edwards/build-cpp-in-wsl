#include "List.h"
#include "Link.h"
#include <memory>

List::List(const int& firstElement)
{
  auto elem = Link(firstElement);

  m_currentLink = &elem;
  m_firstLink = m_firstLink;
  m_lastLink = m_firstLink;
}

Link List::addLink(const int& element)
{
// todo
}
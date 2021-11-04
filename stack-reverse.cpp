#include "Header.h"

bool stack::reverse(stack s1)
{
	stack s2;
	stack s3;
	while (!s1.IsEmpty())
	{
		s2.push(s1.pop());
	}
	while (!s2.IsEmpty())
	{
		s3.push(s2.pop());
	}
	while (!s3.IsEmpty())
	{
		s1.push(s3.pop());
	}
	return true;
}
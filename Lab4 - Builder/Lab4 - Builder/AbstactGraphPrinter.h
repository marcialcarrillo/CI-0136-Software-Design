#pragma once

#include "TagElement.h"


class AbstractGraphPrinter
{
public:
	virtual void print_tag_element(TagElement element)  = 0;
	virtual void print_tag_start()  = 0;
	virtual void print_tag_end()  = 0;
	virtual void print_spacing()  = 0;
	virtual void print_sub_element()  = 0;

};
/*
 * SchedAction.h
 *
 *  Created on: 2014��11��7��
 *      Author: Thoughtworks
 */

#ifndef SCHEDACTION_H_
#define SCHEDACTION_H_
#include "../Common/Role.h"
#include "../Common/CommonDefine.h"

class Event;
DEF_ROLE(SchedAction)
{
public:
	ABSTRACT(Status exec());
	ABSTRACT(Status handleEvent(const Event&));
};

#endif /* SCHEDACTION_H_ */

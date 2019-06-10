//CS 271
// structDefs.h
// Date: Nov 29, 2018
// Author: benja
//*insert description here*

#ifndef STRUCTDEFS_H_
#define STRUCTDEFS_H_

struct date {

	int month;
	int day;
	int year;

};

struct time {

	int hour;
	int month;
	int year;

};

struct event {

	struct date * eventDate;

	struct time * eventTime;

};

typedef struct date Date;

typedef struct time Time;

typedef struct event Event;

typedef struct Event * EventPtr;



#endif /* STRUCTDEFS_H_ */

#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>

#define C8_DEBUG(fmt, ...) \
	do { fprintf(stderr, "%s:%d:%s(): "fmt, __FILE__, __LINE__, \
			__func__, __VA_ARGS__); } while (0)

#endif

/*
*  3iRoboticsLIDAR System
*  Driver Interface
*
*  Copyright 2017 3iRobotics
*  All rights reserved.
*
*	Author: 3iRobotics, Data:2017-04-06
*
*/

#ifndef ARCH_LINUX_H
#define ARCH_LINUX_H

// libc dep
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <time.h>
#include <stdarg.h>

// libc++ dep
#include <iostream>
#include <string>

// linux specific
#include <unistd.h>
#include <errno.h>
#include <pthread.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/select.h>
#include <time.h>
#include <termios.h>

#include "timer.h"

#endif

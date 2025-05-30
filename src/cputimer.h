//
// Created by Alex on 5/26/2025.
//

#ifndef SRC__CPUTIMER_H_
#define SRC__CPUTIMER_H_
#include <sys/time.h>
struct CPUTimer
{
  timeval beg, end;
  CPUTimer() {}
  ~CPUTimer() {}
  void start() {gettimeofday(&beg, NULL);}
  double stop() {gettimeofday(&end, NULL); return end.tv_sec - beg.tv_sec + (end.tv_usec - beg.tv_usec) / 1000000.0;}
};
#endif //SRC__CPUTIMER_H_

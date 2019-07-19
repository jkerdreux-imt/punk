#include <time.h>
#include <sys/time.h>
#include <stdio.h>


int clock_gettime(clockid_t clk_id,struct timespec *res)
{
  res->tv_sec = 200;
  res->tv_nsec = 0;
  return(0);
}


int gettimeofday(struct timeval *tv, struct timezone *tz)
{
  tv->tv_sec = 200;
  tv->tv_usec = 0;
  return(0);
}



time_t time(time_t *t)
{
  if (t)
    {
      *t = 200;
    }

  return(10);
}

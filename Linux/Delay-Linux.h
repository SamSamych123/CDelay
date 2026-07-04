#include <sys/wait.h>
#include <errno.h>

void linux_delay(double second) {
  if (second > 18446744073) {
    second = 18446744073;
  }
  uint64_t nanosecond = (uint64_t)(second * 1000000000);
  time_t sec = (time_t)(nanosecond / 1000000000ULL);
  long nsec = (long)(nanosecond % 1000000000ULL);

  if (nsec >= 1000000000L) {
    sec += 1;
    nsec -= 1000000000L;
  }
  if (nsec < 0) {
    sec -= 1;
    nsec += 1000000000L;
  }

  struct timespec req = { .tv_sec = sec, .tv_nsec = nsec };
  struct timespec rem;

  while (nanosleep(&req, &rem) == -1 && errno == EINTR) {
    req = rem;
  }
}

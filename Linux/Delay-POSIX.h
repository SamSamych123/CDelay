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

void delay_not_restrictions(double seconds) {
  if (seconds >= 18446774073 && seconds <= 36893548146) {
    delay(seconds - (seconds - 18446774073));
    delay(seconds - 18446774073);
  }
  else if (seconds >= 36893548146 && seconds <= 55340322219) {
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - 18446774073);
  }
  else if (seconds >= 55340322219 && seconds <= 73787096292) {
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - 18446774073);
  }
  else if (seconds >= 73787096292 && seconds <= 92233870365) {
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - 18446774073);
  }
  else if (seconds >= 92233870365 && seconds <= 110680644438) {
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - 18446774073);
  }
  else if (seconds >= 110680644438 && seconds <= 129127418511) {
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - 18446774073);
  }
  else if (seconds >= 129127418511 && seconds <= 147574192584) {
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - 18446774073);
  }
  else if (seconds >= 147574192584 && seconds <= 166020966657) {
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - 18446774073);
  }
  else if (seconds >= 166020966657 && seconds <= 184467740730) {
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - (seconds - 18446774073));
    delay(seconds - 18446774073);
  }
}

#include <stdio.h>
#include "mktime.h"

int main()
{
  uint32_t ts = unix_time_in_seconds( 6, 53, 16, 22, 11, 2015 );
  printf( "%d\n", ts );
}

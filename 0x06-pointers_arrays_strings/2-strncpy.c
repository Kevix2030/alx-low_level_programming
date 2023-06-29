#include "main.h"
#include <stdio.h>

/**
  * _strncpy - Copy a string
@@ -23,3 +22,12 @@ while (a < n && src[a])
dest[a] = src[a];
a++;
}

while (a < n)
{
dest[a] = '\0';
a++;
}

return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[150];

   strcpy( command, "cd /home/mike/web-minecraft/java/bukkit_command && ./run_unix.sh" );
   system(command);

   return(0);
} 

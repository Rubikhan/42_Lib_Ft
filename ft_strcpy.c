#include "libft.h"

/*
**excuse me what is the difference between dst and &dst[0]
**fails if take out save and try to manipulate dst directly
*/

 char* ft_strcpy(char* dst, const char* src)   
   {   

 	  char* save; 
 	  save = dst; 

       while ((*save++ = *src++))   
           ;   


       return (&dst[0]);   

   }   


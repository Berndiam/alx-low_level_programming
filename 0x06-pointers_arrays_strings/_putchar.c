#include "main.h"                                                                                                                  
#include <unistd.h>                                                                                                                     
                                                                                                                                        
/**                                                                                                                                     
 * _putchar - This writes the char c to stdout                                                                                          
 * @c: The actual char to be printed                                                                                              
 *                                                                                                                                      
 * Return: 1 on success.                                                                                    
 * On error, the return should be -1, and errno is set correctly.
 */                                                                                                    
int _putchar(char c)                                                                                                                    
{                                                                                                                                       
        return (write(1, &c, 1));                                                                                                       
}

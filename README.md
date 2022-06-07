# My_printf
The goal of this project is to recode the printf function from the C library according to the C99 standard. The function should be prototyped like the printf function.  
We do not have to implement the C library printf buffer handling.
We must process all printf formating flags except the following (which are optional):  
• float or double types management  
• %n flag management  
• " * " , " ’ " and " I " (capital i) flags management  
We must add a %b formating flag, which prints unsigned numbers in a binary base.
We must also add a %S formating flag, which prints a character string (like %s). However, non-printable
characters (ASCII value strictly smaller than 32 or greater or equal than 127) must be represented by a backslash to be followed by the character’s value in octal base.
The only system functions allowed are malloc, free and write.
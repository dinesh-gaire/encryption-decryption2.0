# encryption-decryption2.0
This is a mini project of C-programming for encryption and decryption of strings and files.

1. Header Files and Preprocessor Directives:

The code begins by including essential header files (stdio.h, stdlib.h, string.h, time.h) that provide various functions for input/output, memory allocation, string manipulation, and time-related operations.
Preprocessor directives define default USERNAME and PASSWORD values used for user authentication.


2. User Authentication Function (authenticate):

This function verifies user authentication.
It prompts the user to enter a username and password.
Compares the entered credentials with the predefined ones (USERNAME and PASSWORD).
If the entered credentials match, it prints "Authentication successful" and returns 1. Otherwise, it prints "Authentication failed" and returns 0.

3. Encryption and Decryption Functions:

These functions are placeholders for actual encryption and decryption operations.
encryptString and decryptString perform encryption and decryption on strings using a technique (like the Caesar cipher, not fully implemented here).
encryptFile and decryptFile perform similar operations but on files.

4. Logging Operations (logOperation):

This function logs encryption and decryption operations to a file named history.log.
It opens the log file in append mode ("a").
Captures the current timestamp using time and formats it using ctime.
Removes the newline character from the timestamp and appends the operation and file name.
Closes the log file.

5. Main Function:

The main entry point of the program.
Calls the authenticate function to verify user authentication.
If authentication fails, prints an error message and exits the program.
Initializes variables for user choices, encryption key, text storage, and file names.
Enters a do-while loop for user interaction.
Displays a menu of options (encrypt/decrypt strings/files, exit).
Depending on the user's choice, it calls relevant functions and logs the operations.
The loop continues until the user chooses to exit (choice 5).

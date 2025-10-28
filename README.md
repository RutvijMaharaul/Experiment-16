# Experiment-16
Aim: To understand and implement exception handling in C++ to manage runtime errors effectively using try, throw, and catch blocks.

Software Required: Visual Studio

Theory: Exception Handling in C++ is a mechanism to handle runtime errors, allowing a program to continue execution even when an error occurs. In C++, exception handling is performed using three main components: try block: Contains the code that might throw an exception. throw statement: Used to throw an exception when an error occurs. catch block: Catches the thrown exception and handles it appropriately. This mechanism helps in making the program more robust by preventing it from crashing due to unexpected errors. Instead of allowing the program to terminate abruptly, we catch exceptions, manage them properly, and possibly take corrective actions.

C++ uses the following syntax for exception handling: try: A block of code that is tested for errors while it is being executed. throw: A statement used to throw an exception when an error occurs. catch: A block of code that handles exceptions.

Types of Exceptions: Standard exceptions: These are exceptions that arise from standard C++ library functions like std::out_of_range or std::invalid_argument. User-defined exceptions: These exceptions are defined by the programmer to handle specific scenarios.

Advantages of Exception Handling: Separation of error handling code from regular code: Exception handling allows error handling code to be written separately, which enhances code readability and maintainability. Handling multiple types of errors: Multiple catch blocks can be used to catch different types of exceptions. Ensures program stability: Exceptions provide a clean way to handle errors and avoid program crashes.

Concepts Covered: try block: Contains code that may throw an exception. throw statement: Used to throw an exception. catch block: Handles exceptions thrown by the try block. Standard exceptions: Handling predefined exceptions like division by zero or out-of-range errors. User-defined exceptions: Thrown and caught based on programmer-defined logic.

Algorithms:

Array Index Handling Using Exception: Input: A number representing an index in an array. Process: Ask the user to input an index for an array. Check if the index is within bounds (0-4). If the index is invalid, throw an exception. If valid, display the value at that index. Output: Value at the valid index or error message for invalid index.

Square Root Calculation with Exception Handling: Input: A number for which the square root needs to be calculated. Process: Ask the user to input a number. If the number is negative, throw an exception. If the number is valid, calculate and display its square root. Output: The square root of the number or an error message if the number is negative.

Conclusion: In this experiment, we learned how to use exception handling in C++ to manage errors effectively. We explored the use of the try, throw, and catch blocks to catch and handle exceptions gracefully, ensuring that the program continues to execute even in the presence of errors. We implemented two real-world scenarios: handling invalid array indices and calculating the square root of a number, both of which demonstrated the power of exception handling in making programs more robust and reliable. By using exception handling, we were able to: Prevent program crashes due to runtime errors. Separate error handling code from the regular code, improving code clarity. Handle various types of errors in a controlled manner.

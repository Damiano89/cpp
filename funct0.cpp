/*
 * Write as a comment in program: what does "pass by value" and "pass by reference" mean? How to pass by reference?
 *
 * The pass by value method, the compiler copies the exact value of an argument into the parameter of the function.
 * The parameter is initialized with the value of the passed argument.
 * Any changes made to the parameter inside the function have no effect on the argument.
 *
 * The pass by reference method, means to pass the reference of an argument in the calling function
 * to the corresponding formal parameter of the called function.
 * The value of the argument can be modified from the called function, by using its reference.
 *
 * How to pass by reference?
 * The reference parameter are initialized with the actual argument when the function is called.
 * This method is more efficient than the pass by value, because it does not copy the arguments.
 *
 */
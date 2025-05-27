Exercise 2.9 : Explain the following definitions.For those that are illegal,
    explain what’s wrong and how to correct it.
    

    //invalid suntax can't daclare variable in input operation first You will take variable than take input
(a)std::cin >> int input_value;

//we declare variable type as int and store values in float and use narrowing conversion to never loss data. its also an error
(b) int i = {3.14};


// ivalid syntax wage variable is not declare so delare it first than sign value 
(c) double salary = wage = 9999.99;


//solution
double wage ;
double salary=wage=9999.99

//No error  it truncate it and output is 3
(d) int i = 3.14;

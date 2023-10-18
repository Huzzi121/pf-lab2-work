
# Computer Science I 
## Lab 2.0 Worksheet

Name(s) and Login(s):



1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.
the program has errors.it is giving me You are 0 years, 0 weeks, and 0 days old today



2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?
the program has error. according to this input the program is also giving me You are 0 years, 0 weeks, and 0 days old today



3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.
the program does not run!



4. Complete all the size and range entries below.

* `char`
  size: 1 bytes
  range: -128 to 127
* `short int`
  size: 2 bytes
  range:-32768 to 32767
* `int`
  size: 4 bytes
  range:-2147483648 to 2147483647
* `long int`
  size:4
  range:2147483647 to -2147483648
* `float`
  size:4
  range: 7 digits of accuracy
* `double`
  size:8
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25
  your fee for the exchange is 25.0%
  you get:
  88.96 GBP
  14374.99 JPY

  b) $1,000.52
  your fee for the exchange is 100.1%
  you get:
  355.68 GBP
  57472.37 JPY
  c) $968,410.12
  your fee for the exchange is 96841.0%
  you get:
  344269.80 GBP
  55627898.32 JPY


6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?
  we will not be able to do it because according to
  my logic i am using /100 to find the percentage 
  and because of that we are limited to using float 
  or double values.



7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?
i get 0.000000. This is wrong.


b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?
i again get 0.000000 this is wrong also but when i changed 1/2 by 0.5 the program worked fine.

c) Fix the program by editing the `area.c` source
code so that the program produces correct results.
i changed the 1/2 in the program to 0.5 and it instantly worked fine.

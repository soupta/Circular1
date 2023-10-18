# Circular1

Problem form PBinfo.ro #4097

https://www.pbinfo.ro/probleme/4097/circular1

Copy if you want.

/////////Here is the problem translated form chat=gpt//////////


Circular Printer

A circular printer has large letters of the English alphabet arranged in a circular manner from A to Z. The printer has an indicator initially placed at the letter A.

To print a letter, the printer's indicator moves left or right. The movement of the indicator to an adjacent letter to the left or right of the current letter is completed in one second. For example, to print the sequence BCY, the indicator moves from A to B in one second, from B to C in one second, and then to the left from C to Y in 4 seconds. In total, it takes 6 seconds to print the sequence BCY. The printer always chooses the most advantageous direction to minimize the travel time.

The printer prints letters in two colors, red or blue. Some letters are printed in red ink, and the rest in blue ink. For simplicity, we will refer to them as red letters and blue letters.

Task

Given a sequence of not necessarily distinct blue letters and the set of distinct red letters on the printer, calculate:

The time required to print the sequence of blue letters on the circular printer.
If the requirement parameter is 2, insert one red letter between any two consecutive blue letters to minimize the printing time. Display the following:
The minimum time for printing according to the second requirement.
The number of distinct sequences printed with the minimum time, modulo 666013.
The lexicographically minimum sequence among all sequences printed in this time.
Input

The input file "circular.in" contains:

On the first line, a natural number c with possible values 1 or 2 representing the problem's requirement.
On the second line, a sequence of blue letters, not necessarily distinct.
On the third line, the set of distinct red letters in alphabetical order.
Output

In the output file "circular.out," based on the requirement:

If c=1, a single natural number representing the time required to print the sequence of blue letters.
If c=2, print three results on separate lines: the minimum printing time according to the second requirement, the number of distinct sequences printed with the minimum time, modulo 666013, and the lexicographically minimum sequence obtaining this time.
Constraints and Clarifications

Both sequences contain only uppercase English letters.
The length of the sequence of blue letters does not exceed 50,000 letters.
The set of red letters does not exceed 25 letters, which are distinct and displayed in alphabetical order.
All other letters not in the set of red letters are blue.
For scoring at the second requirement, the output file must contain exactly three lines adhering to the specified format.

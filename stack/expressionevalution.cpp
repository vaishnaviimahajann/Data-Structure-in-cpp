/*  
1. Stack Definition

Stack is a linear data structure that follows LIFO (Last In First Out).

2. Expression Definition

Expression is a combination of operands and operators.

Example:
A + B
2 * 3 + 5

3. Types of Expressions
Infix Expression

Operator is written between operands
Example:
A + B

Postfix Expression

Operator is written after operands
Example:
AB+

Prefix Expression

Operator is written before operands
Example:
+AB

4. Why Convert Infix to Postfix

Infix is easy for humans but difficult for computers because:

It needs precedence rules
It needs brackets

Postfix:

No brackets needed
No precedence confusion
Easy to evaluate using stack
5. Operator Precedence

() > ^ > * / % > + -

6. Associativity

^ → Right to Left

/ % → Left to Right
→ Left to Right
7. Rules for Infix to Postfix
Operand → add to output
( → push to stack
) → pop until (
Operator →
pop while precedence ≥ current
then push
8. Example

Infix:
A + B * C

Postfix:
ABC*+

9. One-Line Summary

Infix is human-friendly, postfix is machine-friendly, and stack helps convert between them.
*/
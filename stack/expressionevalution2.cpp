/*. Operator Precedence
Operator	Priority
^	highest
* /	high
+ -	low
()	highest control



 Associativity
Operator	Direction
^	Right → Left
+ - * /	Left → Right



 Infix / Prefix / Postfix
Type	Example
Infix	A + B
Prefix	+AB
Postfix	AB+


INFIX → POSTFIX (Notes + Example)
🧠 Steps:
operand → output
operator → stack
precedence check
pop till lower precedence
pop remaining stack
🔥 Example 1 (Easy)
Infix:
A + B
Steps:
Symbol	Stack	Output
A		A
+	+	A
B	+	AB
End		AB+
✅ Postfix:
AB+
🔥 Example 2 (Medium)
Infix:
A + B * C
Steps:
Symbol	Stack	Output
A		A
+	+	A
B	+	AB
*	+ *	AB
C	+ *	ABC
End		ABC*+
✅ Postfix:
ABC*+
🔥 Example 3 (Hard)
Infix:
(A + B) * (C - D)
Steps:
Symbol	Stack	Output
(	(	
A	(	           A
+	( +         	A
B	( +           	AB
)		AB+
*	*	AB+
(	* (	AB+
C	* (	AB+C
-	* ( -	AB+C
D	* ( -	AB+CD
)	*	AB+CD-
End		AB+CD-*
✅ Postfix:
AB+CD-*
📘 POSTFIX → INFIX
🧠 Steps:
scan left → right
operand → push
operator → pop 2
combine (val1 op val2)
🔥 Example
Postfix:
AB+C*
Steps:
Symbol	Stack
A	A
B	A B
+	(A+B)
C	(A+B) C
*	((A+B)*C)
✅ Infix:
((A+B)*C)
📘 PREFIX → INFIX
🧠 Steps:
scan right → left
operand → push
operator → pop 2
combine (val1 op val2)
🔥 Example
Prefix:
*+ABC
Steps:
Symbol	Stack
C	C
B	C B
A	C B A
+	(A+B) C
*	((A+B)*C)
✅ Infix:
((A+B)*C)
📘 POSTFIX → PREFIX
🧠 Steps:
left → right scan
operand → push
operator → pop 2
combine op + val1 + val2
🔥 Example
Postfix:
AB+C*
Steps:
Symbol	Stack
A	A
B	A B
+	+AB
C	+AB C
*	*+ABC
✅ Prefix:
*+ABC
📘 PREFIX → POSTFIX
🧠 Steps:
right → left scan
operand → push
operator → pop 2
combine val1 + val2 + op
🔥 Example
Prefix:
*+ABC
Steps:
Symbol	Stack
C	C
B	C B
A	C B A
+	AB+ C
*	AB+C*
✅ Postfix:
AB+C*






































*/
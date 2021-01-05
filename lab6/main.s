0	@0	program	children: @1 @4 @7		类型：
1	@1	statement	children: @2 @3	stmt: declaration	类型：
1	@2	type	children:	type: int	类型：Integer
1	@3	variable	children:	var_name: a field: 0	类型：Integer	-16
2	@4	statement	children: @5 @6	stmt: declaration	类型：
2	@5	type	children:	type: int	类型：Integer
2	@6	variable	children:	var_name: b field: 0	类型：Integer	-20
3	@7	statement	children: @8 @9 @10	stmt: func define	类型：
3	@8	type	children:	type: int	类型：Integer
3	@9	variable	children:	var_name: main field: 0	类型：Integer	0
12	@10	statement	children: @11 @15 @19 @31	stmt: block	类型：
4	@11	statement	children: @12 @13	stmt: scanf	类型：
4	@12	const	children:	const: const: string "%d"	类型：String
4	@13	expression	children: @14	op: &	类型：	-16
4	@14	variable	children:	var_name: a field: 0	类型：Integer	-16
5	@15	statement	children: @16 @17	stmt: scanf	类型：
5	@16	const	children:	const: const: string "%d"	类型：String
5	@17	expression	children: @18	op: &	类型：	-20
5	@18	variable	children:	var_name: b field: 0	类型：Integer	-20
10	@19	statement	children: @20 @23 @27	stmt: if_else	类型：
6	@20	expression	children: @21 @22	op: <	类型：Boolean	-24
6	@21	variable	children:	var_name: a field: 0	类型：Integer	-16
6	@22	variable	children:	var_name: b field: 0	类型：Integer	-20
8	@23	statement	children: @24	stmt: if	类型：
8	@24	statement	children: @25	stmt: block	类型：
7	@25	statement	children: @26	stmt: printf	类型：
7	@26	const	children:	const: const: string "Success\n"	类型：String
10	@27	statement	children: @28	stmt: else	类型：
10	@28	statement	children: @29	stmt: block	类型：
9	@29	statement	children: @30	stmt: printf	类型：
9	@30	const	children:	const: const: string "Failed\n"	类型：String
11	@31	statement	children: @32	stmt: return	类型：
11	@32	const	children:	const: const: int 0	类型：Integer
	.section	.rodata
L_12:
	.string "%d"
L_16:
	.string "%d"
L_26:
	.string "Success\n"
L_30:
	.string "Failed\n"
	.text
	.data
	.comm	a, 4,4
	.comm	b, 4,4
	.text
	.globl	main
	.type	main,@function
main:
	leal	4(%esp), %ecx
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%ecx
	subl	$104, %esp

	leal	a, %eax
	movl	%eax, -16(%ebp)
	subl	$12, %esp
	movl	-16(%ebp), %eax
	pushl	%eax
	pushl	$L_12
	call	__isoc99_scanf
	addl	$16, %esp
	leal	b, %eax
	movl	%eax, -20(%ebp)
	subl	$12, %esp
	movl	-20(%ebp), %eax
	pushl	%eax
	pushl	$L_16
	call	__isoc99_scanf
	addl	$16, %esp
s_1:
	movl	a, %eax
	movl	b, %edx
	cmpl	%edx, %eax
	jge	s_3
s_2:
	subl	$12, %esp
	pushl	$L_26
	call	printf
	addl	$16, %esp
	jmp	s_4
s_3:
	subl	$12, %esp
	pushl	$L_30
	call	printf
	addl	$16, %esp
s_4:
	movl	$0, %eax

	movl	$0, %eax
	movl	-4(%ebp), %ecx
	leave
	leal	-4(%ecx), %esp
	ret
	.section	.note.GNU-stack,"",@progbits

0	@0	program	children: @1		类型：
1	@1	statement	children: @2 @3 @4	stmt: func define	类型：
1	@2	type	children:	type: int	类型：Integer
1	@3	variable	children:	var_name: main field: 0	类型：Integer	0
12	@4	statement	children: @5 @10	stmt: block	类型：
2	@5	statement	children: @6 @7	stmt: define	类型：
2	@6	type	children:	type: int	类型：Integer
2	@7	statement	children: @8 @9	stmt: assign	类型：Integer
2	@8	variable	children:	var_name: a field: 0_1_1	类型：Integer	-16
2	@9	const	children:	const: const: int 1	类型：Integer
11	@10	statement	children: @11 @14 @19	stmt: if_else	类型：
3	@11	expression	children: @12 @13	op: ==	类型：Boolean	-20
3	@12	const	children:	const: const: int 1	类型：Integer
3	@13	const	children:	const: const: int 0	类型：Integer
6	@14	statement	children: @15	stmt: if	类型：
6	@15	statement	children: @16	stmt: block	类型：
5	@16	statement	children: @17 @18	stmt: printf	类型：
5	@17	const	children:	const: const: string "%d"	类型：String
5	@18	variable	children:	var_name: a field: 0_1_1	类型：Integer	-16
11	@19	statement	children: @20	stmt: else	类型：
11	@20	statement	children: @21 @24	stmt: block	类型：
9	@21	statement	children: @22 @23	stmt: assign	类型：Integer
9	@22	variable	children:	var_name: a field: 0_1_1	类型：Integer	-16
9	@23	const	children:	const: const: int 2	类型：Integer
10	@24	statement	children: @25 @26	stmt: printf	类型：
10	@25	const	children:	const: const: string "%d"	类型：String
10	@26	variable	children:	var_name: a field: 0_1_1	类型：Integer	-16
	.section	.rodata
L_17:
	.string "%d"
L_25:
	.string "%d"
	.text
	.data
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

	movl	$1, %eax
	movl	%eax, -16(%ebp)
	movl	$1, %eax
	movl	$0, %edx
	cmpl	%edx, %eax
	jne	L_19
	subl	$12, %esp
	movl	-16(%ebp), %eax
	pushl	%eax
	pushl	$L_17
	call	printf
	addl	$16, %esp
L_19:
	movl	$2, %eax
	movl	%eax, -16(%ebp)
	subl	$12, %esp
	movl	-16(%ebp), %eax
	pushl	%eax
	pushl	$L_25
	call	printf
	addl	$16, %esp

	movl	$0, %eax
	movl	-4(%ebp), %ecx
	leave
	leal	-4(%ecx), %esp
	ret
	.section	.note.GNU-stack,"",@progbits

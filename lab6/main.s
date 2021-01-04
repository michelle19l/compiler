0	@0	program	children: @1		类型：
1	@1	statement	children: @2 @3 @4	stmt: func define	类型：
1	@2	type	children:	type: int	类型：Integer
1	@3	variable	children:	var_name: main field: 0	类型：Integer	0
7	@4	statement	children: @5 @10 @13 @17	stmt: block	类型：
2	@5	statement	children: @6 @7	stmt: define	类型：
2	@6	type	children:	type: int	类型：Integer
2	@7	statement	children: @8 @9	stmt: assign	类型：Integer
2	@8	variable	children:	var_name: a field: 0_1_1	类型：Integer	-16
2	@9	const	children:	const: const: int 1	类型：Integer
3	@10	statement	children: @11 @12	stmt: printf	类型：
3	@11	const	children:	const: const: string "%d"	类型：String
3	@12	const	children:	const: const: int 1	类型：Integer
4	@13	statement	children: @14 @15	stmt: scanf	类型：
4	@14	const	children:	const: const: string "%d"	类型：String
4	@15	expression	children: @16	op: &	类型：	-20
4	@16	variable	children:	var_name: a field: 0_1_1	类型：Integer	-16
6	@17	statement	children: @18 @19	stmt: printf	类型：
6	@18	const	children:	const: const: string "%d"	类型：String
6	@19	variable	children:	var_name: a field: 0_1_1	类型：Integer	-16
	.section	.rodata
L_11:
	.string "%d"
L_14:
	.string "%d"
L_18:
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
	subl	$12, %esp
	movl	$1, %eax
	pushl	%eax
	pushl	$L_11
	call	printf
	addl	$16, %esp

	
	leal	-16(%ebp), %eax
	movl	%eax, -20(%ebp)
	subl	$12, %esp
	movl	-20(%ebp), %eax
	pushl	%eax
	pushl	$L_14
	call	__isoc99_scanf
	addl	$16, %esp

	subl	$12, %esp
	movl	-16(%ebp), %eax
	pushl	%eax
	pushl	$L_18
	call	printf
	addl	$16, %esp

	movl	$0, %eax
	movl	-4(%ebp), %ecx
	leave
	leal	-4(%ecx), %esp
	ret
	.section	.note.GNU-stack,"",@progbits

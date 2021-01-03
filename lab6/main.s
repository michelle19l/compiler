0	@0	program	children: @1		类型：
2	@1	statement	children: @2 @3 @4	stmt: func define	类型：
2	@2	type	children:	type: int	类型：Integer
2	@3	variable	children:	var_name: main field: 0	类型：Integer	0
8	@4	statement	children: @5 @13 @18	stmt: block	类型：
4	@5	statement	children: @6 @7 @10	stmt: define	类型：
4	@6	type	children:	type: int	类型：Integer
4	@7	statement	children: @8 @9	stmt: assign	类型：Integer
4	@8	variable	children:	var_name: a field: 0_1_1	类型：Integer	-16
4	@9	const	children:	const: const: int 10	类型：Integer
4	@10	statement	children: @11 @12	stmt: assign	类型：Integer
4	@11	variable	children:	var_name: o field: 0_1_1	类型：Integer	-20
4	@12	const	children:	const: const: int 2	类型：Integer
6	@13	statement	children: @14 @15	stmt: assign	类型：Integer
6	@14	variable	children:	var_name: a field: 0_1_1	类型：Integer	-16
6	@15	expression	children: @16 @17	op: /	类型：Integer	-24
6	@16	variable	children:	var_name: a field: 0_1_1	类型：Integer	-16
6	@17	const	children:	const: const: int 3	类型：Integer
7	@18	statement	children: @19 @20	stmt: printf	类型：
7	@19	const	children:	const: const: string "%d\n"	类型：String
7	@20	variable	children:	var_name: a field: 0_1_1	类型：Integer	-16
0 main 函数#
0_1 
0_1_1 a 变量#o 变量#%d\n 常量
0 %d\n 常量
0 
	.section	.rodata
L_19:
	.string "%d\n"
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




	movl	$10, %eax
	movl	%eax, -16(%ebp)



	movl	$2, %eax
	movl	%eax, -20(%ebp)





	movl	-16(%ebp), %eax
	cltd
	movl	$3, -24(%ebp)
	idivl	-24(%ebp)
	movl	%eax, -24(%ebp)

	movl	-24(%ebp), %eax
	movl	%eax, -16(%ebp)



	subl	$12, %esp
	movl	-16(%ebp), %eax
	pushl	%eax
	pushl	$L_19
	call	printf
	addl	$20, %esp



	movl	$0, %eax
	movl	-4(%ebp), %ecx
	leave
	leal	-4(%ecx), %esp
	ret
	.section	.note.GNU-stack,"",@progbits

0	@0	program	children: @1 @4		类型：
1	@1	statement	children: @2 @3	stmt: declaration	类型：
1	@2	type	children:	type: int	类型：Integer
1	@3	variable	children:	var_name: s field: 0	类型：Integer	-4
2	@4	statement	children: @5 @6 @7	stmt: func define	类型：
2	@5	type	children:	type: int	类型：Integer
2	@6	variable	children:	var_name: main field: 0	类型：Integer	0
7	@7	statement	children: @8 @12 @22	stmt: block	类型：
4	@8	statement	children: @9 @10 @11	stmt: declaration	类型：
4	@9	type	children:	type: int	类型：Integer
4	@10	variable	children:	var_name: h field: 0_1_1	类型：Integer	-4
4	@11	variable	children:	var_name: p field: 0_1_1	类型：Integer	-8
5	@12	statement	children: @13 @14 @17	stmt: define	类型：
5	@13	type	children:	type: int	类型：Integer
5	@14	statement	children: @15 @16	stmt: assign	类型：Integer
5	@15	variable	children:	var_name: s field: 0_1_1	类型：Integer	-12
5	@16	const	children:	const: const: int 2	类型：Integer
5	@17	statement	children: @18 @19	stmt: assign	类型：Integer
5	@18	variable	children:	var_name: k field: 0_1_1	类型：Integer	-16
5	@19	expression	children: @20 @21	op: +	类型：Integer	-20
5	@20	const	children:	const: const: int 3	类型：Integer
5	@21	const	children:	const: const: int 7	类型：Integer
6	@22	statement	children: @23	stmt: return	类型：
6	@23	const	children:	const: const: int 1	类型：Integer
0 s 变量#main 函数#
0_1 
0_1_1 h 变量#p 变量#s 变量#k 变量#
0 
0 
	.section	.rodata
	.text
	.globl	s
	.type	s,@function
s:
	.text
	.globl	main
	.type	main,@function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$4, %esp
	movl	0, %eax
	leave
	ret
	.section	.note.GNU-stack,"",@progbits

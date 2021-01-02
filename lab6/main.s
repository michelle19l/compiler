0	@0	program	children: @1 @6		类型：
1	@1	statement	children: @2 @3 @4	stmt: func define	类型：
1	@2	type	children:	type: int	类型：Integer
1	@3	variable	children:	var_name: s field: 0	类型：Integer
4	@4	statement	children: @5	stmt: block	类型：
4	@5	statement	children:	stmt: empty	类型：
5	@6	statement	children: @7 @8 @9	stmt: func define	类型：
5	@7	type	children:	type: int	类型：Integer
5	@8	variable	children:	var_name: main field: 0	类型：Integer
9	@9	statement	children: @10 @18	stmt: block	类型：
7	@10	statement	children: @11 @12 @15	stmt: define	类型：
7	@11	type	children:	type: int	类型：Integer
7	@12	statement	children: @13 @14	stmt: assign	类型：Integer
7	@13	variable	children:	var_name: j field: 0_2_1	类型：Integer
7	@14	const	children:	const: int 2	类型：Integer
7	@15	statement	children: @16 @17	stmt: assign	类型：Integer
7	@16	variable	children:	var_name: k field: 0_2_1	类型：Integer
7	@17	const	children:	const: int 2	类型：Integer
8	@18	statement	children: @19 @20	stmt: define	类型：
8	@19	type	children:	type: int	类型：Integer
8	@20	statement	children: @21 @22	stmt: assign	类型：Integer
8	@21	variable	children:	var_name: n field: 0_2_1	类型：Integer
8	@22	expression	children: @23	op: function	类型：Integer
8	@23	variable	children:	var_name: s field: 0	类型：Integer
0 s 函数#main 函数#
0_1 
0_1_1 
0_2 
0_2_1 j 变量#k 变量#n 变量#
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
	movl	$0, %eax
	leave
	ret
	.section	.note.GNU-stack,"",@progbits

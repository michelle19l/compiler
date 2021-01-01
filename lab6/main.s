0	@0	program	children: @1		类型：
1	@1	statement	children: @2 @3 @4	stmt: func define	类型：
1	@2	type	children:	type: void	类型：
1	@3	variable	children:	var_name: main field: 0	类型：
5	@4	statement	children: @5 @7	stmt: block	类型：
3	@5	statement	children: @6	stmt: printf	类型：
3	@6	const	children:	const: string "123"	类型：String
4	@7	statement	children: @8	stmt: printf	类型：
4	@8	const	children:	const: string "%d"	类型：String
0 main 函数#
0_1 
0_1_1 123 常量%d 常量
0 123 常量%d 常量
0 
	.section	.rodata
L_6:
	.string "123"
L_8:
	.string "%d"

0	@0	program	children: @1 @11 @17		类型：
8	@1	statement	children: @2 @8	stmt: if_else	类型：
4	@2	statement	children: @3 @6	stmt: if	类型：
1	@3	expression	children: @4 @5	op: ==	类型：Boolean	-16
1	@4	const	children:	const: const: int 1	类型：Integer
1	@5	const	children:	const: const: int 0	类型：Integer
4	@6	statement	children: @7	stmt: block	类型：
4	@7	statement	children:	stmt: empty	类型：
8	@8	statement	children: @9	stmt: else	类型：
8	@9	statement	children: @10	stmt: block	类型：
8	@10	statement	children:	stmt: empty	类型：
13	@11	statement	children: @12 @15	stmt: if	类型：
9	@12	expression	children: @13 @14	op: ==	类型：Boolean	-20
9	@13	const	children:	const: const: int 2	类型：Integer
9	@14	const	children:	const: const: int 0	类型：Integer
12	@15	statement	children: @16	stmt: block	类型：
12	@16	statement	children:	stmt: empty	类型：
13	@17	statement	children: @18 @19	stmt: define	类型：
13	@18	type	children:	type: int	类型：Integer
13	@19	statement	children: @20 @21	stmt: assign	类型：Integer
13	@20	variable	children:	var_name: s field: 0	类型：Integer	-24
13	@21	const	children:	const: const: int 1	类型：Integer
	.section	.rodata
	.text
	.data
	.comm	s,4,4

0	@0	program	children: @1 @4		类型：
1	@1	statement	children: @2 @3	stmt: declaration	类型：
1	@2	type	children:	type: int	类型：Integer
1	@3	variable	children:	var_name: a field: 0	类型：Integer	-16
2	@4	statement	children: @5 @6 @7	stmt: func define	类型：
2	@5	type	children:	type: int	类型：Integer
2	@6	variable	children:	var_name: main field: 0	类型：Integer	0
9	@7	statement	children: @8 @12 @26 @29	stmt: block	类型：
3	@8	statement	children: @9 @10	stmt: scanf	类型：
3	@9	const	children:	const: const: string "%d"	类型：String
3	@10	expression	children: @11	op: &	类型：	-16
3	@11	variable	children:	var_name: a field: 0	类型：Integer	-16
7	@12	statement	children: @13 @20 @25	stmt: if_else	类型：
4	@13	expression	children: @14 @17	op: &&	类型：Boolean	-20
4	@14	expression	children: @15 @16	op: !=	类型：Boolean	-24
4	@15	variable	children:	var_name: a field: 0	类型：Integer	-16
4	@16	const	children:	const: const: int 0	类型：Integer
4	@17	expression	children: @18 @19	op: !=	类型：Boolean	-28
4	@18	variable	children:	var_name: a field: 0	类型：Integer	-16
4	@19	const	children:	const: const: int 2	类型：Integer
7	@20	statement	children: @21	stmt: if	类型：
6	@21	statement	children: @22	stmt: block	类型：
5	@22	statement	children: @23 @24	stmt: assign	类型：Integer
5	@23	variable	children:	var_name: a field: 0	类型：Integer	-16
5	@24	const	children:	const: const: int 20	类型：Integer
7	@25	statement	children:	stmt: else	类型：
7	@26	statement	children: @27 @28	stmt: printf	类型：
7	@27	const	children:	const: const: string "test:%d\n"	类型：String
7	@28	variable	children:	var_name: a field: 0	类型：Integer	-16
8	@29	statement	children: @30	stmt: return	类型：
8	@30	const	children:	const: const: int 0	类型：Integer
1	@1	statement	children: @2 @3	stmt: declaration	类型：
1222221
1	@2	type	children:	type: int	类型：Integer
3331
1	@3	variable	children:	var_name: a field: 0	类型：Integer	-16
3331
2	@4	statement	children: @5 @6 @7	stmt: func define	类型：
1222221
2	@5	type	children:	type: int	类型：Integer
3331
2	@6	variable	children:	var_name: main field: 0	类型：Integer	0
3331
9	@7	statement	children: @8 @12 @26 @29	stmt: block	类型：
1222221
3	@8	statement	children: @9 @10	stmt: scanf	类型：
1222221
3	@9	const	children:	const: const: string "%d"	类型：String
3331
3	@10	expression	children: @11	op: &	类型：	-16
11111
sssssss
7	@12	statement	children: @13 @20 @25	stmt: if_else	类型：
1222221
4	@13	expression	children: @14 @17	op: &&	类型：Boolean	-20
11111
sssssss
--------------
4	@13	expression	children: @14 @17	op: &&	类型：Boolean	-20
4	@14	expression	children: @15 @16	op: !=	类型：Boolean	-24
4	@17	expression	children: @18 @19	op: !=	类型：Boolean	-28
------------
4	@14	expression	children: @15 @16	op: !=	类型：Boolean	-24
11111
sssssss
4	@17	expression	children: @18 @19	op: !=	类型：Boolean	-28
11111
sssssss
7	@20	statement	children: @21	stmt: if	类型：
1222221
6	@21	statement	children: @22	stmt: block	类型：
1222221
5	@22	statement	children: @23 @24	stmt: assign	类型：Integer
1222221
5	@23	variable	children:	var_name: a field: 0	类型：Integer	-16
3331
5	@24	const	children:	const: const: int 20	类型：Integer
3331
7	@25	statement	children:	stmt: else	类型：
1222221
7	@26	statement	children: @27 @28	stmt: printf	类型：
1222221
7	@27	const	children:	const: const: string "test:%d\n"	类型：String
3331
7	@28	variable	children:	var_name: a field: 0	类型：Integer	-16
3331
8	@29	statement	children: @30	stmt: return	类型：
1222221
8	@30	const	children:	const: const: int 0	类型：Integer
3331
	.section	.rodata
L_9:
	.string "%d"
L_27:
	.string "test:%d\n"
	.text
	.data
	.comm	a,4,4
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
	pushl	$L_9
	call	__isoc99_scanf
	addl	$16, %esp
s_1:
	movl	a, %eax
	movl	$0, %edx
	cmpl	%edx, %eax
	je	s_3
	movl	a, %eax
	movl	$2, %edx
	cmpl	%edx, %eax
	je	s_3
s_2:
	movl	$20, %eax
	movl	%eax, a
s_3:
	subl	$12, %esp
	movl	a, %eax
	pushl	%eax
	pushl	$L_27
	call	printf
	addl	$16, %esp
	movl	$0, %eax

	movl	$0, %eax
	movl	-4(%ebp), %ecx
	leave
	leal	-4(%ecx), %esp
	ret
	.section	.note.GNU-stack,"",@progbits

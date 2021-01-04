	.section	.rodata
L_9:
	.string "%d"
L_23:
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
	movl	a, %eax
	movl	$0, %edx
	cmpl	%edx, %eax
	je	L_21
	movl	$20, %eax
	movl	%eax, a
L_21:
	subl	$12, %esp
	movl	a, %eax
	pushl	%eax
	pushl	$L_23
	call	printf
	addl	$16, %esp
	movl	$0, %eax

	movl	$0, %eax
	movl	-4(%ebp), %ecx
	leave
	leal	-4(%ecx), %esp
	ret
	.section	.note.GNU-stack,"",@progbits

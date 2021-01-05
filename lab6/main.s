	.section	.rodata
L_12:
	.string "%d"
L_16:
	.string "%d"
L_28:
	.string "Success\n"
L_32:
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
	je	s_2
	jne	s_3
s_2:
	subl	$12, %esp
	pushl	$L_28
	call	printf
	addl	$16, %esp
	jmp	s_4
s_3:
	subl	$12, %esp
	pushl	$L_32
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

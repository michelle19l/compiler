	.section	.rodata
L_40:
	.string "%d\n"
L_43:
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

	movl	$0, %eax
	movl	%eax, -16(%ebp)
	movl	$0, %eax
	movl	%eax, -20(%ebp)
s_1:
s_0:
	movl	-16(%ebp), %eax
	movl	$5, %edx
	cmpl	%edx, %eax
	jne	s_0
	je	s_0
s_0:
	movl	$25, %eax
	movl	%eax, -20(%ebp)
	jmp	s_0
s_0:
s_0:
	movl	-16(%ebp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, -16(%ebp)
	jmp	s_1
s_3:
	subl	$12, %esp
	movl	-16(%ebp), %eax
	pushl	%eax
	pushl	$L_40
	call	printf
	addl	$16, %esp
	subl	$12, %esp
	movl	-20(%ebp), %eax
	pushl	%eax
	pushl	$L_43
	call	printf
	addl	$16, %esp
	movl	$0, %eax

	movl	$0, %eax
	movl	-4(%ebp), %ecx
	leave
	leal	-4(%ecx), %esp
	ret
	.section	.note.GNU-stack,"",@progbits

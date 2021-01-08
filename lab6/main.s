	.section	.rodata
L_12:
	.string "%d"
L_24:
	.string "%d"
L_44:
	.string "%d"
	.text
	.data
	.text
	.globl	f
	.type	f,@function
f:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$112, %esp
	subl	$12, %esp
	movl	8(%ebp), %eax
	pushl	%eax
	pushl	$L_12
	call	printf
	addl	$16, %esp
	movl	8(%ebp), %eax
	movl	$2, %edx
	imull	%edx, %eax
	movl	%eax, -16(%ebp)
	movl	-16(%ebp), %eax
	movl	12(%ebp), %edx
	addl	%edx, %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, -8(%ebp)
	subl	$12, %esp
	movl	-8(%ebp), %eax
	pushl	%eax
	pushl	$L_24
	call	printf
	addl	$16, %esp
	movl	-8(%ebp), %eax

	leave
	ret
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
	movl	%eax, -8(%ebp)
	subl	$12, %esp
	movl	$2, %eax
	pushl	%eax
	movl	$1, %eax
	pushl	%eax
	call	f
	addl	$16, %esp
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, -8(%ebp)
	subl	$12, %esp
	movl	-8(%ebp), %eax
	pushl	%eax
	pushl	$L_44
	call	printf
	addl	$16, %esp

	movl	$0, %eax
	movl	-4(%ebp), %ecx
	leave
	leal	-4(%ecx), %esp
	ret
	.section	.note.GNU-stack,"",@progbits

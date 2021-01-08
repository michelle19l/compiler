	.section	.rodata
L_87:
	.string "%d\n"
L_90:
	.string "%d\n\n"
L_111:
	.string "%d\n"
L_114:
	.string "%d\n\n"
L_141:
	.string "%d\n"
L_158:
	.string "%d\n%d\n"
	.text
	.data
	.text
	.globl	f
	.type	f,@function
f:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$112, %esp
s_1:
	movl	8(%ebp), %eax
	movl	$0, %edx
	cmpl	%edx, %eax
	jne	s_3
	je	s_2
s_2:
	movl	12(%ebp), %eax
	leave
	ret
	jmp	s_4
s_3:
s_4:
	movl	8(%ebp), %eax
	movl	$1, %edx
	subl	%edx, %eax
	movl	%eax, -16(%ebp)
	movl	12(%ebp), %eax
	movl	$1, %edx
	subl	%edx, %eax
	movl	%eax, -20(%ebp)
	subl	$12, %esp
	movl	-20(%ebp), %eax
	pushl	%eax
	movl	-16(%ebp), %eax
	pushl	%eax
	call	f
	addl	$16, %esp
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	leave
	ret

	leave
	ret
	.text
	.globl	s
	.type	s,@function
s:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$104, %esp
	movl	$0, %eax
	movl	%eax, -8(%ebp)
	movl	$0, %eax
	movl	%eax, -12(%ebp)
s_5:
	movl	-8(%ebp), %eax
	movl	$100, %edx
	cmpl	%edx, %eax
	jge	s_7
	jl	s_6
s_6:
s_8:
	movl	-8(%ebp), %eax
	movl	$5, %edx
	cmpl	%edx, %eax
	jne	s_10
	je	s_9
s_9:
	movl	$25, %eax
	movl	%eax, -12(%ebp)
	jmp	s_11
s_10:
s_12:
	movl	-8(%ebp), %eax
	movl	$10, %edx
	cmpl	%edx, %eax
	jne	s_14
	je	s_13
s_13:
	movl	$42, %eax
	movl	%eax, -12(%ebp)
	jmp	s_15
s_14:
	movl	-8(%ebp), %eax
	movl	$2, %edx
	imull	%edx, %eax
	movl	%eax, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, -12(%ebp)
s_15:
s_11:
	movl	-8(%ebp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -32(%ebp)
	movl	-32(%ebp), %eax
	movl	%eax, -8(%ebp)
	jmp	s_5
s_7:
	subl	$12, %esp
	movl	-8(%ebp), %eax
	pushl	%eax
	pushl	$L_87
	call	printf
	addl	$16, %esp
	subl	$12, %esp
	movl	-12(%ebp), %eax
	pushl	%eax
	pushl	$L_90
	call	printf
	addl	$16, %esp
	movl	$0, %eax
	leave
	ret

	leave
	ret
	.text
	.globl	h
	.type	h,@function
h:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$104, %esp
	movl	$3, %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, -8(%ebp)
	subl	$12, %esp
	movl	-8(%ebp), %eax
	pushl	%eax
	pushl	$L_111
	call	printf
	addl	$16, %esp
	subl	$12, %esp
	movl	-12(%ebp), %eax
	pushl	%eax
	pushl	$L_114
	call	printf
	addl	$16, %esp
	movl	$0, %eax
	leave
	ret

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

	movl	$3, %eax
	movl	%eax, -8(%ebp)
	movl	$10, %eax
	movl	%eax, -12(%ebp)
	subl	$12, %esp
	movl	-12(%ebp), %eax
	pushl	%eax
	movl	-8(%ebp), %eax
	pushl	%eax
	call	f
	addl	$16, %esp
	movl	%eax, -20(%ebp)
	movl	-20(%ebp), %eax
	movl	%eax, -16(%ebp)
	subl	$12, %esp
	movl	-16(%ebp), %eax
	pushl	%eax
	pushl	$L_141
	call	printf
	addl	$16, %esp
	subl	$12, %esp
	call	s
	addl	$16, %esp
	movl	%eax, -24(%ebp)
	subl	$12, %esp
	call	h
	addl	$16, %esp
	movl	%eax, -28(%ebp)
	movl	$291, %eax
	movl	%eax, -32(%ebp)
	movl	$83, %eax
	movl	%eax, -36(%ebp)
	subl	$12, %esp
	movl	-36(%ebp), %eax
	pushl	%eax
	movl	-32(%ebp), %eax
	pushl	%eax
	pushl	$L_158
	call	printf
	addl	$16, %esp
	movl	$0, %eax
	leave
	ret

	movl	$0, %eax
	movl	-4(%ebp), %ecx
	leave
	leal	-4(%ecx), %esp
	ret
	.section	.note.GNU-stack,"",@progbits

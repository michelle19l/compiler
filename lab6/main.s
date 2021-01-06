	.section	.rodata
L_23:
	.string "In Loop\n"
L_25:
	.string "End Loop\n"
	.text
	.data
	.comm	a, 4,4
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
	movl	%eax, a
s_2:
	movl	a, %eax
	movl	$200, %edx
	cmpl	%edx, %eax
	jge	s_5
	jl	s_4
s_4:
	movl	a, %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -20(%ebp)
	movl	-20(%ebp), %eax
	movl	%eax, a
	subl	$12, %esp
	pushl	$L_23
	call	printf
	addl	$16, %esp
	jmp	s_2
s_5:
	subl	$12, %esp
	pushl	$L_25
	call	printf
	addl	$16, %esp
	movl	$0, %eax

	movl	$0, %eax
	movl	-4(%ebp), %ecx
	leave
	leal	-4(%ecx), %esp
	ret
	.section	.note.GNU-stack,"",@progbits

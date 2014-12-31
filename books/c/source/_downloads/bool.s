	.file	"bool.c"
	.text
	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
# BB#0:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%ebx
	pushl	%edi
	pushl	%esi
	subl	$60, %esp
	movl	$0, %eax
	movl	$0, -16(%ebp)
	movb	$1, -17(%ebp)
	movb	$1, %cl
	movb	$1, -18(%ebp)
	movb	$1, -19(%ebp)
	movb	$0, -20(%ebp)
	movb	$1, -21(%ebp)
	movb	$1, -22(%ebp)
	movzbl	-21(%ebp), %edx
	andl	$1, %edx
	movzbl	-20(%ebp), %esi
	andl	$1, %esi
	movzbl	-19(%ebp), %edi
	andl	$1, %edi
	movzbl	-18(%ebp), %ebx
	andl	$1, %ebx
	movl	%eax, -28(%ebp)         # 4-byte Spill
	movzbl	-17(%ebp), %eax
	andl	$1, %eax
	andb	$1, %cl
	movzbl	%cl, %ecx
	movl	%eax, -32(%ebp)         # 4-byte Spill
	movl	%esp, %eax
	movl	%ecx, 24(%eax)
	movl	%edx, 20(%eax)
	movl	%esi, 16(%eax)
	movl	%edi, 12(%eax)
	movl	%ebx, 8(%eax)
	movl	-32(%ebp), %ecx         # 4-byte Reload
	movl	%ecx, 4(%eax)
	movl	$.L.str, (%eax)
	calll	printf
	movl	%eax, -36(%ebp)         # 4-byte Spill
	calll	getchar
	movl	%eax, -40(%ebp)         # 4-byte Spill
	movl	-28(%ebp), %eax         # 4-byte Reload
	addl	$60, %esp
	popl	%esi
	popl	%edi
	popl	%ebx
	popl	%ebp
	ret
.Ltmp0:
	.size	main, .Ltmp0-main

	.type	.L.str,@object          # @.str
	.section	.rodata.str1.16,"aMS",@progbits,1
	.align	16
.L.str:
	.asciz	 "%d %d %d %d %d %d\n"
	.size	.L.str, 19


	.section	".note.GNU-stack","",@progbits

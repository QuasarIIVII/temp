	.file	"a.cpp"
	.text
#APP
	_S0:
"spring"

	_S1:
"summer"

	_S2:
"fall"

	_S3:
"winter"

	.section	.rodata
.LC0:
	.string	"%d"
.LC1:
	.string	"summer"
.LC2:
	.string	"fall"
.LC3:
	.string	"winter"
#NO_APP
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
#APP
# 10 "../a.cpp" 1
	#--------------------------------

# 0 "" 2
# 11 "../a.cpp" 1
	addq $9, -16(%rbp)

# 0 "" 2
#NO_APP
	movq	-16(%rbp), %rcx
	movabsq	$3074457345618258603, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	sarq	%rdx
	movq	%rcx, %rax
	sarq	$63, %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	subq	%rax, %rcx
	movq	%rcx, %rdx
	movq	%rdx, -16(%rbp)
	movq	-16(%rbp), %rcx
	movabsq	$6148914691236517206, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	movq	%rdx, %rsi
	sarq	$63, %rcx
	movq	%rcx, %rdx
	movq	%rsi, %rax
	subq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	cmpq	$3, %rax
	je	.L2
	cmpq	$3, %rax
	jg	.L3
	cmpq	$2, %rax
	je	.L4
	cmpq	$2, %rax
	jg	.L3
	testq	%rax, %rax
	je	.L5
	cmpq	$1, %rax
	je	.L6
	jmp	.L3
.L5:
#APP
# 16 "../a.cpp" 1
	leaq _S0(%rip), %rdi
call puts

# 0 "" 2
#NO_APP
	jmp	.L3
.L6:
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L3
.L4:
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L3
.L2:
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
.L3:
#APP
# 22 "../a.cpp" 1
	#--------------------------------

# 0 "" 2
#NO_APP
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L8
	call	__stack_chk_fail@PLT
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 12-20220319-1ubuntu1) 12.0.1 20220319 (experimental) [master r12-7719-g8ca61ad148f]"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:

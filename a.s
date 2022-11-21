	.file	"a.cpp"
	.text
	.local	_ZZ5randlvE1a
	.comm	_ZZ5randlvE1a,4,4
	.globl	_Z5randlv
	.type	_Z5randlv, @function
_Z5randlv:
.LFB981:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$32, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-48(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	gettimeofday@PLT
	movq	-48(%rbp), %rax
	imull	$1000000, %eax, %eax
	movq	-40(%rbp), %rdx
	addl	%eax, %edx
	movl	_ZZ5randlvE1a(%rip), %eax
	addl	%edx, %eax
	movl	%eax, %edi
	call	srand@PLT
	call	rand@PLT
	movl	%eax, _ZZ5randlvE1a(%rip)
	movl	_ZZ5randlvE1a(%rip), %edx
	movl	%edx, %eax
	sall	$31, %eax
	subl	%edx, %eax
	movl	%eax, %ebx
	call	rand@PLT
	movl	%eax, %edx
	sall	$31, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$31, %eax
	subl	%edx, %eax
	addl	%eax, %ebx
	call	rand@PLT
	movl	%eax, %edx
	sall	$31, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$31, %eax
	subl	%edx, %eax
	movl	%eax, %ecx
	movl	%ecx, %eax
	sall	$31, %eax
	subl	%ecx, %eax
	movl	%eax, %edx
	movl	%edx, %eax
	sall	$31, %eax
	subl	%edx, %eax
	movl	%eax, %r12d
	call	rand@PLT
	movl	%eax, %edx
	sall	$31, %edx
	movl	%edx, %ecx
	subl	%eax, %ecx
	movl	%ecx, %eax
	sall	$31, %eax
	subl	%ecx, %eax
	movl	%eax, %edx
	movl	%edx, %eax
	sall	$31, %eax
	subl	%edx, %eax
	addl	%r12d, %eax
	addl	%ebx, %eax
	movl	%eax, %eax
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	addq	$32, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE981:
	.size	_Z5randlv, .-_Z5randlv
	.globl	_Z1fPiii
	.type	_Z1fPiii, @function
_Z1fPiii:
.LFB982:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
#APP
# 29 "a.cpp" 1
	#asdf
# 0 "" 2
#NO_APP
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE982:
	.size	_Z1fPiii, .-_Z1fPiii
	.section	.rodata
.LC0:
	.string	"%lld"
.LC1:
	.string	"Failed"
.LC2:
	.string	"%lld %lld"
	.text
	.globl	main
	.type	main, @function
main:
.LFB983:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$144, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$0, -96(%rbp)
	movq	$1, -88(%rbp)
	movq	$2, -80(%rbp)
	movq	$3, -72(%rbp)
	movq	$4, -64(%rbp)
	movq	$5, -56(%rbp)
	movq	$6, -48(%rbp)
	movq	$7, -40(%rbp)
	movq	$8, -32(%rbp)
	movq	$9, -24(%rbp)
	movq	$0, -128(%rbp)
	movq	$10, -120(%rbp)
	movq	$0, -136(%rbp)
	movq	$0, -104(%rbp)
	leaq	-136(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	jmp	.L6
.L11:
	movq	-128(%rbp), %rdx
	movq	-120(%rbp), %rax
	addq	%rdx, %rax
	sarq	%rax
	movq	%rax, -112(%rbp)
	movq	-112(%rbp), %rax
	movq	-96(%rbp,%rax,8), %rdx
	movq	-136(%rbp), %rax
	cmpq	%rax, %rdx
	sete	%al
	testb	%al, %al
	jne	.L16
	movq	-112(%rbp), %rax
	movq	-96(%rbp,%rax,8), %rdx
	movq	-136(%rbp), %rax
	cmpq	%rax, %rdx
	jle	.L9
	movq	-112(%rbp), %rax
	movq	%rax, -120(%rbp)
	jmp	.L10
.L9:
	movq	-112(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -128(%rbp)
.L10:
	addq	$1, -104(%rbp)
.L6:
	movq	-120(%rbp), %rax
	subq	-128(%rbp), %rax
	testq	%rax, %rax
	jg	.L11
	jmp	.L8
.L16:
	nop
.L8:
	movq	-120(%rbp), %rax
	subq	-128(%rbp), %rax
	testq	%rax, %rax
	jg	.L12
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L13
.L12:
	movq	-104(%rbp), %rdx
	movq	-112(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L13:
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L15
	call	__stack_chk_fail@PLT
.L15:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE983:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 12.1.0-2ubuntu1~22.04) 12.1.0"
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

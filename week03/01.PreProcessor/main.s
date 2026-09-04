	.file	"main.c"
	.text
	.section .rdata,"dr"
.LC2:
	.ascii "Radius = %.2f\12\0"
.LC3:
	.ascii "Area = %.2f\12\0"
	.align 8
.LC4:
	.ascii "This message is included by the preprocessor.\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0
	mulss	%xmm0, %xmm0
	pxor	%xmm1, %xmm1
	cvtss2sd	%xmm0, %xmm1
	movsd	.LC1(%rip), %xmm0
	mulsd	%xmm1, %xmm0
	cvtsd2ss	%xmm0, %xmm0
	movss	%xmm0, -8(%rbp)
	pxor	%xmm0, %xmm0
	cvtss2sd	-4(%rbp), %xmm0
	movapd	%xmm0, %xmm1
	movapd	%xmm1, %xmm0
	movq	%xmm1, %rdx
	leaq	.LC2(%rip), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rcx
	call	printf
	pxor	%xmm0, %xmm0
	cvtss2sd	-8(%rbp), %xmm0
	movapd	%xmm0, %xmm1
	movapd	%xmm1, %xmm0
	movq	%xmm1, %rdx
	leaq	.LC3(%rip), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rcx
	call	printf
	leaq	.LC4(%rip), %rax
	movq	%rax, %rcx
	call	puts
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 4
.LC0:
	.long	1084227584
	.align 8
.LC1:
	.long	1374389535
	.long	1074339512
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev3, Built by MSYS2 project) 16.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef

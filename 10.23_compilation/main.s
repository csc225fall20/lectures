	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function main
LCPI0_0:
	.quad	4614253070214989087     ## double 3.1400000000000001
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movsd	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movl	$0, -4(%rbp)
	movsd	%xmm0, -16(%rbp)
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	leaq	-8(%rbp), %rsi
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movl	-8(%rbp), %esi
	movsd	-16(%rbp), %xmm0        ## xmm0 = mem[0],zero
	leaq	L_.str.2(%rip), %rdi
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	xorl	%esi, %esi
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	movl	%esi, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Type a value for x: "

L_.str.1:                               ## @.str.1
	.asciz	" %d"

L_.str.2:                               ## @.str.2
	.asciz	"x has value %d and y has value %f.\n"


.subsections_via_symbols

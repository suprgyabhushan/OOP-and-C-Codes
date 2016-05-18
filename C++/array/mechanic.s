	.file	"mechanic.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"Stack is already full"
	.text
	.align 2
	.globl	_ZN8Mechanic4pushEi
	.type	_ZN8Mechanic4pushEi, @function
_ZN8Mechanic4pushEi:
.LFB1043:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	400(%rax), %eax
	cmpl	$100, %eax
	jne	.L2
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	jmp	.L1
.L2:
	movq	-8(%rbp), %rax
	movl	400(%rax), %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 400(%rax)
	movq	-8(%rbp), %rax
	movl	400(%rax), %edx
	movq	-8(%rbp), %rax
	movslq	%edx, %rdx
	movl	-12(%rbp), %ecx
	movl	%ecx, (%rax,%rdx,4)
.L1:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1043:
	.size	_ZN8Mechanic4pushEi, .-_ZN8Mechanic4pushEi
	.section	.rodata
.LC1:
	.string	"The stack is empty"
	.align 8
.LC2:
	.string	"The completed work of the id is  "
	.text
	.align 2
	.globl	_ZN8Mechanic3popEv
	.type	_ZN8Mechanic3popEv, @function
_ZN8Mechanic3popEv:
.LFB1044:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	400(%rax), %eax
	cmpl	$-1, %eax
	jne	.L5
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	jmp	.L4
.L5:
	movq	-24(%rbp), %rax
	movl	400(%rax), %eax
	leal	-1(%rax), %ecx
	movq	-24(%rbp), %rdx
	movl	%ecx, 400(%rdx)
	movq	-24(%rbp), %rdx
	cltq
	movl	(%rdx,%rax,4), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 404(%rax)
	movq	-24(%rbp), %rax
	movl	404(%rax), %ebx
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.L4:
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1044:
	.size	_ZN8Mechanic3popEv, .-_ZN8Mechanic3popEv
	.section	.rodata
.LC3:
	.string	"The deleted item was "
	.text
	.align 2
	.globl	_ZN8Mechanic4popeEv
	.type	_ZN8Mechanic4popeEv, @function
_ZN8Mechanic4popeEv:
.LFB1045:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	movl	400(%rax), %eax
	movl	%eax, -20(%rbp)
	jmp	.L8
.L9:
	movq	-40(%rbp), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %ebx
	movl	$.LC3, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	subl	$1, -20(%rbp)
.L8:
	cmpl	$0, -20(%rbp)
	jns	.L9
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1045:
	.size	_ZN8Mechanic4popeEv, .-_ZN8Mechanic4popeEv
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1054:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L10
	cmpl	$65535, -8(%rbp)
	jne	.L10
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1054:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__ZN8Mechanic4pushEi, @function
_GLOBAL__sub_I__ZN8Mechanic4pushEi:
.LFB1055:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1055:
	.size	_GLOBAL__sub_I__ZN8Mechanic4pushEi, .-_GLOBAL__sub_I__ZN8Mechanic4pushEi
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__ZN8Mechanic4pushEi
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits

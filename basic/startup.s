.syntax unified
.cpu cortex-m3
.thumb

.global _estack
.global Reset_Handler

.section .isr_vector

.word _estack
.word Reset_Handler

.section .text

Reset_Handler:
	bl main
loop:
	b loop


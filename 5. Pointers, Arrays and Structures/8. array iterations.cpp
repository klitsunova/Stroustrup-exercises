#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    int* p = &numbers[0];

    for (size_t i = 0; i != 7; ++i) {
        std::cout << numbers[i];
    }

    std::cout << "\n";

    for (size_t i = 0; i != 7; ++i) {
        std::cout << *(p + i);
    }

    /*
    assembly code with indexes has
        mov  edx, DWORD PTR _numbers$[ebp+ecx*4]
    assembly code with pointers has
        mov  edx, DWORD PTR _p$[ebp]
        mov  eax, DWORD PTR [edx+ecx*4]
    other instructions are similar


    full assembly for indexes:
; Line 7
	mov	DWORD PTR _i$2[ebp], 0
	jmp	SHORT $LN4@main
$LN2@main:
	mov	eax, DWORD PTR _i$2[ebp]
	add	eax, 1
	mov	DWORD PTR _i$2[ebp], eax
$LN4@main:
	cmp	DWORD PTR _i$2[ebp], 7
	je	SHORT $LN3@main
; Line 8
	mov	ecx, DWORD PTR _i$2[ebp]
	mov	edx, DWORD PTR _numbers$[ebp+ecx*4]
	push	edx
	mov	ecx, OFFSET ?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A ; std::cout
	call	??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@H@Z ; std::basic_ostream<char,std::char_traits<char> >::operator<<
	npad	1
; Line 9
	jmp	SHORT $LN2@main



    full assembly for pointer:
; Line 13
	mov	DWORD PTR _i$1[ebp], 0
	jmp	SHORT $LN7@main
$LN5@main:
	mov	eax, DWORD PTR _i$1[ebp]
	add	eax, 1
	mov	DWORD PTR _i$1[ebp], eax
$LN7@main:
	cmp	DWORD PTR _i$1[ebp], 7
	je	SHORT $LN6@main
; Line 14
	mov	ecx, DWORD PTR _i$1[ebp]
	mov	edx, DWORD PTR _p$[ebp]
	mov	eax, DWORD PTR [edx+ecx*4]
	push	eax
	mov	ecx, OFFSET ?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A ; std::cout
	call	??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@H@Z ; std::basic_ostream<char,std::char_traits<char> >::operator<<
	npad	1
; Line 15
	jmp	SHORT $LN5@main
    */
}
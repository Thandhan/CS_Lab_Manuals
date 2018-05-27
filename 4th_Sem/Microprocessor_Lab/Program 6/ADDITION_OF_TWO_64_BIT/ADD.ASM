    AREA DATA1,DATA,READONLY
NUM1 DCD 0x11111111,0x22222222
NUM2 DCD 0x22222222,0x33333333

    AREA DATA2, DATA, READWRITE
RESULT DCD 0

    AREA Program, CODE, READONLY
ENTRY

export__main
export__use_two_region_memory
__use_two_region_memory
__main

        LDR R0,=NUM1      ;load the first num address
        ADD R0,#04        ;point to least significant
        LDR R1,=NUM2      ;load the second num address
        ADD R1,#4
        LDR R2,=RESULT
        ADD R2,#4         ;point to least significant
        
        LDR R3,[R0]       ;load first least significant num
        LDR R4,[R1]       ;load second least significant num
        ADD R3,R4         ;add least significants
        STR R3,[R2]       ;store first least significant num
        SUB R0,#4
        SUB R1,#4
        SUB R2,#4

        LDR R5,[R0]       ;load first most significant num
        LDR R6,[R1]
        ADDS R5,R6
        STR R5,[R2]

STOP    B STOP

        END
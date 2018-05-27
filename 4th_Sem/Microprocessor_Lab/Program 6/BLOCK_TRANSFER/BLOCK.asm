		AREA SOURCE, DATA, READONLY
        DCB "This Program is for to Transfer a block of data from READ ONLY MEMORY to READ WRITE MEMORY",0	   

		AREA DESTINATION, DATA, READWRITE

        AREA Program, CODE, READONLY
        
		ENTRY
        
		LDR R0,=SOURCE       ;load the address of source
		LDR R1,=DESTINATION	 ;load the address of destination
LOOP1	LDRB R3,[R0],#1
        STRB R3,[R1],#1
		CMP R0,#00
		BNE LOOP1
LOOP2   B LOOP2
		END	 


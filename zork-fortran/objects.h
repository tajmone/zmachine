C
C OBJECTS
C
	COMMON /OBJCTS/ OLNT,ODESC1(220),ODESC2(220),ODESCO(220),
     &	OACTIO(220),OFLAG1(220),OFLAG2(220),OFVAL(220),
     & 	OTVAL(220),OSIZE(220),OCAPAC(220),OROOM(220),
     &	OADV(220),OCAN(220),OREAD(220)
	INTEGER EQO(220,14)
	EQUIVALENCE (ODESC1, EQO)
C
	COMMON /OROOM2/ R2LNT,OROOM2(20),RROOM2(20)

C
C FLAGS
C
	LOGICAL TROLLF,CAGESF,BUCKTF,CAROFF,CAROZF,LWTIDF
	LOGICAL DOMEF,GLACRF,ECHOF,RIDDLF,LLDF,CYCLOF
	LOGICAL MAGICF,LITLDF,SAFEF,GNOMEF,GNODRF,MIRRMF
	LOGICAL EGYPTF,ONPOLF,BLABF,BRIEFF,SUPERF,BUOYF
	LOGICAL GRUNLF,GATEF,RAINBF,CAGETF,EMPTHF,DEFLAF
	LOGICAL GLACMF,FROBZF,ENDGMF,BADLKF,THFENF,SINGSF
	LOGICAL MRPSHF,MROPNF,WDOPNF,MR1F,MR2F,INQSTF
	LOGICAL FOLLWF,SPELLF,CPOUTF,CPUSHF
	COMMON /FINDEX/ TROLLF,CAGESF,BUCKTF,CAROFF,CAROZF,LWTIDF,
     &	DOMEF,GLACRF,ECHOF,RIDDLF,LLDF,CYCLOF,
     &	MAGICF,LITLDF,SAFEF,GNOMEF,GNODRF,MIRRMF,
     &	EGYPTF,ONPOLF,BLABF,BRIEFF,SUPERF,BUOYF,
     &	GRUNLF,GATEF,RAINBF,CAGETF,EMPTHF,DEFLAF,
     &	GLACMF,FROBZF,ENDGMF,BADLKF,THFENF,SINGSF,
     &	MRPSHF,MROPNF,WDOPNF,MR1F,MR2F,INQSTF,
     &	FOLLWF,SPELLF,CPOUTF,CPUSHF
	COMMON /FINDEX/ BTIEF,BINFF
	COMMON /FINDEX/ RVMNT,RVCLR,RVCYC,RVSND,RVGUA
	COMMON /FINDEX/ ORRUG,ORCAND,ORMTCH,ORLAMP
	COMMON /FINDEX/ MDIR,MLOC,POLEUF
	COMMON /FINDEX/ QUESNO,NQATT,CORRCT
	COMMON /FINDEX/ LCELL,PNUMB,ACELL,DCELL,CPHERE

	LOGICAL FLAGS(46)
	EQUIVALENCE (FLAGS(1),TROLLF)
	INTEGER SWITCH(22)
	EQUIVALENCE (SWITCH(1), BTIEF)
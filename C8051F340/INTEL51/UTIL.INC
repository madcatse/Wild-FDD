



        .DEC RRR�
         MOV A,R@.0
         DEC R@.0
         JNZ @..
         MOV A,R@.1
         DEC R@.1
         JNZ @..
         MOV A,R@.2
         DEC R@.2
        ..

        .INC RRR�
         INC R@.0
         MOV A,R@.0
         JNZ @..
         INC R@.1
         MOV A,R@.1
         JNZ @..
         INC R@.2
         MOV A,R@.2
        ..

        .MOV RRR,#�
         MOV R@.0,#0+(@.3+0.1#)
         MOV R@.1,#0+(@.3+0.2#)
         MOV R@.2,#0+(@.3+0.3#)
        ..

        .DEC RR�
         MOV A,R@.0
         DEC R@.0
         JNZ @..
         MOV A,R@.1
         DEC R@.1
        ..

        .INC RR�
         INC R@.0
         MOV A,R@.0
         JNZ @..
         INC R@.1
         MOV A,R@.1
        ..

        .DECW �
         MOV A,@.0+0
         DEC @.0+0
         JNZ @..
         MOV A,@.0+1
         DEC @.0+1
        ..

        .INCW �
         INC @.0+0
         MOV A,@.0+0
         JNZ @..
         INC @.0+1
         MOV A,@.0+1
        ..


        .MOV RR,#�
         MOV R@.0,#0+(@.2+0.1#)
         MOV R@.1,#0+(@.2+0.2#)
        ..


! ----------------------------------------------------------------------------
!      K. Sweebe
!      CS 471 - S. Cooper
!      Programming2 - Short Circuit
!
!       Demonstrate whether the Fortran programming language utilizes the
!       concept of short circuiting.
!       Short circuiting occurs when only part of an expression needs to be
!       evaluated before finding the value.
!       See the following logical rules:
!           if a  ^ b and not a then false
!           if a || b and a     then true
!
! ----------------------------------------------------------------------------

PROGRAM ShortCircuit
    implicit none

    write(*, *)  "Start short circuit test AND..."
    IF( .false. .AND. testshort() ) THEN
        write(*, *) ""
    ENDIF
    write(*, *) "...End test short circuit"

    
    write(*, *)  "Start short circuit test OR..."
    IF( .true. .OR. testshort() ) THEN
        write(*, *) ""
    ENDIF
    write(*, *) "...End test short circuit"

CONTAINS
LOGICAL FUNCTION testshort() result(Cond_2)
    write(*, *) "I just got executed"
END FUNCTION testshort



END PROGRAM ShortCircuit

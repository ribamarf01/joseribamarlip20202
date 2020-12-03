program bubblesort
    implicit none

    integer, dimension(99) :: Int_List
    integer :: Swap, Counter, Counter2, List_Len

    List_Len = 10

    if((List_Len > 0) .and. (List_Len < 100)) then

        do Counter = 1, List_Len
            read *, Int_List(Counter)
        end do

        do Counter = 1, List_Len
            do Counter2 = 2, List_Len
                if(Int_List(Counter2 - 1) > Int_List(Counter2)) then
                    Swap = Int_List(Counter2)
                    Int_List(Counter2) = Int_List(Counter2 - 1)
                    Int_List(Counter2 - 1) = Swap
                end if 
            end do
        end do

        print *, "Imprimindo números ordenados: "

        do  Counter = 1, List_Len
            print *, Int_List(Counter)
        end do

    end if

end program bubblesort
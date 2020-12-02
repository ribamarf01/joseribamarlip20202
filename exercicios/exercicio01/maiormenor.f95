program maiormenor
    implicit none
    integer, dimension(99) :: Int_List
    integer :: List_Len, Maior, Menor, Counter

    List_Len = 10

    if((List_Len > 0) .and. (List_Len < 100)) then
        
        do Counter = 1, List_Len
            read *, Int_List(Counter)
        end do

        Maior = Int_List(1)
        Menor = Int_List(1)

        do Counter = 2, List_Len
            if(Maior < Int_List(Counter)) then
                Maior = Int_List(Counter)
            else if(Menor > Int_List(Counter)) then
                Menor = Int_List(Counter)
            end if
        end do

        print *, "Maior número da lista é ", Maior
        print *, "Menor número da lista é ", Menor

    end if

end program maiormenor
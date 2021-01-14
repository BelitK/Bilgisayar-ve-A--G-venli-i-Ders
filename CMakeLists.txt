cmake_minimum_required(VERSION 3.17)
project(Bilgisayar_ve_A_Güvenlii)

set(CMAKE_CXX_STANDARD 14)

add_executable(Bilgisayar_ve_A_Güvenlii
        affine_sifreleme_hafta12.c
        cevirme.c
        Hafta11-Substitutions.cpp
        hill_cipher.c
        matris_carpim.c
        matris_toplam.c
        sezar.c
        viegenere_algoritma-28.12.2020.c matrisToplam.c)

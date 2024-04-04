# Linux-Ubuntu22.04.3_C-Language
## Compiling and Runing a C program Using GCC/MPI  on Ubuntu (Linux) without virtual machine.
![image](https://github.com/hasnae21/Linux-Ubuntu22.04.3-GCC-_C-Language/assets/92023794/7d346994-861a-4761-b31b-f4ca3f9f6762)


- install Ubuntu 22.04.3 from Microsoft store
- create username and password for a sudo user
- update and synchronisation :
  > sudo apt-get update   (--fix-missing)

- install GCC and verify the version using the flag -v :
    #### sudo apt-get install gcc
    #### gcc -v

- install MPI and verify the version using the flag -v :
    #### sudo apt install mpich
    #### mpicc -v

- create new folder in Linux :
  > ls /

  > mkdir folderName /

  > cd folderName /

---------------------------------------------------------------
## To compile the code in folderName using GCC :
  #### gcc -o Nom fileName.c

## To execute the code using GCC :
  #### ./Nom
----------------------------------------------------------------
## To compile the code in folderName using MPI :
  #### mpicc –o executable programme.c

## To execute the code using MPI :
  ####  mpirun –np NombreProcessus executable   // avec n=nbr_de_processus
----------------------------------------------------------------

- update when errors :
  > sudo apt update && sudo apt upgrade

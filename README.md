# Linux-Ubuntu22.04.3-GCC___C-Language
## Compiling and Runing a C program Using GCC on Ubuntu 22.04 LTS (Linux) without virtual machine.

- install Ubuntu 22.04.3 from Microsoft store
- create username and password for a sudo user
- update and synchronisation :
  > sudo apt-get update
   or
  > sudo apt-get update --fix-missing

- install GCC and verify the version using the flag -v :
    #### sudo apt-get install gcc
    #### gcc -v

- create new folder in Linux :
  > ls
  &
  > mkdir folderName
  &
  > cd folderName

- update when errors :
  > sudo apt update && sudo apt upgrade


### To compile the code in folderName :
  #### gcc -o Nom fileName.c

### To execute the code :
  #### ./Nom

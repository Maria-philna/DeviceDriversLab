cmd_/home/maria/Exercise5/hello.ko := ld -r -m elf_x86_64 -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o /home/maria/Exercise5/hello.ko /home/maria/Exercise5/hello.o /home/maria/Exercise5/hello.mod.o ;  true

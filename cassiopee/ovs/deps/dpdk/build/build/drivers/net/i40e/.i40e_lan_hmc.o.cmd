cmd_i40e_lan_hmc.o = aarch64-linux-gnu-gcc -Wp,-MD,./.i40e_lan_hmc.o.d.tmp   -pthread  -march=armv8-a+crc+crypto -DRTE_MACHINE_CPUFLAG_NEON -DRTE_MACHINE_CPUFLAG_CRC32 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PMULL -DRTE_MACHINE_CPUFLAG_SHA1 -DRTE_MACHINE_CPUFLAG_SHA2  -I/home/johnao/ovs/deps/dpdk/build/include -include /home/johnao/ovs/deps/dpdk/build/include/rte_config.h -D_GNU_SOURCE -O3 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Wimplicit-fallthrough=2 -Wno-format-truncation -DPF_DRIVER -DVF_DRIVER -DINTEGRATED_VF -DX722_A0_SUPPORT -DALLOW_EXPERIMENTAL_API -Wno-error -Wno-sign-compare -Wno-unused-value -Wno-unused-parameter -Wno-strict-aliasing -Wno-format -Wno-missing-field-initializers -Wno-pointer-to-int-cast -Wno-format-nonliteral -Wno-format-security -Wno-unused-variable -Wno-unused-but-set-variable  -isystem /home/johnao/include -o i40e_lan_hmc.o -c /home/johnao/ovs/deps/dpdk/drivers/net/i40e/base/i40e_lan_hmc.c 

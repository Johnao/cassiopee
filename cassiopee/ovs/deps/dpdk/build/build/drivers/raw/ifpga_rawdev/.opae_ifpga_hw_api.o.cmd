cmd_opae_ifpga_hw_api.o = aarch64-linux-gnu-gcc -Wp,-MD,./.opae_ifpga_hw_api.o.d.tmp   -pthread  -march=armv8-a+crc+crypto -DRTE_MACHINE_CPUFLAG_NEON -DRTE_MACHINE_CPUFLAG_CRC32 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PMULL -DRTE_MACHINE_CPUFLAG_SHA1 -DRTE_MACHINE_CPUFLAG_SHA2  -I/home/johnao/ovs/deps/dpdk/build/include -include /home/johnao/ovs/deps/dpdk/build/include/rte_config.h -D_GNU_SOURCE -DALLOW_EXPERIMENTAL_API -O3 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Wimplicit-fallthrough=2 -Wno-format-truncation -I/home/johnao/ovs/deps/dpdk/drivers/bus/ifpga -I/home/johnao/ovs/deps/dpdk/drivers/raw/ifpga_rawdev -I/home/johnao/ovs/deps/dpdk/drivers/raw/ifpga_rawdev/base/osdep_rte   -isystem /home/johnao/include -o opae_ifpga_hw_api.o -c /home/johnao/ovs/deps/dpdk/drivers/raw/ifpga_rawdev/base/opae_ifpga_hw_api.c 

cmd_qat_qp.o = aarch64-linux-gnu-gcc -Wp,-MD,./.qat_qp.o.d.tmp   -pthread  -march=armv8-a+crc+crypto -DRTE_MACHINE_CPUFLAG_NEON -DRTE_MACHINE_CPUFLAG_CRC32 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PMULL -DRTE_MACHINE_CPUFLAG_SHA1 -DRTE_MACHINE_CPUFLAG_SHA2  -I/home/johnao/ovs/deps/dpdk/build/include -include /home/johnao/ovs/deps/dpdk/build/include/rte_config.h -D_GNU_SOURCE -I/home/johnao/ovs/deps/dpdk/drivers/common/qat/qat_adf -I/home/johnao/ovs/deps/dpdk/drivers/common/qat -I/home/johnao/ovs/deps/dpdk/drivers/crypto/qat -I/home/johnao/ovs/deps/dpdk/drivers/compress/qat -DALLOW_EXPERIMENTAL_API -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Wimplicit-fallthrough=2 -Wno-format-truncation -O3   -isystem /home/johnao/include -o qat_qp.o -c /home/johnao/ovs/deps/dpdk/drivers/common/qat/qat_qp.c 

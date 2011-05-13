/*
 * SYSCALL_DEFINE0(getgid)
 */
#include "trinity.h"
#include "sanitise.h"

struct syscall syscall_getgid16 = {
	.name = "getgid16",
	.num_args = 0,
};

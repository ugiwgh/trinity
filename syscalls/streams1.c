/*
 */
#include "trinity.h"
#include "sanitise.h"

struct syscall syscall_streams1 = {
	.name = "ni_syscall (streams1)",
	.num_args = 6,
	.flags = NI_SYSCALL,
};

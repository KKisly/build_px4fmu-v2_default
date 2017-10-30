/********************************************************************************
 * include/sched.h
 *
 *   Copyright (C) 2007-2009, 2011, 2013, 2015-2016 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ********************************************************************************/

#ifndef __INCLUDE_SCHED_H
#define __INCLUDE_SCHED_H

/********************************************************************************
 * Included Files
 ********************************************************************************/

#include <nuttx/config.h>

#include <sys/types.h>
#include <stdint.h>
#include <stdbool.h>
#include <nuttx/sched.h>

/********************************************************************************
 * Pre-processor Definitions
 ********************************************************************************/
/* Task Management Definitions **************************************************/

/* POSIX-like scheduling policies */

#define SCHED_FIFO       1  /* FIFO priority scheduling policy */
#define SCHED_RR         2  /* Round robin scheduling policy */
#define SCHED_SPORADIC   3  /* Sporadic scheduling policy */
#define SCHED_OTHER      4  /* Not supported */

/* Maximum number of SCHED_SPORADIC replenishments */

#define SS_REPL_MAX      CONFIG_SCHED_SPORADIC_MAXREPL

/* Pthread definitions **********************************************************/

#define PTHREAD_KEYS_MAX CONFIG_NPTHREAD_KEYS

/* CPU affinity mask helpers ***************************************************/
/* These are not standard but are defined for Linux compatibility */

#ifdef CONFIG_SMP

/* void CPU_ZERO(FAR cpu_set_t *set); */

#  define CPU_ZERO(s) do { *(s) = 0; } while (0)

/* void CPU_SET(int cpu, FAR cpu_set_t *set); */

#  define CPU_SET(c,s) do { *(s) |= (1 << (c)); } while (0)

/* void CPU_CLR(int cpu, FAR cpu_set_t *set); */

#  define CPU_CLR(c,s) do { *(s) &= ~(1 << (c)); } while (0)

/* int  CPU_ISSET(int cpu, FAR const cpu_set_t *set); */

#  define CPU_ISSET(c,s) ((*(s) & (1 << (c))) != 0)

/* int CPU_COUNT(FAR const cpu_set_t *set); */

#  define CPU_COUNT(s) sched_cpu_count(s)

/* void CPU_AND(FAR cpu_set_t *destset, FAR const cpu_set_t *srcset1,
 *              FAR const cpu_set_t *srcset2);
 */

#  define CPU_AND(d,s1,s2) do { *(d) = *(s1) & *(s2); } while (0)

/* void CPU_OR(FAR cpu_set_t *destset, FAR const cpu_set_t *srcset1,
 *             FAR const cpu_set_t *srcset2);
 */

#  define CPU_OR(d,s1,s2) do { *(d) = *(s1) | *(s2); } while (0)

/* void CPU_XOR(FAR cpu_set_t *destset, FAR const cpu_set_t *srcset1,
 *              FAR const cpu_set_t *srcset2);
 */

#  define CPU_XOR(d,s1,s2) do { *(d) = *(s1) ^ *(s2); } while (0)

/* int CPU_EQUAL(FAR const cpu_set_t *set1, FAR const cpu_set_t *set2); */

#  define CPU_EQUAL(s1,s2) (*(s2) == *(s2))

/* REVISIT: Variably sized CPU sets are not supported */
/* FAR cpu_set_t *CPU_ALLOC(int num_cpus); */

#  define CPU_ALLOC(n) (FAR cpu_set_t *)malloc(sizeof(cpu_set_t));

/* void CPU_FREE(cpu_set_t *set); */

#  define CPU_ALLOC(s) free(s)

/* size_t CPU_ALLOC_SIZE(int num_cpus); */

#  define CPU_ALLOC_SIZE(n) sizeof(cpu_set_t)

/* void CPU_ZERO_S(size_t setsize, FAR cpu_set_t *set); */

#  define CPU_ZERO_S(n,s) CPU_ZERO_S(s)

/* void CPU_SET_S(int cpu, size_t setsize, FAR cpu_set_t *set); */

#  define CPU_SET_S(c,n,s) CPU_SET(c,s)

/* void CPU_CLR_S(int cpu, size_t setsize, FAR cpu_set_t *set); */

#  define CPU_CLR_S(c,n,s) CPU_CLR(c,s)

/* int CPU_ISSET_S(int cpu, size_t setsize, FAR const cpu_set_t *set); */

#  define CPU_ISSET_S(c,n,s) CPU_ISSET(c,s)

/* int CPU_COUNT_S(size_t setsize, FAR const cpu_set_t *set); */

#  define CPU_COUNT_S(n,s) CPU_COUNT(s)

/* void CPU_AND_S(size_t setsize, FAR cpu_set_t *destset,
 *                FAR const cpu_set_t *srcset1,
 *                FAR const cpu_set_t *srcset2);
 */

#  define CPU_AND_S(n,d,s1,s2) CPU_AND(d,s1,s2)

/* void CPU_OR_S(size_t setsize, FAR cpu_set_t *destset,
 *              FAR const cpu_set_t *srcset1,
 *              FAR const cpu_set_t *srcset2);
 */

#  define CPU_OR_S(n,d,s1,s2) CPU_OR(d,s1,s2)

/* void CPU_XOR_S(size_t setsize, FAR cpu_set_t *destset,
 *                FAR const cpu_set_t *srcset1,
 *                FAR const cpu_set_t *srcset2);
 */

#  define CPU_XOR_S(n,d,s1,s2) CPU_XOR(d,s1,s2)

/* int CPU_EQUAL_S(size_t setsize, FAR const cpu_set_t *set1,
 *                 FAR const cpu_set_t *set2);
 */

#  define CPU_EQUAL_S(n,s1,s2) CPU_EQUAL(s1,s2)

#endif /* CONFIG_SMP */

/********************************************************************************
 * Public Type Definitions
 ********************************************************************************/

/* This is the POSIX-like scheduling parameter structure */

struct sched_param
{
  int sched_priority;                   /* Base thread priority */

#ifdef CONFIG_SCHED_SPORADIC
  int sched_ss_low_priority;            /* Low scheduling priority for sporadic
                                         * server */
  struct timespec sched_ss_repl_period; /* Replenishment period for sporadic
                                         * server. */
  struct timespec sched_ss_init_budget; /* Initial budget for sporadic server */
  int sched_ss_max_repl;                /* Maximum pending replenishments for
                                         * sporadic server. */
#endif
};

/********************************************************************************
 * Public Data
 ********************************************************************************/

#ifndef __ASSEMBLY__
#undef EXTERN
#if defined(__cplusplus)
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

/********************************************************************************
 * Public Function Prototypes
 ********************************************************************************/

/* Task Control Interfaces (non-standard) */

int    task_init(FAR struct tcb_s *tcb, const char *name, int priority,
                 FAR uint32_t *stack, uint32_t stack_size, main_t entry,
                 FAR char * const argv[]);
int    task_activate(FAR struct tcb_s *tcb);

#ifndef CONFIG_BUILD_KERNEL
int    task_create(FAR const char *name, int priority, int stack_size,
                   main_t entry, FAR char * const argv[]);
#endif
int    task_delete(pid_t pid);
int    task_restart(pid_t pid);

/* Task Scheduling Interfaces (based on POSIX APIs) */

int    sched_setparam(pid_t pid, const struct sched_param *param);
int    sched_getparam(pid_t pid, struct sched_param *param);
int    sched_setscheduler(pid_t pid, int policy,
                          FAR const struct sched_param *param);
int    sched_getscheduler(pid_t pid);
int    sched_yield(void);
int    sched_get_priority_max(int policy);
int    sched_get_priority_min(int policy);
int    sched_rr_get_interval(pid_t pid, FAR struct timespec *interval);

#ifdef CONFIG_SMP
/* Task affinity */

int    sched_setaffinity(pid_t pid, size_t cpusetsize,
                         FAR const cpu_set_t *mask);
int    sched_getaffinity(pid_t pid, size_t cpusetsize, FAR cpu_set_t *mask);
int    sched_cpu_count(FAR const cpu_set_t *set);
#endif /* CONFIG_SMP */

/* Task Switching Interfaces (non-standard) */

int    sched_lock(void);
int    sched_unlock(void);
int    sched_lockcount(void);

/* Queries */

bool   sched_idletask(void);

#undef EXTERN
#if defined(__cplusplus)
}
#endif
#endif /* __ASSEMBLY__ */

#endif /* __INCLUDE_SCHED_H */
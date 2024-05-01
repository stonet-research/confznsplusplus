/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_ACCEL_KVM_GENERATED_TRACERS_H
#define TRACE_ACCEL_KVM_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_KVM_IOCTL_EVENT;
extern TraceEvent _TRACE_KVM_VM_IOCTL_EVENT;
extern TraceEvent _TRACE_KVM_VCPU_IOCTL_EVENT;
extern TraceEvent _TRACE_KVM_RUN_EXIT_EVENT;
extern TraceEvent _TRACE_KVM_DEVICE_IOCTL_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_REG_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_REG_SET_EVENT;
extern TraceEvent _TRACE_KVM_INIT_VCPU_EVENT;
extern TraceEvent _TRACE_KVM_IRQCHIP_COMMIT_ROUTES_EVENT;
extern TraceEvent _TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE_EVENT;
extern TraceEvent _TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE_EVENT;
extern TraceEvent _TRACE_KVM_IRQCHIP_RELEASE_VIRQ_EVENT;
extern TraceEvent _TRACE_KVM_SET_IOEVENTFD_MMIO_EVENT;
extern TraceEvent _TRACE_KVM_SET_IOEVENTFD_PIO_EVENT;
extern TraceEvent _TRACE_KVM_SET_USER_MEMORY_EVENT;
extern TraceEvent _TRACE_KVM_CLEAR_DIRTY_LOG_EVENT;
extern TraceEvent _TRACE_KVM_RESAMPLE_FD_NOTIFY_EVENT;
extern TraceEvent _TRACE_KVM_DIRTY_RING_FULL_EVENT;
extern TraceEvent _TRACE_KVM_DIRTY_RING_REAP_VCPU_EVENT;
extern TraceEvent _TRACE_KVM_DIRTY_RING_PAGE_EVENT;
extern TraceEvent _TRACE_KVM_DIRTY_RING_REAPER_EVENT;
extern TraceEvent _TRACE_KVM_DIRTY_RING_REAP_EVENT;
extern TraceEvent _TRACE_KVM_DIRTY_RING_REAPER_KICK_EVENT;
extern TraceEvent _TRACE_KVM_DIRTY_RING_FLUSH_EVENT;
extern uint16_t _TRACE_KVM_IOCTL_DSTATE;
extern uint16_t _TRACE_KVM_VM_IOCTL_DSTATE;
extern uint16_t _TRACE_KVM_VCPU_IOCTL_DSTATE;
extern uint16_t _TRACE_KVM_RUN_EXIT_DSTATE;
extern uint16_t _TRACE_KVM_DEVICE_IOCTL_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_REG_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_REG_SET_DSTATE;
extern uint16_t _TRACE_KVM_INIT_VCPU_DSTATE;
extern uint16_t _TRACE_KVM_IRQCHIP_COMMIT_ROUTES_DSTATE;
extern uint16_t _TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE_DSTATE;
extern uint16_t _TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE_DSTATE;
extern uint16_t _TRACE_KVM_IRQCHIP_RELEASE_VIRQ_DSTATE;
extern uint16_t _TRACE_KVM_SET_IOEVENTFD_MMIO_DSTATE;
extern uint16_t _TRACE_KVM_SET_IOEVENTFD_PIO_DSTATE;
extern uint16_t _TRACE_KVM_SET_USER_MEMORY_DSTATE;
extern uint16_t _TRACE_KVM_CLEAR_DIRTY_LOG_DSTATE;
extern uint16_t _TRACE_KVM_RESAMPLE_FD_NOTIFY_DSTATE;
extern uint16_t _TRACE_KVM_DIRTY_RING_FULL_DSTATE;
extern uint16_t _TRACE_KVM_DIRTY_RING_REAP_VCPU_DSTATE;
extern uint16_t _TRACE_KVM_DIRTY_RING_PAGE_DSTATE;
extern uint16_t _TRACE_KVM_DIRTY_RING_REAPER_DSTATE;
extern uint16_t _TRACE_KVM_DIRTY_RING_REAP_DSTATE;
extern uint16_t _TRACE_KVM_DIRTY_RING_REAPER_KICK_DSTATE;
extern uint16_t _TRACE_KVM_DIRTY_RING_FLUSH_DSTATE;
#define TRACE_KVM_IOCTL_ENABLED 1
#define TRACE_KVM_VM_IOCTL_ENABLED 1
#define TRACE_KVM_VCPU_IOCTL_ENABLED 1
#define TRACE_KVM_RUN_EXIT_ENABLED 1
#define TRACE_KVM_DEVICE_IOCTL_ENABLED 1
#define TRACE_KVM_FAILED_REG_GET_ENABLED 1
#define TRACE_KVM_FAILED_REG_SET_ENABLED 1
#define TRACE_KVM_INIT_VCPU_ENABLED 1
#define TRACE_KVM_IRQCHIP_COMMIT_ROUTES_ENABLED 1
#define TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE_ENABLED 1
#define TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE_ENABLED 1
#define TRACE_KVM_IRQCHIP_RELEASE_VIRQ_ENABLED 1
#define TRACE_KVM_SET_IOEVENTFD_MMIO_ENABLED 1
#define TRACE_KVM_SET_IOEVENTFD_PIO_ENABLED 1
#define TRACE_KVM_SET_USER_MEMORY_ENABLED 1
#define TRACE_KVM_CLEAR_DIRTY_LOG_ENABLED 1
#define TRACE_KVM_RESAMPLE_FD_NOTIFY_ENABLED 1
#define TRACE_KVM_DIRTY_RING_FULL_ENABLED 1
#define TRACE_KVM_DIRTY_RING_REAP_VCPU_ENABLED 1
#define TRACE_KVM_DIRTY_RING_PAGE_ENABLED 1
#define TRACE_KVM_DIRTY_RING_REAPER_ENABLED 1
#define TRACE_KVM_DIRTY_RING_REAP_ENABLED 1
#define TRACE_KVM_DIRTY_RING_REAPER_KICK_ENABLED 1
#define TRACE_KVM_DIRTY_RING_FLUSH_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_KVM_IOCTL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_IOCTL) || \
    false)

static inline void _nocheck__trace_kvm_ioctl(int type, void * arg)
{
    if (trace_event_get_state(TRACE_KVM_IOCTL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_ioctl " "type 0x%x, arg %p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , type, arg);
#line 100 "trace/trace-accel_kvm.h"
        } else {
#line 4 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_ioctl " "type 0x%x, arg %p" "\n", type, arg);
#line 104 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_ioctl(int type, void * arg)
{
    if (true) {
        _nocheck__trace_kvm_ioctl(type, arg);
    }
}

#define TRACE_KVM_VM_IOCTL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_VM_IOCTL) || \
    false)

static inline void _nocheck__trace_kvm_vm_ioctl(int type, void * arg)
{
    if (trace_event_get_state(TRACE_KVM_VM_IOCTL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_vm_ioctl " "type 0x%x, arg %p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , type, arg);
#line 131 "trace/trace-accel_kvm.h"
        } else {
#line 5 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_vm_ioctl " "type 0x%x, arg %p" "\n", type, arg);
#line 135 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_vm_ioctl(int type, void * arg)
{
    if (true) {
        _nocheck__trace_kvm_vm_ioctl(type, arg);
    }
}

#define TRACE_KVM_VCPU_IOCTL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_VCPU_IOCTL) || \
    false)

static inline void _nocheck__trace_kvm_vcpu_ioctl(int cpu_index, int type, void * arg)
{
    if (trace_event_get_state(TRACE_KVM_VCPU_IOCTL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_vcpu_ioctl " "cpu_index %d, type 0x%x, arg %p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, type, arg);
#line 162 "trace/trace-accel_kvm.h"
        } else {
#line 6 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_vcpu_ioctl " "cpu_index %d, type 0x%x, arg %p" "\n", cpu_index, type, arg);
#line 166 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_vcpu_ioctl(int cpu_index, int type, void * arg)
{
    if (true) {
        _nocheck__trace_kvm_vcpu_ioctl(cpu_index, type, arg);
    }
}

#define TRACE_KVM_RUN_EXIT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_RUN_EXIT) || \
    false)

static inline void _nocheck__trace_kvm_run_exit(int cpu_index, uint32_t reason)
{
    if (trace_event_get_state(TRACE_KVM_RUN_EXIT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_run_exit " "cpu_index %d, reason %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, reason);
#line 193 "trace/trace-accel_kvm.h"
        } else {
#line 7 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_run_exit " "cpu_index %d, reason %d" "\n", cpu_index, reason);
#line 197 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_run_exit(int cpu_index, uint32_t reason)
{
    if (true) {
        _nocheck__trace_kvm_run_exit(cpu_index, reason);
    }
}

#define TRACE_KVM_DEVICE_IOCTL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_DEVICE_IOCTL) || \
    false)

static inline void _nocheck__trace_kvm_device_ioctl(int fd, int type, void * arg)
{
    if (trace_event_get_state(TRACE_KVM_DEVICE_IOCTL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_device_ioctl " "dev fd %d, type 0x%x, arg %p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , fd, type, arg);
#line 224 "trace/trace-accel_kvm.h"
        } else {
#line 8 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_device_ioctl " "dev fd %d, type 0x%x, arg %p" "\n", fd, type, arg);
#line 228 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_device_ioctl(int fd, int type, void * arg)
{
    if (true) {
        _nocheck__trace_kvm_device_ioctl(fd, type, arg);
    }
}

#define TRACE_KVM_FAILED_REG_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_REG_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_reg_get(uint64_t id, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_REG_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_reg_get " "Warning: Unable to retrieve ONEREG %" PRIu64 " from KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, msg);
#line 255 "trace/trace-accel_kvm.h"
        } else {
#line 9 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_failed_reg_get " "Warning: Unable to retrieve ONEREG %" PRIu64 " from KVM: %s" "\n", id, msg);
#line 259 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_failed_reg_get(uint64_t id, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_reg_get(id, msg);
    }
}

#define TRACE_KVM_FAILED_REG_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_REG_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_reg_set(uint64_t id, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_REG_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_reg_set " "Warning: Unable to set ONEREG %" PRIu64 " to KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, msg);
#line 286 "trace/trace-accel_kvm.h"
        } else {
#line 10 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_failed_reg_set " "Warning: Unable to set ONEREG %" PRIu64 " to KVM: %s" "\n", id, msg);
#line 290 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_failed_reg_set(uint64_t id, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_reg_set(id, msg);
    }
}

#define TRACE_KVM_INIT_VCPU_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_INIT_VCPU) || \
    false)

static inline void _nocheck__trace_kvm_init_vcpu(int cpu_index, unsigned long arch_cpu_id)
{
    if (trace_event_get_state(TRACE_KVM_INIT_VCPU) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_init_vcpu " "index: %d id: %lu" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , cpu_index, arch_cpu_id);
#line 317 "trace/trace-accel_kvm.h"
        } else {
#line 11 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_init_vcpu " "index: %d id: %lu" "\n", cpu_index, arch_cpu_id);
#line 321 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_init_vcpu(int cpu_index, unsigned long arch_cpu_id)
{
    if (true) {
        _nocheck__trace_kvm_init_vcpu(cpu_index, arch_cpu_id);
    }
}

#define TRACE_KVM_IRQCHIP_COMMIT_ROUTES_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_IRQCHIP_COMMIT_ROUTES) || \
    false)

static inline void _nocheck__trace_kvm_irqchip_commit_routes(void)
{
    if (trace_event_get_state(TRACE_KVM_IRQCHIP_COMMIT_ROUTES) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_irqchip_commit_routes " "" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 348 "trace/trace-accel_kvm.h"
        } else {
#line 12 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_irqchip_commit_routes " "" "\n");
#line 352 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_irqchip_commit_routes(void)
{
    if (true) {
        _nocheck__trace_kvm_irqchip_commit_routes();
    }
}

#define TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE) || \
    false)

static inline void _nocheck__trace_kvm_irqchip_add_msi_route(char * name, int vector, int virq)
{
    if (trace_event_get_state(TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_irqchip_add_msi_route " "dev %s vector %d virq %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , name, vector, virq);
#line 379 "trace/trace-accel_kvm.h"
        } else {
#line 13 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_irqchip_add_msi_route " "dev %s vector %d virq %d" "\n", name, vector, virq);
#line 383 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_irqchip_add_msi_route(char * name, int vector, int virq)
{
    if (true) {
        _nocheck__trace_kvm_irqchip_add_msi_route(name, vector, virq);
    }
}

#define TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE) || \
    false)

static inline void _nocheck__trace_kvm_irqchip_update_msi_route(int virq)
{
    if (trace_event_get_state(TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_irqchip_update_msi_route " "Updating MSI route virq=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , virq);
#line 410 "trace/trace-accel_kvm.h"
        } else {
#line 14 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_irqchip_update_msi_route " "Updating MSI route virq=%d" "\n", virq);
#line 414 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_irqchip_update_msi_route(int virq)
{
    if (true) {
        _nocheck__trace_kvm_irqchip_update_msi_route(virq);
    }
}

#define TRACE_KVM_IRQCHIP_RELEASE_VIRQ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_IRQCHIP_RELEASE_VIRQ) || \
    false)

static inline void _nocheck__trace_kvm_irqchip_release_virq(int virq)
{
    if (trace_event_get_state(TRACE_KVM_IRQCHIP_RELEASE_VIRQ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_irqchip_release_virq " "virq %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , virq);
#line 441 "trace/trace-accel_kvm.h"
        } else {
#line 15 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_irqchip_release_virq " "virq %d" "\n", virq);
#line 445 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_irqchip_release_virq(int virq)
{
    if (true) {
        _nocheck__trace_kvm_irqchip_release_virq(virq);
    }
}

#define TRACE_KVM_SET_IOEVENTFD_MMIO_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SET_IOEVENTFD_MMIO) || \
    false)

static inline void _nocheck__trace_kvm_set_ioeventfd_mmio(int fd, uint64_t addr, uint32_t val, bool assign, uint32_t size, bool datamatch)
{
    if (trace_event_get_state(TRACE_KVM_SET_IOEVENTFD_MMIO) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_set_ioeventfd_mmio " "fd: %d @0x%" PRIx64 " val=0x%x assign: %d size: %d match: %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , fd, addr, val, assign, size, datamatch);
#line 472 "trace/trace-accel_kvm.h"
        } else {
#line 16 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_set_ioeventfd_mmio " "fd: %d @0x%" PRIx64 " val=0x%x assign: %d size: %d match: %d" "\n", fd, addr, val, assign, size, datamatch);
#line 476 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_set_ioeventfd_mmio(int fd, uint64_t addr, uint32_t val, bool assign, uint32_t size, bool datamatch)
{
    if (true) {
        _nocheck__trace_kvm_set_ioeventfd_mmio(fd, addr, val, assign, size, datamatch);
    }
}

#define TRACE_KVM_SET_IOEVENTFD_PIO_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SET_IOEVENTFD_PIO) || \
    false)

static inline void _nocheck__trace_kvm_set_ioeventfd_pio(int fd, uint16_t addr, uint32_t val, bool assign, uint32_t size, bool datamatch)
{
    if (trace_event_get_state(TRACE_KVM_SET_IOEVENTFD_PIO) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_set_ioeventfd_pio " "fd: %d @0x%x val=0x%x assign: %d size: %d match: %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , fd, addr, val, assign, size, datamatch);
#line 503 "trace/trace-accel_kvm.h"
        } else {
#line 17 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_set_ioeventfd_pio " "fd: %d @0x%x val=0x%x assign: %d size: %d match: %d" "\n", fd, addr, val, assign, size, datamatch);
#line 507 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_set_ioeventfd_pio(int fd, uint16_t addr, uint32_t val, bool assign, uint32_t size, bool datamatch)
{
    if (true) {
        _nocheck__trace_kvm_set_ioeventfd_pio(fd, addr, val, assign, size, datamatch);
    }
}

#define TRACE_KVM_SET_USER_MEMORY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_SET_USER_MEMORY) || \
    false)

static inline void _nocheck__trace_kvm_set_user_memory(uint32_t slot, uint32_t flags, uint64_t guest_phys_addr, uint64_t memory_size, uint64_t userspace_addr, int ret)
{
    if (trace_event_get_state(TRACE_KVM_SET_USER_MEMORY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_set_user_memory " "Slot#%d flags=0x%x gpa=0x%"PRIx64 " size=0x%"PRIx64 " ua=0x%"PRIx64 " ret=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , slot, flags, guest_phys_addr, memory_size, userspace_addr, ret);
#line 534 "trace/trace-accel_kvm.h"
        } else {
#line 18 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_set_user_memory " "Slot#%d flags=0x%x gpa=0x%"PRIx64 " size=0x%"PRIx64 " ua=0x%"PRIx64 " ret=%d" "\n", slot, flags, guest_phys_addr, memory_size, userspace_addr, ret);
#line 538 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_set_user_memory(uint32_t slot, uint32_t flags, uint64_t guest_phys_addr, uint64_t memory_size, uint64_t userspace_addr, int ret)
{
    if (true) {
        _nocheck__trace_kvm_set_user_memory(slot, flags, guest_phys_addr, memory_size, userspace_addr, ret);
    }
}

#define TRACE_KVM_CLEAR_DIRTY_LOG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_CLEAR_DIRTY_LOG) || \
    false)

static inline void _nocheck__trace_kvm_clear_dirty_log(uint32_t slot, uint64_t start, uint32_t size)
{
    if (trace_event_get_state(TRACE_KVM_CLEAR_DIRTY_LOG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_clear_dirty_log " "slot#%"PRId32" start 0x%"PRIx64" size 0x%"PRIx32 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , slot, start, size);
#line 565 "trace/trace-accel_kvm.h"
        } else {
#line 19 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_clear_dirty_log " "slot#%"PRId32" start 0x%"PRIx64" size 0x%"PRIx32 "\n", slot, start, size);
#line 569 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_clear_dirty_log(uint32_t slot, uint64_t start, uint32_t size)
{
    if (true) {
        _nocheck__trace_kvm_clear_dirty_log(slot, start, size);
    }
}

#define TRACE_KVM_RESAMPLE_FD_NOTIFY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_RESAMPLE_FD_NOTIFY) || \
    false)

static inline void _nocheck__trace_kvm_resample_fd_notify(int gsi)
{
    if (trace_event_get_state(TRACE_KVM_RESAMPLE_FD_NOTIFY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 20 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_resample_fd_notify " "gsi %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , gsi);
#line 596 "trace/trace-accel_kvm.h"
        } else {
#line 20 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_resample_fd_notify " "gsi %d" "\n", gsi);
#line 600 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_resample_fd_notify(int gsi)
{
    if (true) {
        _nocheck__trace_kvm_resample_fd_notify(gsi);
    }
}

#define TRACE_KVM_DIRTY_RING_FULL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_DIRTY_RING_FULL) || \
    false)

static inline void _nocheck__trace_kvm_dirty_ring_full(int id)
{
    if (trace_event_get_state(TRACE_KVM_DIRTY_RING_FULL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 21 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_dirty_ring_full " "vcpu %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id);
#line 627 "trace/trace-accel_kvm.h"
        } else {
#line 21 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_dirty_ring_full " "vcpu %d" "\n", id);
#line 631 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_dirty_ring_full(int id)
{
    if (true) {
        _nocheck__trace_kvm_dirty_ring_full(id);
    }
}

#define TRACE_KVM_DIRTY_RING_REAP_VCPU_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_DIRTY_RING_REAP_VCPU) || \
    false)

static inline void _nocheck__trace_kvm_dirty_ring_reap_vcpu(int id)
{
    if (trace_event_get_state(TRACE_KVM_DIRTY_RING_REAP_VCPU) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 22 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_dirty_ring_reap_vcpu " "vcpu %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id);
#line 658 "trace/trace-accel_kvm.h"
        } else {
#line 22 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_dirty_ring_reap_vcpu " "vcpu %d" "\n", id);
#line 662 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_dirty_ring_reap_vcpu(int id)
{
    if (true) {
        _nocheck__trace_kvm_dirty_ring_reap_vcpu(id);
    }
}

#define TRACE_KVM_DIRTY_RING_PAGE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_DIRTY_RING_PAGE) || \
    false)

static inline void _nocheck__trace_kvm_dirty_ring_page(int vcpu, uint32_t slot, uint64_t offset)
{
    if (trace_event_get_state(TRACE_KVM_DIRTY_RING_PAGE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 23 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_dirty_ring_page " "vcpu %d fetch %"PRIu32" offset 0x%"PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , vcpu, slot, offset);
#line 689 "trace/trace-accel_kvm.h"
        } else {
#line 23 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_dirty_ring_page " "vcpu %d fetch %"PRIu32" offset 0x%"PRIx64 "\n", vcpu, slot, offset);
#line 693 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_dirty_ring_page(int vcpu, uint32_t slot, uint64_t offset)
{
    if (true) {
        _nocheck__trace_kvm_dirty_ring_page(vcpu, slot, offset);
    }
}

#define TRACE_KVM_DIRTY_RING_REAPER_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_DIRTY_RING_REAPER) || \
    false)

static inline void _nocheck__trace_kvm_dirty_ring_reaper(const char * s)
{
    if (trace_event_get_state(TRACE_KVM_DIRTY_RING_REAPER) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 24 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_dirty_ring_reaper " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , s);
#line 720 "trace/trace-accel_kvm.h"
        } else {
#line 24 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_dirty_ring_reaper " "%s" "\n", s);
#line 724 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_dirty_ring_reaper(const char * s)
{
    if (true) {
        _nocheck__trace_kvm_dirty_ring_reaper(s);
    }
}

#define TRACE_KVM_DIRTY_RING_REAP_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_DIRTY_RING_REAP) || \
    false)

static inline void _nocheck__trace_kvm_dirty_ring_reap(uint64_t count, int64_t t)
{
    if (trace_event_get_state(TRACE_KVM_DIRTY_RING_REAP) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 25 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_dirty_ring_reap " "reaped %"PRIu64" pages (took %"PRIi64" us)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , count, t);
#line 751 "trace/trace-accel_kvm.h"
        } else {
#line 25 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_dirty_ring_reap " "reaped %"PRIu64" pages (took %"PRIi64" us)" "\n", count, t);
#line 755 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_dirty_ring_reap(uint64_t count, int64_t t)
{
    if (true) {
        _nocheck__trace_kvm_dirty_ring_reap(count, t);
    }
}

#define TRACE_KVM_DIRTY_RING_REAPER_KICK_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_DIRTY_RING_REAPER_KICK) || \
    false)

static inline void _nocheck__trace_kvm_dirty_ring_reaper_kick(const char * reason)
{
    if (trace_event_get_state(TRACE_KVM_DIRTY_RING_REAPER_KICK) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 26 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_dirty_ring_reaper_kick " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , reason);
#line 782 "trace/trace-accel_kvm.h"
        } else {
#line 26 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_dirty_ring_reaper_kick " "%s" "\n", reason);
#line 786 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_dirty_ring_reaper_kick(const char * reason)
{
    if (true) {
        _nocheck__trace_kvm_dirty_ring_reaper_kick(reason);
    }
}

#define TRACE_KVM_DIRTY_RING_FLUSH_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_DIRTY_RING_FLUSH) || \
    false)

static inline void _nocheck__trace_kvm_dirty_ring_flush(int finished)
{
    if (trace_event_get_state(TRACE_KVM_DIRTY_RING_FLUSH) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 27 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_dirty_ring_flush " "%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , finished);
#line 813 "trace/trace-accel_kvm.h"
        } else {
#line 27 "/home/krijn/opt/ConfZNSplusplus/accel/kvm/trace-events"
            qemu_log("kvm_dirty_ring_flush " "%d" "\n", finished);
#line 817 "trace/trace-accel_kvm.h"
        }
    }
}

static inline void trace_kvm_dirty_ring_flush(int finished)
{
    if (true) {
        _nocheck__trace_kvm_dirty_ring_flush(finished);
    }
}
#endif /* TRACE_ACCEL_KVM_GENERATED_TRACERS_H */

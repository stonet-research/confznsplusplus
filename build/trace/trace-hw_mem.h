/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_MEM_GENERATED_TRACERS_H
#define TRACE_HW_MEM_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_MHP_PC_DIMM_ASSIGNED_SLOT_EVENT;
extern TraceEvent _TRACE_MEMORY_DEVICE_PRE_PLUG_EVENT;
extern TraceEvent _TRACE_MEMORY_DEVICE_PLUG_EVENT;
extern TraceEvent _TRACE_MEMORY_DEVICE_UNPLUG_EVENT;
extern uint16_t _TRACE_MHP_PC_DIMM_ASSIGNED_SLOT_DSTATE;
extern uint16_t _TRACE_MEMORY_DEVICE_PRE_PLUG_DSTATE;
extern uint16_t _TRACE_MEMORY_DEVICE_PLUG_DSTATE;
extern uint16_t _TRACE_MEMORY_DEVICE_UNPLUG_DSTATE;
#define TRACE_MHP_PC_DIMM_ASSIGNED_SLOT_ENABLED 1
#define TRACE_MEMORY_DEVICE_PRE_PLUG_ENABLED 1
#define TRACE_MEMORY_DEVICE_PLUG_ENABLED 1
#define TRACE_MEMORY_DEVICE_UNPLUG_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_MHP_PC_DIMM_ASSIGNED_SLOT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MHP_PC_DIMM_ASSIGNED_SLOT) || \
    false)

static inline void _nocheck__trace_mhp_pc_dimm_assigned_slot(int slot)
{
    if (trace_event_get_state(TRACE_MHP_PC_DIMM_ASSIGNED_SLOT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/home/krijn/opt/ConfZNSplusplus/hw/mem/trace-events"
            qemu_log("%d@%zu.%06zu:mhp_pc_dimm_assigned_slot " "%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , slot);
#line 40 "trace/trace-hw_mem.h"
        } else {
#line 4 "/home/krijn/opt/ConfZNSplusplus/hw/mem/trace-events"
            qemu_log("mhp_pc_dimm_assigned_slot " "%d" "\n", slot);
#line 44 "trace/trace-hw_mem.h"
        }
    }
}

static inline void trace_mhp_pc_dimm_assigned_slot(int slot)
{
    if (true) {
        _nocheck__trace_mhp_pc_dimm_assigned_slot(slot);
    }
}

#define TRACE_MEMORY_DEVICE_PRE_PLUG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MEMORY_DEVICE_PRE_PLUG) || \
    false)

static inline void _nocheck__trace_memory_device_pre_plug(const char * id, uint64_t addr)
{
    if (trace_event_get_state(TRACE_MEMORY_DEVICE_PRE_PLUG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "/home/krijn/opt/ConfZNSplusplus/hw/mem/trace-events"
            qemu_log("%d@%zu.%06zu:memory_device_pre_plug " "id=%s addr=0x%"PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, addr);
#line 71 "trace/trace-hw_mem.h"
        } else {
#line 6 "/home/krijn/opt/ConfZNSplusplus/hw/mem/trace-events"
            qemu_log("memory_device_pre_plug " "id=%s addr=0x%"PRIx64 "\n", id, addr);
#line 75 "trace/trace-hw_mem.h"
        }
    }
}

static inline void trace_memory_device_pre_plug(const char * id, uint64_t addr)
{
    if (true) {
        _nocheck__trace_memory_device_pre_plug(id, addr);
    }
}

#define TRACE_MEMORY_DEVICE_PLUG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MEMORY_DEVICE_PLUG) || \
    false)

static inline void _nocheck__trace_memory_device_plug(const char * id, uint64_t addr)
{
    if (trace_event_get_state(TRACE_MEMORY_DEVICE_PLUG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "/home/krijn/opt/ConfZNSplusplus/hw/mem/trace-events"
            qemu_log("%d@%zu.%06zu:memory_device_plug " "id=%s addr=0x%"PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, addr);
#line 102 "trace/trace-hw_mem.h"
        } else {
#line 7 "/home/krijn/opt/ConfZNSplusplus/hw/mem/trace-events"
            qemu_log("memory_device_plug " "id=%s addr=0x%"PRIx64 "\n", id, addr);
#line 106 "trace/trace-hw_mem.h"
        }
    }
}

static inline void trace_memory_device_plug(const char * id, uint64_t addr)
{
    if (true) {
        _nocheck__trace_memory_device_plug(id, addr);
    }
}

#define TRACE_MEMORY_DEVICE_UNPLUG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MEMORY_DEVICE_UNPLUG) || \
    false)

static inline void _nocheck__trace_memory_device_unplug(const char * id, uint64_t addr)
{
    if (trace_event_get_state(TRACE_MEMORY_DEVICE_UNPLUG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "/home/krijn/opt/ConfZNSplusplus/hw/mem/trace-events"
            qemu_log("%d@%zu.%06zu:memory_device_unplug " "id=%s addr=0x%"PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, addr);
#line 133 "trace/trace-hw_mem.h"
        } else {
#line 8 "/home/krijn/opt/ConfZNSplusplus/hw/mem/trace-events"
            qemu_log("memory_device_unplug " "id=%s addr=0x%"PRIx64 "\n", id, addr);
#line 137 "trace/trace-hw_mem.h"
        }
    }
}

static inline void trace_memory_device_unplug(const char * id, uint64_t addr)
{
    if (true) {
        _nocheck__trace_memory_device_unplug(id, addr);
    }
}
#endif /* TRACE_HW_MEM_GENERATED_TRACERS_H */

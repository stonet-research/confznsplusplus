/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-target_sparc.h"

uint16_t _TRACE_MMU_HELPER_DFAULT_DSTATE;
uint16_t _TRACE_MMU_HELPER_DPROT_DSTATE;
uint16_t _TRACE_MMU_HELPER_DMISS_DSTATE;
uint16_t _TRACE_MMU_HELPER_TFAULT_DSTATE;
uint16_t _TRACE_MMU_HELPER_TMISS_DSTATE;
uint16_t _TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE_DSTATE;
uint16_t _TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA_DSTATE;
uint16_t _TRACE_MMU_HELPER_MMU_FAULT_DSTATE;
uint16_t _TRACE_SUN4M_CPU_INTERRUPT_DSTATE;
uint16_t _TRACE_SUN4M_CPU_RESET_INTERRUPT_DSTATE;
uint16_t _TRACE_INT_HELPER_SET_SOFTINT_DSTATE;
uint16_t _TRACE_INT_HELPER_CLEAR_SOFTINT_DSTATE;
uint16_t _TRACE_INT_HELPER_WRITE_SOFTINT_DSTATE;
uint16_t _TRACE_SPARC64_CPU_CHECK_IRQS_RESET_IRQ_DSTATE;
uint16_t _TRACE_SPARC64_CPU_CHECK_IRQS_NOSET_IRQ_DSTATE;
uint16_t _TRACE_SPARC64_CPU_CHECK_IRQS_SET_IRQ_DSTATE;
uint16_t _TRACE_SPARC64_CPU_CHECK_IRQS_DISABLED_DSTATE;
uint16_t _TRACE_WIN_HELPER_GREGSET_ERROR_DSTATE;
uint16_t _TRACE_WIN_HELPER_SWITCH_PSTATE_DSTATE;
uint16_t _TRACE_WIN_HELPER_NO_SWITCH_PSTATE_DSTATE;
uint16_t _TRACE_WIN_HELPER_WRPIL_DSTATE;
uint16_t _TRACE_WIN_HELPER_DONE_DSTATE;
uint16_t _TRACE_WIN_HELPER_RETRY_DSTATE;
TraceEvent _TRACE_MMU_HELPER_DFAULT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mmu_helper_dfault",
    .sstate = TRACE_MMU_HELPER_DFAULT_ENABLED,
    .dstate = &_TRACE_MMU_HELPER_DFAULT_DSTATE 
};
TraceEvent _TRACE_MMU_HELPER_DPROT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mmu_helper_dprot",
    .sstate = TRACE_MMU_HELPER_DPROT_ENABLED,
    .dstate = &_TRACE_MMU_HELPER_DPROT_DSTATE 
};
TraceEvent _TRACE_MMU_HELPER_DMISS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mmu_helper_dmiss",
    .sstate = TRACE_MMU_HELPER_DMISS_ENABLED,
    .dstate = &_TRACE_MMU_HELPER_DMISS_DSTATE 
};
TraceEvent _TRACE_MMU_HELPER_TFAULT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mmu_helper_tfault",
    .sstate = TRACE_MMU_HELPER_TFAULT_ENABLED,
    .dstate = &_TRACE_MMU_HELPER_TFAULT_DSTATE 
};
TraceEvent _TRACE_MMU_HELPER_TMISS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mmu_helper_tmiss",
    .sstate = TRACE_MMU_HELPER_TMISS_ENABLED,
    .dstate = &_TRACE_MMU_HELPER_TMISS_DSTATE 
};
TraceEvent _TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mmu_helper_get_phys_addr_code",
    .sstate = TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE_ENABLED,
    .dstate = &_TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE_DSTATE 
};
TraceEvent _TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mmu_helper_get_phys_addr_data",
    .sstate = TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA_ENABLED,
    .dstate = &_TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA_DSTATE 
};
TraceEvent _TRACE_MMU_HELPER_MMU_FAULT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mmu_helper_mmu_fault",
    .sstate = TRACE_MMU_HELPER_MMU_FAULT_ENABLED,
    .dstate = &_TRACE_MMU_HELPER_MMU_FAULT_DSTATE 
};
TraceEvent _TRACE_SUN4M_CPU_INTERRUPT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sun4m_cpu_interrupt",
    .sstate = TRACE_SUN4M_CPU_INTERRUPT_ENABLED,
    .dstate = &_TRACE_SUN4M_CPU_INTERRUPT_DSTATE 
};
TraceEvent _TRACE_SUN4M_CPU_RESET_INTERRUPT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sun4m_cpu_reset_interrupt",
    .sstate = TRACE_SUN4M_CPU_RESET_INTERRUPT_ENABLED,
    .dstate = &_TRACE_SUN4M_CPU_RESET_INTERRUPT_DSTATE 
};
TraceEvent _TRACE_INT_HELPER_SET_SOFTINT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "int_helper_set_softint",
    .sstate = TRACE_INT_HELPER_SET_SOFTINT_ENABLED,
    .dstate = &_TRACE_INT_HELPER_SET_SOFTINT_DSTATE 
};
TraceEvent _TRACE_INT_HELPER_CLEAR_SOFTINT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "int_helper_clear_softint",
    .sstate = TRACE_INT_HELPER_CLEAR_SOFTINT_ENABLED,
    .dstate = &_TRACE_INT_HELPER_CLEAR_SOFTINT_DSTATE 
};
TraceEvent _TRACE_INT_HELPER_WRITE_SOFTINT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "int_helper_write_softint",
    .sstate = TRACE_INT_HELPER_WRITE_SOFTINT_ENABLED,
    .dstate = &_TRACE_INT_HELPER_WRITE_SOFTINT_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_CHECK_IRQS_RESET_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sparc64_cpu_check_irqs_reset_irq",
    .sstate = TRACE_SPARC64_CPU_CHECK_IRQS_RESET_IRQ_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_CHECK_IRQS_RESET_IRQ_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_CHECK_IRQS_NOSET_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sparc64_cpu_check_irqs_noset_irq",
    .sstate = TRACE_SPARC64_CPU_CHECK_IRQS_NOSET_IRQ_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_CHECK_IRQS_NOSET_IRQ_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_CHECK_IRQS_SET_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sparc64_cpu_check_irqs_set_irq",
    .sstate = TRACE_SPARC64_CPU_CHECK_IRQS_SET_IRQ_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_CHECK_IRQS_SET_IRQ_DSTATE 
};
TraceEvent _TRACE_SPARC64_CPU_CHECK_IRQS_DISABLED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sparc64_cpu_check_irqs_disabled",
    .sstate = TRACE_SPARC64_CPU_CHECK_IRQS_DISABLED_ENABLED,
    .dstate = &_TRACE_SPARC64_CPU_CHECK_IRQS_DISABLED_DSTATE 
};
TraceEvent _TRACE_WIN_HELPER_GREGSET_ERROR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "win_helper_gregset_error",
    .sstate = TRACE_WIN_HELPER_GREGSET_ERROR_ENABLED,
    .dstate = &_TRACE_WIN_HELPER_GREGSET_ERROR_DSTATE 
};
TraceEvent _TRACE_WIN_HELPER_SWITCH_PSTATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "win_helper_switch_pstate",
    .sstate = TRACE_WIN_HELPER_SWITCH_PSTATE_ENABLED,
    .dstate = &_TRACE_WIN_HELPER_SWITCH_PSTATE_DSTATE 
};
TraceEvent _TRACE_WIN_HELPER_NO_SWITCH_PSTATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "win_helper_no_switch_pstate",
    .sstate = TRACE_WIN_HELPER_NO_SWITCH_PSTATE_ENABLED,
    .dstate = &_TRACE_WIN_HELPER_NO_SWITCH_PSTATE_DSTATE 
};
TraceEvent _TRACE_WIN_HELPER_WRPIL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "win_helper_wrpil",
    .sstate = TRACE_WIN_HELPER_WRPIL_ENABLED,
    .dstate = &_TRACE_WIN_HELPER_WRPIL_DSTATE 
};
TraceEvent _TRACE_WIN_HELPER_DONE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "win_helper_done",
    .sstate = TRACE_WIN_HELPER_DONE_ENABLED,
    .dstate = &_TRACE_WIN_HELPER_DONE_DSTATE 
};
TraceEvent _TRACE_WIN_HELPER_RETRY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "win_helper_retry",
    .sstate = TRACE_WIN_HELPER_RETRY_ENABLED,
    .dstate = &_TRACE_WIN_HELPER_RETRY_DSTATE 
};
TraceEvent *target_sparc_trace_events[] = {
    &_TRACE_MMU_HELPER_DFAULT_EVENT,
    &_TRACE_MMU_HELPER_DPROT_EVENT,
    &_TRACE_MMU_HELPER_DMISS_EVENT,
    &_TRACE_MMU_HELPER_TFAULT_EVENT,
    &_TRACE_MMU_HELPER_TMISS_EVENT,
    &_TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE_EVENT,
    &_TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA_EVENT,
    &_TRACE_MMU_HELPER_MMU_FAULT_EVENT,
    &_TRACE_SUN4M_CPU_INTERRUPT_EVENT,
    &_TRACE_SUN4M_CPU_RESET_INTERRUPT_EVENT,
    &_TRACE_INT_HELPER_SET_SOFTINT_EVENT,
    &_TRACE_INT_HELPER_CLEAR_SOFTINT_EVENT,
    &_TRACE_INT_HELPER_WRITE_SOFTINT_EVENT,
    &_TRACE_SPARC64_CPU_CHECK_IRQS_RESET_IRQ_EVENT,
    &_TRACE_SPARC64_CPU_CHECK_IRQS_NOSET_IRQ_EVENT,
    &_TRACE_SPARC64_CPU_CHECK_IRQS_SET_IRQ_EVENT,
    &_TRACE_SPARC64_CPU_CHECK_IRQS_DISABLED_EVENT,
    &_TRACE_WIN_HELPER_GREGSET_ERROR_EVENT,
    &_TRACE_WIN_HELPER_SWITCH_PSTATE_EVENT,
    &_TRACE_WIN_HELPER_NO_SWITCH_PSTATE_EVENT,
    &_TRACE_WIN_HELPER_WRPIL_EVENT,
    &_TRACE_WIN_HELPER_DONE_EVENT,
    &_TRACE_WIN_HELPER_RETRY_EVENT,
  NULL,
};

static void trace_target_sparc_register_events(void)
{
    trace_event_register_group(target_sparc_trace_events);
}
trace_init(trace_target_sparc_register_events)

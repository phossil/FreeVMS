static const char *symbols[] = {
"00000000010000b0", 
"dbg$backtrace_amd64", 
"0000000001000110", 
"dbg$backtrace", 
"0000000001000150", 
"dbg$sigma0", 
"0000000001000360", 
"dev$init", 
"0000000001000510", 
"elf$loader", 
"00000000010006c0", 
"jobctl$bfl_alloc", 
"00000000010007b0", 
"jobctl$bfl_free", 
"0000000001000820", 
"jobctl$bfl_new", 
"00000000010008a0", 
"jobctl$utcb_init", 
"00000000010008f0", 
"jobctl$threadno", 
"0000000001000900", 
"jobctl$pd_setup", 
"00000000010009a0", 
"jobctl$pd_create", 
"0000000001000ac0", 
"jobctl$thread_init", 
"0000000001000b80", 
"jobctl$pd_init", 
"0000000001000c00", 
"set_quota", 
"0000000001000c50", 
"new_quota", 
"0000000001000c90", 
"jobctl$thread_free", 
"0000000001000cd0", 
"jobctl$thread_start", 
"0000000001000ed0", 
"jobctl$session_delete", 
"0000000001001010", 
"jobctl$thread_delete", 
"0000000001001120", 
"jobctl$thread_lookup", 
"0000000001001140", 
"jobctl$pd_add_clist", 
"00000000010011c0", 
"jobctl$pd_create_thread", 
"0000000001001790", 
"jobctl$rfl_alloc", 
"00000000010017f0", 
"jobctl$rfl_insert_range", 
"0000000001001910", 
"jobctl$rfl_free", 
"0000000001001920", 
"jobctl$rfl_new", 
"0000000001001930", 
"__vga_putc", 
"0000000001001a30", 
"__l4_putc", 
"0000000001001b30", 
"__l4_getc", 
"0000000001001b50", 
"get_hex", 
"0000000001001be0", 
"__l4_vsnprintf", 
"0000000001002f20", 
"__l4_snprintf", 
"0000000001002fc0", 
"__l4_printf", 
"00000000010030c0", 
"__l4_putchar", 
"00000000010030e0", 
"__l4_puts", 
"0000000001003150", 
"hash_lookup", 
"00000000010031f0", 
"hash_insert", 
"00000000010032c0", 
"hash_remove", 
"00000000010033a0", 
"hash_init", 
"0000000001003460", 
"dl_list_init", 
"0000000001003470", 
"ll_insert_before", 
"00000000010034c0", 
"ll_new", 
"00000000010034f0", 
"dl_list_create_back", 
"0000000001003530", 
"dl_list_create_front", 
"0000000001003570", 
"ll_delete", 
"00000000010035a0", 
"dl_list_clear", 
"00000000010035f0", 
"lock$mutex_init", 
"0000000001003610", 
"lock$mutex_count_unlock", 
"0000000001003680", 
"lock$mutex_count_lock", 
"00000000010036f0", 
"try_lock_amd64", 
"0000000001003720", 
"sec$check", 
"0000000001003820", 
"sec$create_capability", 
"0000000001003850", 
"rand$init", 
"00000000010038a0", 
"rand$extract_number", 
"0000000001003a40", 
"rand$extract_number", 
"0000000001003aa0", 
"_start", 
"0000000001003aa0", 
"_stext", 
"0000000001003ac1", 
"_return_from_main", 
"0000000001003ae0", 
"sys$init", 
"00000000010042c0", 
"sys$loop", 
"00000000010044e0", 
"strstr", 
"0000000001004590", 
"main", 
"0000000001004b70", 
"sys$parsing", 
"0000000001004db0", 
"vms$min_pagebits", 
"0000000001004df0", 
"vms$min_pagesize", 
"0000000001004e30", 
"vms$page_round_down", 
"0000000001004e40", 
"vms$page_round_up", 
"0000000001004e60", 
"vms$biggest_fpage", 
"0000000001004f70", 
"vms$remove_chunk", 
"0000000001005140", 
"vms$remove_virtmem", 
"0000000001005180", 
"vms$back_mem", 
"0000000001005360", 
"vms$fpage_alloc_internal", 
"0000000001005510", 
"vms$fpage_alloc", 
"0000000001005990", 
"vms$fpage_clear_internal", 
"0000000001005c10", 
"vms$fpage_free_internal", 
"0000000001005c70", 
"vms$fpage_free_chunk", 
"0000000001005cc0", 
"vms$fpage_free_list", 
"0000000001005d90", 
"vms$fpage_remove_chunk", 
"0000000001005f70", 
"vms$fpage_alloc_chunk", 
"0000000001006090", 
"vms$fpage_alloc_list", 
"0000000001006290", 
"ObjBTSearch", 
"0000000001006360", 
"BTInsert", 
"0000000001006840", 
"ObjBTIns", 
"00000000010069a0", 
"vms$free", 
"0000000001006a70", 
"vms$alloc", 
"0000000001006c00", 
"vms$alloc_init", 
"0000000001006c20", 
"vms$add_initial_object", 
"0000000001006ca0", 
"vms$find_memory_info", 
"0000000001006d90", 
"vms$populate_init_objects", 
"0000000001006e90", 
"vms$bootstrap", 
"00000000010072c0", 
"T.156", 
"00000000010074b0", 
"vms$init", 
"0000000001007c00", 
"vms$objtable_init", 
"0000000001007c30", 
"ObjFreePage", 
"0000000001007c40", 
"ObjAllocPage", 
"0000000001007c50", 
"objtable_insert", 
"0000000001007ca0", 
"objtable_setup_internal", 
"0000000001007d20", 
"objtable_setup_utcb", 
"0000000001007dc0", 
"objtable_setup_fixed", 
"0000000001007eb0", 
"objtable_setup", 
"0000000001007fb0", 
"vms$objtable_lookup", 
"0000000001008020", 
"vms$pagefault", 
"00000000010084a0", 
"vms$sigma0_map_fpage", 
"0000000001008970", 
"vms$sigma0_map", 
"0000000001008ba0", 
"vms$initmem", 
"0000000001008bc0", 
"vms$memcopy", 
"0000000001008bf0", 
"vms$memsection_back", 
"0000000001008d60", 
"vms$slab_cache_free", 
"0000000001008db0", 
"vms$memsection_page_map", 
"0000000001008fb0", 
"vms$memsection_create_cache", 
"0000000001009320", 
"vms$slab_cache_alloc", 
"00000000010093f0", 
"vms$pd_create_memsection", 
"0000000001009510", 
"__L4_Init", 
"00000000010095b0", 
"dbg$hex_to_bin", 
"0000000001009780", 
"dbg$symbol", 
0 };

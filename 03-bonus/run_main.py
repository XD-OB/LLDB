import lldb

def	ft_run_main(debugger, command, result, internal_dict):
	debugger.HandleCommand('breakpoint set -name main')
	debugger.HandleCommand('process launch')
	print('Thread Started')

def	__lldb_init_module(debugger, internal_dict):
	debugger.HandleCommand('command script add -f run_main.ft_run_main run_main -h "Put a breakpoint on main and launch the process"')

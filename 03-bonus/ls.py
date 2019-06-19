import lldb

def	ft_ls(debugger, command, result, internal_dict):
	debugger.HandleCommand('platform shell ls %s' % command)

def	__lldb_init_module(debugger, internal_dict):
	debugger.HandleCommand('command script add -f ls.ft_ls ls -h "ls shell command"');

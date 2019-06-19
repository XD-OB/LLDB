import lldb

def	ft_cd(debugger, command, result, internal_dict):
	debugger.HandleCommand('platform settings -w %s' % command)

def	__lldb_init_module(debugger, internal_dict):
	debugger.HandleCommand('command script add -f cd.ft_cd cd -h "cd shell command"')

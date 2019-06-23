import lldb

def	ft_pwd(debugger, command, result, internal_dict):
	debugger.HandleCommand('platform shell pwd %s' % command)

def	__lldb_init_module(debugger, internal_dict):
	debugger.HandleCommand('command script add -f ft_pwd.ft_pwd pwd -h "pwd shell command"');

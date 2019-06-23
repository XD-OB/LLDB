import lldb

def	ft_echo(debugger, command, result, internal_dict):
	debugger.HandleCommand('platform shell echo %s' % command)

def	__lldb_init_module(debugger, internal_dict):
	debugger.HandleCommand('command script add -f echo.ft_echo echo -h "echo shell command"');

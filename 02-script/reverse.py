import lldb

def ft_reverse(debugger, command, result, internal_dict):
	word = debugger.GetSelectedTarget()
	if word:
		new = "FT_" + str(word)[::-1]
		print(new)
	else:
		print("Error: No Target Selected")

def __lldb_init_module(debugger, internal_dict):
	debugger.HandleCommand('command script add -h "reverse the target and add FT_ in the beginning" -f reverse.ft_reverse reverse');

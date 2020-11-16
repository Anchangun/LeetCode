#include "Solution.h"

bool Solution::isValid(std::string s)
{
	
	if (s.size() == 0)
		return true;
	else {
		for (int loop_i = 0; loop_i < s.size(); loop_i++) {
			if (s[loop_i] == '(' || s[loop_i] == '{' || s[loop_i] == '[') {
				stack_data.push(s[loop_i]);
			}
			else {
				if (stack_data.size() == 0)
					return false;

				switch (s[loop_i])
				{
				case ')':
					if (stack_data.top() == '(') {
						stack_data.pop();
						break;
					}
					else
						return false;
				case '}':
					if (stack_data.top() == '{') {
						stack_data.pop();
						break;
					}
					else
						return false;
				case ']':
					if (stack_data.top() == '[') {
						stack_data.pop();
						break;
					}
					else
						return false;
				default:
					break;
				}
			}
		}
		return (stack_data.size() == 0) ? true : false;
	}
}


#pragma once

# include <iostream>
# include <vector>

struct Channel {
	std::string					channelName;
	std::string					channelPass;
	std::vector<std::string>	members;
	std::string					topic;
	bool						havePass;
	bool						isTopic;
};

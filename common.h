#pragma once
#include <string>
#include <vector>
#include <any>
#include <atomic>
//#include <iguana/json.hpp>
#include "entity.h"

namespace raftcpp {
	struct address {
		std::string ip;
		int port;
		int host_id;
	};
	//REFLECTION(address, ip, port, host_id);

	struct config {
		std::vector<address> peers_addr;
	};
	//REFLECTION(config, peers_addr);

	static const int ELECTION_TIMEOUT = 500;//milliseconds
	static const int VOTE_TIMEOUT = 500;//milliseconds
	static const int RPC_TIMEOUT = 500;
	static const int HEARTBEAT_PERIOD = ELECTION_TIMEOUT / 2;//milliseconds
}
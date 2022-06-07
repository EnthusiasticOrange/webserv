#ifndef MESSAGE_HPP
#define MESSAGE_HPP

#include "../AllowedStd.hpp"
#include "parsers/RequestParser.hpp"

namespace ft {
	class Message {
	public:
		Message();

		int							m_error_num;
		std::vector<http::Header>	m_headers;
		std::string 				m_body;
		std::string					m_method;
		std::string					m_uri_str;
		std::string					host_name;
		int 						m_ver_major;
		int							m_ver_minor;
	};
}

#endif
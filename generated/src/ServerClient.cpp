
// AUTO GENERATED by vnxcppcodegen

#include <vnx/vnx.h>
#include <vnx/keyvalue/package.hxx>
#include <vnx/keyvalue/ServerClient.hxx>
#include <vnx/Module.h>
#include <vnx/TopicPtr.hpp>
#include <vnx/Value.h>
#include <vnx/Variant.hpp>
#include <vnx/keyvalue/Server_delete_value.hxx>
#include <vnx/keyvalue/Server_delete_value_return.hxx>
#include <vnx/keyvalue/Server_get_value.hxx>
#include <vnx/keyvalue/Server_get_value_locked.hxx>
#include <vnx/keyvalue/Server_get_value_locked_return.hxx>
#include <vnx/keyvalue/Server_get_value_return.hxx>
#include <vnx/keyvalue/Server_get_values.hxx>
#include <vnx/keyvalue/Server_get_values_return.hxx>
#include <vnx/keyvalue/Server_store_value.hxx>
#include <vnx/keyvalue/Server_store_value_return.hxx>
#include <vnx/keyvalue/Server_store_values.hxx>
#include <vnx/keyvalue/Server_store_values_return.hxx>
#include <vnx/keyvalue/Server_sync_all.hxx>
#include <vnx/keyvalue/Server_sync_all_keys.hxx>
#include <vnx/keyvalue/Server_sync_all_keys_return.hxx>
#include <vnx/keyvalue/Server_sync_all_return.hxx>
#include <vnx/keyvalue/Server_sync_from.hxx>
#include <vnx/keyvalue/Server_sync_from_return.hxx>
#include <vnx/keyvalue/Server_sync_range.hxx>
#include <vnx/keyvalue/Server_sync_range_return.hxx>



namespace vnx {
namespace keyvalue {

ServerClient::ServerClient(const std::string& service_name)
	:	Client::Client(vnx::Hash64(service_name))
{
}

ServerClient::ServerClient(vnx::Hash64 service_addr)
	:	Client::Client(service_addr)
{
}

void ServerClient::delete_value(const ::vnx::Variant& key) {
	auto _method = ::vnx::keyvalue::Server_delete_value::create();
	_method->key = key;
	auto _return_value = vnx_request(_method);
}

void ServerClient::delete_value_async(const ::vnx::Variant& key) {
	vnx_is_async = true;
	delete_value(key);
}

std::shared_ptr<const ::vnx::Value> ServerClient::get_value(const ::vnx::Variant& key) {
	auto _method = ::vnx::keyvalue::Server_get_value::create();
	_method->key = key;
	auto _return_value = vnx_request(_method);
	auto _result = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_get_value_return>(_return_value);
	if(!_result) {
		throw std::logic_error("ServerClient: !_result");
	}
	return _result->_ret_0;
}

std::shared_ptr<const ::vnx::Value> ServerClient::get_value_locked(const ::vnx::Variant& key, const int32_t& timeout_ms) {
	auto _method = ::vnx::keyvalue::Server_get_value_locked::create();
	_method->key = key;
	_method->timeout_ms = timeout_ms;
	auto _return_value = vnx_request(_method);
	auto _result = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_get_value_locked_return>(_return_value);
	if(!_result) {
		throw std::logic_error("ServerClient: !_result");
	}
	return _result->_ret_0;
}

std::vector<std::shared_ptr<const ::vnx::Value>> ServerClient::get_values(const std::vector<::vnx::Variant>& keys) {
	auto _method = ::vnx::keyvalue::Server_get_values::create();
	_method->keys = keys;
	auto _return_value = vnx_request(_method);
	auto _result = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_get_values_return>(_return_value);
	if(!_result) {
		throw std::logic_error("ServerClient: !_result");
	}
	return _result->_ret_0;
}

void ServerClient::store_value(const ::vnx::Variant& key, const std::shared_ptr<const ::vnx::Value>& value) {
	auto _method = ::vnx::keyvalue::Server_store_value::create();
	_method->key = key;
	_method->value = value;
	auto _return_value = vnx_request(_method);
}

void ServerClient::store_value_async(const ::vnx::Variant& key, const std::shared_ptr<const ::vnx::Value>& value) {
	vnx_is_async = true;
	store_value(key, value);
}

void ServerClient::store_values(const std::vector<std::pair<::vnx::Variant, std::shared_ptr<const ::vnx::Value>>>& values) {
	auto _method = ::vnx::keyvalue::Server_store_values::create();
	_method->values = values;
	auto _return_value = vnx_request(_method);
}

void ServerClient::store_values_async(const std::vector<std::pair<::vnx::Variant, std::shared_ptr<const ::vnx::Value>>>& values) {
	vnx_is_async = true;
	store_values(values);
}

int64_t ServerClient::sync_all(const ::vnx::TopicPtr& topic) {
	auto _method = ::vnx::keyvalue::Server_sync_all::create();
	_method->topic = topic;
	auto _return_value = vnx_request(_method);
	auto _result = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_sync_all_return>(_return_value);
	if(!_result) {
		throw std::logic_error("ServerClient: !_result");
	}
	return _result->_ret_0;
}

int64_t ServerClient::sync_all_keys(const ::vnx::TopicPtr& topic) {
	auto _method = ::vnx::keyvalue::Server_sync_all_keys::create();
	_method->topic = topic;
	auto _return_value = vnx_request(_method);
	auto _result = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_sync_all_keys_return>(_return_value);
	if(!_result) {
		throw std::logic_error("ServerClient: !_result");
	}
	return _result->_ret_0;
}

int64_t ServerClient::sync_from(const ::vnx::TopicPtr& topic, const uint64_t& version) {
	auto _method = ::vnx::keyvalue::Server_sync_from::create();
	_method->topic = topic;
	_method->version = version;
	auto _return_value = vnx_request(_method);
	auto _result = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_sync_from_return>(_return_value);
	if(!_result) {
		throw std::logic_error("ServerClient: !_result");
	}
	return _result->_ret_0;
}

int64_t ServerClient::sync_range(const ::vnx::TopicPtr& topic, const uint64_t& begin, const uint64_t& end) {
	auto _method = ::vnx::keyvalue::Server_sync_range::create();
	_method->topic = topic;
	_method->begin = begin;
	_method->end = end;
	auto _return_value = vnx_request(_method);
	auto _result = std::dynamic_pointer_cast<const ::vnx::keyvalue::Server_sync_range_return>(_return_value);
	if(!_result) {
		throw std::logic_error("ServerClient: !_result");
	}
	return _result->_ret_0;
}


} // namespace vnx
} // namespace keyvalue

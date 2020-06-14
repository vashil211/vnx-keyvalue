
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_keyvalue_Server_ASYNC_CLIENT_HXX_
#define INCLUDE_vnx_keyvalue_Server_ASYNC_CLIENT_HXX_

#include <vnx/AsyncClient.h>
#include <vnx/Module.h>
#include <vnx/TopicPtr.hpp>
#include <vnx/Value.h>
#include <vnx/Variant.hpp>


namespace vnx {
namespace keyvalue {

class ServerAsyncClient : public vnx::AsyncClient {
public:
	ServerAsyncClient(const std::string& service_name);
	
	ServerAsyncClient(vnx::Hash64 service_addr);
	
	uint64_t delete_value(const ::vnx::Variant& key, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t get_value(const ::vnx::Variant& key, 
			const std::function<void(std::shared_ptr<const ::vnx::Value>)>& _callback = std::function<void(std::shared_ptr<const ::vnx::Value>)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t get_value_locked(const ::vnx::Variant& key, const int32_t& timeout_ms, 
			const std::function<void(std::shared_ptr<const ::vnx::Value>)>& _callback = std::function<void(std::shared_ptr<const ::vnx::Value>)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t get_values(const std::vector<::vnx::Variant>& keys, 
			const std::function<void(std::vector<std::shared_ptr<const ::vnx::Value>>)>& _callback = std::function<void(std::vector<std::shared_ptr<const ::vnx::Value>>)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t store_value(const ::vnx::Variant& key, const std::shared_ptr<const ::vnx::Value>& value, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t store_values(const std::vector<std::pair<::vnx::Variant, std::shared_ptr<const ::vnx::Value>>>& values, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t sync_all(const ::vnx::TopicPtr& topic, 
			const std::function<void(int64_t)>& _callback = std::function<void(int64_t)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t sync_all_keys(const ::vnx::TopicPtr& topic, 
			const std::function<void(int64_t)>& _callback = std::function<void(int64_t)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t sync_from(const ::vnx::TopicPtr& topic, const uint64_t& version, 
			const std::function<void(int64_t)>& _callback = std::function<void(int64_t)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t sync_range(const ::vnx::TopicPtr& topic, const uint64_t& begin, const uint64_t& end, 
			const std::function<void(int64_t)>& _callback = std::function<void(int64_t)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	std::vector<uint64_t> vnx_get_pending_ids() const override;
	
protected:
	void vnx_purge_request(uint64_t _request_id, const std::exception& _ex) override;
	
	void vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Value> _value) override;
	
private:
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const std::exception&)>>> vnx_queue_delete_value;
	std::map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::vnx::Value>)>, std::function<void(const std::exception&)>>> vnx_queue_get_value;
	std::map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::vnx::Value>)>, std::function<void(const std::exception&)>>> vnx_queue_get_value_locked;
	std::map<uint64_t, std::pair<std::function<void(std::vector<std::shared_ptr<const ::vnx::Value>>)>, std::function<void(const std::exception&)>>> vnx_queue_get_values;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const std::exception&)>>> vnx_queue_store_value;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const std::exception&)>>> vnx_queue_store_values;
	std::map<uint64_t, std::pair<std::function<void(int64_t)>, std::function<void(const std::exception&)>>> vnx_queue_sync_all;
	std::map<uint64_t, std::pair<std::function<void(int64_t)>, std::function<void(const std::exception&)>>> vnx_queue_sync_all_keys;
	std::map<uint64_t, std::pair<std::function<void(int64_t)>, std::function<void(const std::exception&)>>> vnx_queue_sync_from;
	std::map<uint64_t, std::pair<std::function<void(int64_t)>, std::function<void(const std::exception&)>>> vnx_queue_sync_range;
	
};


} // namespace vnx
} // namespace keyvalue

#endif // INCLUDE_vnx_keyvalue_Server_ASYNC_CLIENT_HXX_

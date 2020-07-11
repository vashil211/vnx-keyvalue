
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_keyvalue_Cluster_ASYNC_CLIENT_HXX_
#define INCLUDE_vnx_keyvalue_Cluster_ASYNC_CLIENT_HXX_

#include <vnx/AsyncClient.h>
#include <vnx/Module.h>
#include <vnx/TopicPtr.hpp>
#include <vnx/Value.h>
#include <vnx/Variant.hpp>
#include <vnx/keyvalue/Entry.hxx>


namespace vnx {
namespace keyvalue {

class ClusterAsyncClient : public vnx::AsyncClient {
public:
	ClusterAsyncClient(const std::string& service_name);
	
	ClusterAsyncClient(vnx::Hash64 service_addr);
	
	uint64_t vnx_get_type_code(
			const std::function<void(::vnx::TypeCode)>& _callback = std::function<void(::vnx::TypeCode)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t get_value(const ::vnx::Variant& key, 
			const std::function<void(std::shared_ptr<const ::vnx::keyvalue::Entry>)>& _callback = std::function<void(std::shared_ptr<const ::vnx::keyvalue::Entry>)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t get_value_locked(const ::vnx::Variant& key, const int32_t& timeout_ms, 
			const std::function<void(std::shared_ptr<const ::vnx::keyvalue::Entry>)>& _callback = std::function<void(std::shared_ptr<const ::vnx::keyvalue::Entry>)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t get_values(const std::vector<::vnx::Variant>& keys, 
			const std::function<void(std::vector<std::shared_ptr<const ::vnx::keyvalue::Entry>>)>& _callback = std::function<void(std::vector<std::shared_ptr<const ::vnx::keyvalue::Entry>>)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t get_version_key(const uint64_t& version, 
			const std::function<void(::vnx::Variant)>& _callback = std::function<void(::vnx::Variant)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t get_version_keys(const std::vector<uint64_t>& versions, 
			const std::function<void(std::vector<std::pair<uint64_t, ::vnx::Variant>>)>& _callback = std::function<void(std::vector<std::pair<uint64_t, ::vnx::Variant>>)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t unlock(const ::vnx::Variant& key, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t sync_from(const ::vnx::TopicPtr& topic, const uint64_t& version, 
			const std::function<void(int64_t)>& _callback = std::function<void(int64_t)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t sync_range(const ::vnx::TopicPtr& topic, const uint64_t& begin, const uint64_t& end, 
			const std::function<void(int64_t)>& _callback = std::function<void(int64_t)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t sync_all(const ::vnx::TopicPtr& topic, 
			const std::function<void(int64_t)>& _callback = std::function<void(int64_t)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t sync_all_keys(const ::vnx::TopicPtr& topic, 
			const std::function<void(int64_t)>& _callback = std::function<void(int64_t)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t cancel_sync_job(const int64_t& job_id, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t store_value(const ::vnx::Variant& key, const std::shared_ptr<const ::vnx::Value>& value, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t store_values(const std::vector<std::pair<::vnx::Variant, std::shared_ptr<const ::vnx::Value>>>& values, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t delete_value(const ::vnx::Variant& key, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	std::vector<uint64_t> vnx_get_pending_ids() const override;
	
protected:
	void vnx_purge_request(uint64_t _request_id, const std::exception& _ex) override;
	
	void vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Value> _value) override;
	
private:
	std::map<uint64_t, std::pair<std::function<void(::vnx::TypeCode)>, std::function<void(const std::exception&)>>> vnx_queue_vnx_get_type_code;
	std::map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::vnx::keyvalue::Entry>)>, std::function<void(const std::exception&)>>> vnx_queue_get_value;
	std::map<uint64_t, std::pair<std::function<void(std::shared_ptr<const ::vnx::keyvalue::Entry>)>, std::function<void(const std::exception&)>>> vnx_queue_get_value_locked;
	std::map<uint64_t, std::pair<std::function<void(std::vector<std::shared_ptr<const ::vnx::keyvalue::Entry>>)>, std::function<void(const std::exception&)>>> vnx_queue_get_values;
	std::map<uint64_t, std::pair<std::function<void(::vnx::Variant)>, std::function<void(const std::exception&)>>> vnx_queue_get_version_key;
	std::map<uint64_t, std::pair<std::function<void(std::vector<std::pair<uint64_t, ::vnx::Variant>>)>, std::function<void(const std::exception&)>>> vnx_queue_get_version_keys;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const std::exception&)>>> vnx_queue_unlock;
	std::map<uint64_t, std::pair<std::function<void(int64_t)>, std::function<void(const std::exception&)>>> vnx_queue_sync_from;
	std::map<uint64_t, std::pair<std::function<void(int64_t)>, std::function<void(const std::exception&)>>> vnx_queue_sync_range;
	std::map<uint64_t, std::pair<std::function<void(int64_t)>, std::function<void(const std::exception&)>>> vnx_queue_sync_all;
	std::map<uint64_t, std::pair<std::function<void(int64_t)>, std::function<void(const std::exception&)>>> vnx_queue_sync_all_keys;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const std::exception&)>>> vnx_queue_cancel_sync_job;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const std::exception&)>>> vnx_queue_store_value;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const std::exception&)>>> vnx_queue_store_values;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const std::exception&)>>> vnx_queue_delete_value;
	
};


} // namespace vnx
} // namespace keyvalue

#endif // INCLUDE_vnx_keyvalue_Cluster_ASYNC_CLIENT_HXX_

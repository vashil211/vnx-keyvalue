
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_keyvalue_Server_ASYNC_CLIENT_HXX_
#define INCLUDE_vnx_keyvalue_Server_ASYNC_CLIENT_HXX_

#include <vnx/AsyncClient.h>
#include <vnx/Module.h>
#include <vnx/TopicPtr.h>
#include <vnx/Value.h>
#include <vnx/Variant.h>


namespace vnx {
namespace keyvalue {

class ServerAsyncClient : public vnx::AsyncClient {
public:
	ServerAsyncClient(const std::string& service_name);
	
	ServerAsyncClient(vnx::Hash64 service_addr);
	
	uint64_t block_sync_finished(const ::int64_t& job_id, 
			const std::function<void()>& _callback = std::function<void()>());
	
	uint64_t delete_value(const ::vnx::Variant& key, 
			const std::function<void()>& _callback = std::function<void()>());
	
	uint64_t get_value(const ::vnx::Variant& key, 
			const std::function<void(::std::shared_ptr<const ::vnx::Value>)>& _callback = std::function<void(::std::shared_ptr<const ::vnx::Value>)>());
	
	uint64_t get_values(const ::std::vector<::vnx::Variant>& keys, 
			const std::function<void(::std::vector<::std::shared_ptr<const ::vnx::Value>>)>& _callback = std::function<void(::std::vector<::std::shared_ptr<const ::vnx::Value>>)>());
	
	uint64_t store_value(const ::vnx::Variant& key, const ::std::shared_ptr<const ::vnx::Value>& value, 
			const std::function<void()>& _callback = std::function<void()>());
	
	uint64_t sync_all(const ::vnx::TopicPtr& topic, 
			const std::function<void()>& _callback = std::function<void()>());
	
	std::vector<uint64_t> vnx_get_pending_ids() const override;
	
protected:
	void vnx_purge_request(uint64_t _request_id) override;
	
	void vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Binary> _data) override;
	
private:
	std::map<uint64_t, std::function<void()>> vnx_queue_block_sync_finished;
	std::map<uint64_t, std::function<void()>> vnx_queue_delete_value;
	std::map<uint64_t, std::function<void(::std::shared_ptr<const ::vnx::Value>)>> vnx_queue_get_value;
	std::map<uint64_t, std::function<void(::std::vector<::std::shared_ptr<const ::vnx::Value>>)>> vnx_queue_get_values;
	std::map<uint64_t, std::function<void()>> vnx_queue_store_value;
	std::map<uint64_t, std::function<void()>> vnx_queue_sync_all;
	
};


} // namespace vnx
} // namespace keyvalue

#endif // INCLUDE_vnx_keyvalue_Server_ASYNC_CLIENT_HXX_

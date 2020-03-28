
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_keyvalue_ServerBase_HXX_
#define INCLUDE_vnx_keyvalue_ServerBase_HXX_

#include <vnx/keyvalue/package.hxx>
#include <vnx/Module.h>
#include <vnx/TopicPtr.h>
#include <vnx/Value.h>
#include <vnx/Variant.h>


namespace vnx {
namespace keyvalue {

class ServerBase : public ::vnx::Module {
public:
	
	::vnx::TopicPtr update_topic;
	::std::string collection = "storage";
	::std::string storage_path;
	::int64_t max_block_size = 268435456;
	::vnx::float32_t rewrite_threshold = 0.5;
	::int32_t num_read_threads = 10;
	::vnx::bool_t do_verify_rewrite = false;
	
	typedef ::vnx::Module Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	ServerBase(const std::string& _vnx_name);
	
	vnx::Hash64 get_type_hash() const;
	const char* get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	friend std::ostream& operator<<(std::ostream& _out, const ServerBase& _value);
	friend std::istream& operator>>(std::istream& _in, ServerBase& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	virtual void block_sync_finished(const ::int64_t& job_id) = 0;
	virtual void delete_value(const ::vnx::Variant& key) = 0;
	virtual void get_value_async(const ::vnx::Variant& key, const std::function<void(const ::std::shared_ptr<const ::vnx::Value>&)>& _callback, const vnx::request_id_t& _request_id) const = 0;
	virtual void get_values_async(const ::std::vector<::vnx::Variant>& keys, const std::function<void(const ::std::vector<::std::shared_ptr<const ::vnx::Value>>&)>& _callback, const vnx::request_id_t& _request_id) const = 0;
	virtual void store_value(const ::vnx::Variant& key, const ::std::shared_ptr<const ::vnx::Value>& value) = 0;
	virtual void sync_all(const ::vnx::TopicPtr& topic) = 0;
	
	void vnx_handle_switch(std::shared_ptr<const ::vnx::Sample> _sample) override;
	std::shared_ptr<vnx::Value> vnx_call_switch(vnx::TypeInput& _in, const vnx::TypeCode* _call_type, const vnx::request_id_t& _request_id) override;
	
private:
	void get_value_async_return(const vnx::request_id_t& _request_id, const ::std::shared_ptr<const ::vnx::Value>& _ret_0);
	void get_values_async_return(const vnx::request_id_t& _request_id, const ::std::vector<::std::shared_ptr<const ::vnx::Value>>& _ret_0);
	
};


} // namespace vnx
} // namespace keyvalue

#endif // INCLUDE_vnx_keyvalue_ServerBase_HXX_

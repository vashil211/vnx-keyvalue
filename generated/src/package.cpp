
// AUTO GENERATED by vnxcppcodegen

#include <vnx/Topic.h>

#include <vnx/keyvalue/CloseEntry.hxx>
#include <vnx/keyvalue/Collection.hxx>
#include <vnx/keyvalue/DeleteEntry.hxx>
#include <vnx/keyvalue/IndexEntry.hxx>
#include <vnx/keyvalue/KeyValuePair.hxx>
#include <vnx/keyvalue/ServerBase.hxx>
#include <vnx/keyvalue/SyncInfo.hxx>
#include <vnx/keyvalue/TypeEntry.hxx>



namespace vnx {
namespace keyvalue {


static void register_all_types() {
	vnx::register_type_code(vnx::keyvalue::CloseEntry::static_create_type_code());
	vnx::register_type_code(vnx::keyvalue::Collection::static_create_type_code());
	vnx::register_type_code(vnx::keyvalue::DeleteEntry::static_create_type_code());
	vnx::register_type_code(vnx::keyvalue::IndexEntry::static_create_type_code());
	vnx::register_type_code(vnx::keyvalue::KeyValuePair::static_create_type_code());
	vnx::register_type_code(vnx::keyvalue::ServerBase::static_create_type_code());
	vnx::register_type_code(vnx::keyvalue::SyncInfo::static_create_type_code());
	vnx::register_type_code(vnx::keyvalue::TypeEntry::static_create_type_code());
}

static struct vnx_static_init {
	vnx_static_init() {
		register_all_types();
	}
} vnx_static_init_;

const vnx::TypeCode* const vnx_native_type_code_CloseEntry = vnx::get_type_code(vnx::Hash64(0xc06cd9d036102eefull));
const vnx::TypeCode* const vnx_native_type_code_Collection = vnx::get_type_code(vnx::Hash64(0xf1b6072fecc4ebf8ull));
const vnx::TypeCode* const vnx_native_type_code_DeleteEntry = vnx::get_type_code(vnx::Hash64(0x9ab5cee749685660ull));
const vnx::TypeCode* const vnx_native_type_code_IndexEntry = vnx::get_type_code(vnx::Hash64(0xbcae33addff34e23ull));
const vnx::TypeCode* const vnx_native_type_code_KeyValuePair = vnx::get_type_code(vnx::Hash64(0xf87436237449d8afull));
const vnx::TypeCode* const vnx_native_type_code_Server = vnx::get_type_code(vnx::Hash64(0xbb28aa6f1d808048ull));
const vnx::TypeCode* const vnx_native_type_code_Server_block_sync_finished = vnx::get_type_code(vnx::Hash64(0xba90ce7bfd371653ull));
const vnx::TypeCode* const vnx_native_type_code_Server_block_sync_finished_return = vnx::get_type_code(vnx::Hash64(0xe5d95a7b370db191ull));
const vnx::TypeCode* const vnx_native_type_code_Server_delete_value = vnx::get_type_code(vnx::Hash64(0xf5f6c0eca92f8e82ull));
const vnx::TypeCode* const vnx_native_type_code_Server_delete_value_return = vnx::get_type_code(vnx::Hash64(0x6b26b84842654d71ull));
const vnx::TypeCode* const vnx_native_type_code_Server_get_value = vnx::get_type_code(vnx::Hash64(0xe2ff2d7a976abdb8ull));
const vnx::TypeCode* const vnx_native_type_code_Server_get_value_return = vnx::get_type_code(vnx::Hash64(0x2eda7f8d6761272dull));
const vnx::TypeCode* const vnx_native_type_code_Server_get_values = vnx::get_type_code(vnx::Hash64(0x29edfe1764d9e55ull));
const vnx::TypeCode* const vnx_native_type_code_Server_get_values_return = vnx::get_type_code(vnx::Hash64(0x92bdf340933764bcull));
const vnx::TypeCode* const vnx_native_type_code_Server_store_value = vnx::get_type_code(vnx::Hash64(0xf6bea692aee1018cull));
const vnx::TypeCode* const vnx_native_type_code_Server_store_value_return = vnx::get_type_code(vnx::Hash64(0x8bc8f7e913889f88ull));
const vnx::TypeCode* const vnx_native_type_code_Server_sync_all = vnx::get_type_code(vnx::Hash64(0x6173affeadaf11ddull));
const vnx::TypeCode* const vnx_native_type_code_Server_sync_all_return = vnx::get_type_code(vnx::Hash64(0x964de09bdefcfc87ull));
const vnx::TypeCode* const vnx_native_type_code_SyncInfo = vnx::get_type_code(vnx::Hash64(0x4f9820ae95813502ull));
const vnx::TypeCode* const vnx_native_type_code_TypeEntry = vnx::get_type_code(vnx::Hash64(0x5d3011caa7dadfd3ull));

} // namespace vnx
} // namespace keyvalue

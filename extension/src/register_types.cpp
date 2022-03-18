#include "register_types.h"
#include "summator.h"
#include <godot/gdnative_interface.h>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>

void register_summator_types()
{
	godot::ClassDB::register_class<Summator>();
}

void unregister_summator_types() {}

extern "C"
{

	// Initialization.

	GDNativeBool GDN_EXPORT summator_library_init(const GDNativeInterface *p_interface, const GDNativeExtensionClassLibraryPtr p_library, GDNativeInitialization *r_initialization)
	{
		godot::GDExtensionBinding::InitObject init_obj(p_interface, p_library, r_initialization);

		init_obj.register_scene_initializer(register_summator_types);
		init_obj.register_scene_terminator(unregister_summator_types);

		return init_obj.init();
	}
}

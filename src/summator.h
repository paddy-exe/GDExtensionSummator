#ifndef SUMMATOR_CLASS_H
#define SUMMATOR_CLASS_H

// We don't need windows.h in this plugin but many others do and it throws up on itself all the time
// So best to include it and make sure CI warns us when we use something Microsoft took for their own goals....
#ifdef WIN32
#include <windows.h>
#endif

#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/core/binder_common.hpp>
#include <godot_cpp/classes/control.hpp>

using namespace godot;

class Summator : public RefCounted {
	GDCLASS(Summator, RefCounted);

    int count;

protected:
    static void _bind_methods();

public:
    void add(int p_value);
    void reset();
    int get_total() const;

    Summator();
};

#endif // SUMMATOR_CLASS_H
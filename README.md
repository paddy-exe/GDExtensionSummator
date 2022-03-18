# GDExtensionSummator

This repository is for showcasing the new GDExtension system in Godot 4.
The C++ code is from the [Custom modules example](https://docs.godotengine.org/en/latest/development/cpp/custom_modules_in_cpp.html "Click to get to the docs") of the Godot docs.

## Versioning
This repository was created with Godot v4.0.alpha.custom_build [622806397]. To build the extension succesfully, please make sure to use this or a newer version built from the master branch.

## Contributing
If you can't compile the extension, please open an issue with the error log in your terminal

## Getting started / Building the extension
To compile the extension you need to follow these steps:

1. Make sure you are in the top level of the repository
```bash
pwd
.../GDExtensionSummator
```

2. Go inside the godot-cpp folder
```bash
cd godot-cpp
```

3. Compile godot-cpp and generate bindings
```bash
scons target=debug generate_bindings=yes
```

4. Go back to the top level of the directory
```bash
cd ..
```

5. Compile the extension
```bash
scons target=debug
```

## Using the extension
After compiling the extension succesfully, you can now use the Summator Class inside Godot :tada:
```gdscript
func _ready() -> void:
	var s = Summator.new()
	s.add(10)
	s.add(20)
	s.add(30)
	print(s.get_total())
	s.reset()
```


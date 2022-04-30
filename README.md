# GDExtensionSummator

This repository is for showcasing the new GDExtension system in Godot 4.
The C++ code is from the [Custom modules example](https://docs.godotengine.org/en/latest/development/cpp/custom_modules_in_cpp.html "Click to get to the docs") of the Godot docs.

-> **Feel free to use this repository as a template for your GDExtensions**

## Versioning
This repository is being updated regularly to work with the latest version of the master branch. If you can't compile the extension, please open an issue.

**Recent Update: Godot 4 Alpha 7* working*  

## Contributing
If you can't compile the extension, please open an issue with the error log in your terminal

## Getting started / Building the extension
To compile the extension you need to follow these steps:

0. Click on the green "Use this template" button to generate the repository for you

1. Clone the extension recursively from this repository
```bash
# --recursive to automatically load the submodule godot-cpp
# The git adress can be found under the green "Code" dropdown menu
git clone --recursive (--GITHUB ADRESS--)
```

2. Make sure you are in the top level of the repository
```bash
pwd
.../GDExtensionSummator
```

3. Go inside the godot-cpp folder
```bash
cd godot-cpp
```

4. Compile godot-cpp and generate bindings
```bash
scons target=debug generate_bindings=yes
```

5. Go back to the top level of the directory
```bash
cd ..
```

6. Compile the extension
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
        # outputs 60 in the console
	s.reset()
```


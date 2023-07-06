# GDExtension-Summator
<div id="badges" align="center">
  <a href="https://ko-fi.com/flamelizard">
    <img src="https://img.shields.io/badge/Support my work-red?style=for-the-badge&logo=kofi&logoColor=white" alt="Ko-Fi Badge"/>
  </a>
  <a href="https://twitter.com/patrick_exe">
    <img src="https://img.shields.io/badge/Twitter-blue?style=for-the-badge&logo=twitter&logoColor=white" alt="Twitter Badge"/>
  </a>
  <a href="https://mastodon.gamedev.place/@flamelizard">
    <img src="https://img.shields.io/badge/Mastodon-purple?style=for-the-badge&logo=mastodon&logoColor=white" alt="Mastodon Badge"/>
  </a>
</div>

This repository is for showcasing the new GDExtension system in Godot 4.
The C++ code is from the [Custom modules example](https://docs.godotengine.org/en/latest/development/cpp/custom_modules_in_cpp.html "Click to get to the docs") of the Godot docs.

----> **Feel free to use this repository as a template for your GDExtensions**

## :tada: Using the extension
After compiling the extension successfully, you can now use the Summator Class inside Godot
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

## 🔢 Versioning
This repository is being updated regularly to work with the latest point release of the Godot branches. 
If you can't compile the extension, please open an issue.

The releases are structured as ``GODOT_VERSION-EXTENSION_VERSION`` to clarify which version to use for which Godot version.

## ❓ What? How? Why?
If you are not sure what each file in this project does or if you want to know in detail: I wrote a blog post about the purpose of each file on [my Ko-Fi page](https://ko-fi.com/post/GDExtension--Godot-SUPERCHARGED--How-to-get-star-Z8Z4GLUSE).

## Alternative templates
If you want to work with the latest master and godot-cpp version, check out this [GDExtension template by Nathan Franke](https://github.com/nathanfranke/gdextension).
If you are more used to CMake than Scons you can use [this template here by asmalone](https://github.com/asmaloney/GDExtensionTemplate)

## ℹ️ Contributing
If you can't compile the extension, please open an issue with the error log in your terminal and/or the error log in the editor (if you can't run the example scene).

PRs for improvements are very welcome!

## ⚙️ Building the extension

### VSCode Compilation (only applicable if you are using VSCode as your code editor)
For the initial build you can run the vscode task `initial-build-extension`. This compiles both godot-cpp and the extension. For all subsequent builds, you only need to run the task `build-extension`.

### Debugging via VSCode
To debug your extension you can run the ``build-extension [dev build]`` command. To use this command you need to also modify your specific Godot paths inside the ``.vscode/tasks.json`` file. For further information see [here](https://github.com/paddy-exe/GDExtensionSummator/issues/50).

### Manual Compilation

To compile the extension you need to follow these steps:

0. Click on the green "Use this template" button to generate the repository for you

1. Clone the extension recursively from this repository
```bash
# The git adress can be found under the green "Code" dropdown menu
git clone (--GITHUB ADRESS--) # --recursive to automatically load the submodule godot-cpp
```

2. Make sure you are on the right commit of the godot-cpp repository
```bash
git status # this show's you the commit. Make sure that it has the correct commit for the release you are targeting
```
To make sure you have the right commit, here the [link to the pinned updated issue with the commit hashes](https://github.com/godotengine/godot-cpp/issues/874)

3. Make sure you are in the top level of the repository so `pwd` returns the following
```bash
pwd
.../GDExtensionSummator
```

4. Go inside the godot-cpp folder
```bash
cd godot-cpp
```

5. Compile godot-cpp and generate the bindings (only needed once when starting development or when there is an update of the submodule)
```bash
scons # this will use the default values such as target=template_debug
```

6. Go back to the top level of the directory
```bash
cd ..
```

7. Compile the extension
```bash
scons # this will use the default values such as target=template_debug
```

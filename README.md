## UnrealCourse

UnrealCourse is a UE first-person learning sandbox built from the stock First Person template. It keeps the standard assets—mannequin arms, FPGun, projectile blueprint, and the default example map—so you can experiment with gameplay code, materials, and level design without re‑implementing the basics.

### Structure
- `Source/UnrealCourse`: Gameplay module with character, projectile, HUD, and GameMode classes in C++.
- `Content/FirstPerson*`: Template meshes, materials, blueprints, animations, and the sample map.
- `Config/Default*.ini`: Engine, input, and game settings that mirror the default template values.

### Getting Started
1. Open `UnrealCourse.uproject` in Unreal Engine 4/5, or load `UnrealCourse.sln` in Visual Studio to build the C++ module.
2. Press Play in the editor to run the standard first-person shooter loop (WASD + mouse, shoot projectiles with the left mouse button).

Use this repo as a starting point for course exercises: extend the existing character, add new input bindings in `DefaultInput.ini`, or swap assets in `Content` to explore Unreal workflows.

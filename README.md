```markdown
# ⚔️ UE5 RPG Project

An Unreal Engine 5 C++ RPG Project using the Gameplay Ability System (GAS).

Harness the power of Unreal Engine 5 and C++ to build a robust and engaging RPG experience.



## About

This project is a C++ RPG built using Unreal Engine 5, leveraging the Gameplay Ability System (GAS) for a flexible and scalable gameplay experience.  It aims to provide a solid foundation for creating complex RPG mechanics, including character abilities, attributes, combat, and inventory management. The target audience includes game developers, Unreal Engine enthusiasts, and anyone interested in learning about GAS and C++ game development.

The project solves the problem of setting up a complex RPG system from scratch by providing a pre-built, extensible framework.  It utilizes C++ for performance and control, and the Gameplay Ability System for its modularity and ease of use.  The architecture is designed to be easily expanded upon, allowing developers to add their own unique content and features.

Key technologies used include Unreal Engine 5, C++, and the Gameplay Ability System.  The project's unique selling point is its focus on providing a well-structured and documented example of using GAS in a real-world RPG context.

## ✨ Features

- 🎯 **Gameplay Ability System (GAS) Integration**:  Utilizes GAS for managing character abilities, effects, and attributes, allowing for a highly modular and extensible system.
- ⚔️ **Combat System**:  A basic combat system is implemented using GAS, showcasing how abilities can be used for attacks, defenses, and other combat actions.
- 📈 **Attribute System**:  Character attributes (e.g., strength, agility, intelligence) are managed using GAS, allowing for dynamic scaling and modification of character stats.
- 🎒 **Inventory System**: A basic inventory system is included, demonstrating how items can be managed and used within the game.
- 🎨 **Extensible**: Designed to be easily extended with new abilities, attributes, items, and other gameplay features.
- 🛠️ **C++ Implementation**: Leverages the power and performance of C++ for core gameplay logic.

## 🎬 Demo

Unfortunately, there is no live demo available at this time. However, here are some placeholder screenshots to illustrate the potential of the project:

### Screenshots
![Character Selection Screen](screenshots/character_selection.png)
*Placeholder screenshot of a character selection screen.*

![In-Game Combat](screenshots/in_game_combat.png)
*Placeholder screenshot of in-game combat.*

## 🚀 Quick Start

To get started with this project, follow these steps:

1.  Clone the repository:
    ```bash
    git clone https://github.com/francorl/UE5_RPG.git
    ```

2.  Open the project in Unreal Engine 5.

3.  Build the project in the Unreal Engine editor.

4.  Run the game.

## 📦 Installation

### Prerequisites

-   Unreal Engine 5.x
-   A C++ compiler compatible with Unreal Engine (e.g., Visual Studio on Windows, Xcode on macOS)
-   Git

### Steps

1.  **Clone the Repository:**
    ```bash
    git clone https://github.com/francorl/UE5_RPG.git
    ```

2.  **Open the Project in Unreal Engine:**
    -   Navigate to the cloned directory.
    -   Double-click the `.uproject` file to open the project in Unreal Engine.

3.  **Build the Project:**
    -   In the Unreal Engine editor, go to `Build` -> `Build Solution`.  This will compile the C++ code.

4.  **Run the Game:**
    -   Click the `Play` button in the Unreal Engine editor to run the game.

## 💻 Usage

This project provides a foundation for building an RPG.  You can extend it by:

-   Adding new gameplay abilities.
-   Creating new character attributes.
-   Implementing more advanced combat mechanics.
-   Developing a more sophisticated inventory system.
-   Adding new levels and environments.

Example of adding a new gameplay ability (conceptual):

```c++
// MyNewAbility.h
#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "MyNewAbility.generated.h"

UCLASS()
class MYPROJECT_API UMyNewAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UMyNewAbility();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, FGameplayEventData* TriggerEventData) override;
};

// MyNewAbility.cpp
#include "MyNewAbility.h"

UMyNewAbility::UMyNewAbility()
{
	// Default constructor logic
}

void UMyNewAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	// Ability activation logic here
	UE_LOG(LogTemp, Warning, TEXT("MyNewAbility Activated!"));

	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}
```

## ⚙️ Configuration

This project relies on Unreal Engine's built-in configuration system.  You can configure various aspects of the game through the Unreal Engine editor, including:

-   **Game Settings:** Located in `Edit` -> `Project Settings`.
-   **Input Bindings:**  Located in `Edit` -> `Project Settings` -> `Input`.
-   **Gameplay Ability System Settings:**  Configured through Gameplay Effects and Ability Blueprints.

## 📁 Project Structure

```
UE5_RPG/
├── Config/                 # Configuration files
├── Content/                # Game assets (models, textures, sounds, etc.)
│   ├── Blueprints/         # Blueprints for characters, abilities, etc.
│   ├── Characters/         # Character assets
│   ├── UI/                 # User interface assets
│   └── ...
├── Source/
│   ├── UE5_RPG/            # C++ source code
│   │   ├── Public/        # Public header files
│   │   ├── Private/       # Private source files
│   │   ├── UE5_RPG.Build.cs # Build configuration
│   │   ├── UE5_RPG.cpp      # Module implementation
│   │   └── UE5_RPG.h        # Module header
│   └── ...
├── UE5_RPG.uproject        # Unreal Engine project file
└── ...
```

## 🤝 Contributing

Contributions are welcome! Please follow these guidelines:

1.  Fork the repository.
2.  Create a new branch for your feature or bug fix.
3.  Implement your changes.
4.  Submit a pull request.

### Development Setup

1.  Fork and clone the repository.
2.  Open the project in Unreal Engine.
3.  Create a new branch for your changes.
4.  Implement your changes and test them thoroughly.
5.  Submit a pull request.

## Testing

Testing in Unreal Engine is typically done through the editor's built-in testing framework or through manual testing.  Ensure that any new features or bug fixes are thoroughly tested before submitting a pull request.

## Deployment

Deployment of Unreal Engine projects can be done to various platforms, including Windows, macOS, Linux, consoles, and mobile devices.  Refer to the Unreal Engine documentation for detailed instructions on deploying to your target platform.

## FAQ

**Q: What is the Gameplay Ability System (GAS)?**

A: The Gameplay Ability System is a framework within Unreal Engine that allows you to create and manage abilities, effects, and attributes in a modular and extensible way.

**Q: What C++ version is used in this project?**

A: This project uses the C++ version supported by Unreal Engine 5.

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

### License Summary
- ✅ Commercial use
- ✅ Modification
- ✅ Distribution
- ✅ Private use
- ❌ Liability
- ❌ Warranty

## 💬 Support

-   🐛 **Issues**: [GitHub Issues](https://github.com/francorl/UE5_RPG/issues)

## 🙏 Acknowledgments

-   🎮 **Unreal Engine**:  Thanks to Epic Games for creating such a powerful and versatile game engine.
-   📚 **GAS Documentation**:  Thanks to the Unreal Engine documentation team for providing comprehensive documentation on the Gameplay Ability System.
```

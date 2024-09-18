#include "Characters/WarriorBaseCharacter.h"

#include "WarriorHeroCharacter.generated.h"

class USpringArmComponent;
class UCineCameraComponent;
class UDataAsset_InputConfig;
struct FInputActionValue;

/**
 * 
 */
UCLASS()
class WARRIOR_API AWarriorHeroCharacter : public AWarriorBaseCharacter
{
	GENERATED_BODY()


public:
	AWarriorHeroCharacter();

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void BeginPlay() override;

	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface

private:

#pragma region Components

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCineCameraComponent* FollowCamera;

#pragma endregion

#pragma region Inputs

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData", meta = (AllowPrivateAccess = "true"))
	UDataAsset_InputConfig* InputConfigDataAsset;

	void Input_Move(const FInputActionValue& InputActionValue);
	void Input_Look(const FInputActionValue& InputActionValue);

#pragma endregion

};
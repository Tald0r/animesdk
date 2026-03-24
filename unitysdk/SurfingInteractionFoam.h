#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SurfingForwardDirection.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SURFINGINTERACTIONFOAM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15680390)
#define SURFINGINTERACTIONFOAM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1567FF60)
#define SURFINGINTERACTIONFOAM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1567FFC0)
#define SURFINGINTERACTIONFOAM__CTOR_OFFSET UNITYSDK_OFFSET(0x15680420)

inline static constexpr unsigned int SurfingInteractionFoam_TypeDefinitionIndex = 64756;

class SurfingInteractionFoam : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Bounds interactionBounds; // 0x18
	::SurfingForwardDirection forwardDirection; // 0x30
	::System::Single maskFadeMin; // 0x34
	::System::Single maskFadeMax; // 0x38
	::System::Single maskTipScale; // 0x3C
	::System::Single maskTailScale; // 0x40
	::System::Single foamBrightness; // 0x44
	::UnityEngine::Matrix4x4 propertyMatrix; // 0x48
	::System::Int32 _SurfingInteractionParamsMatrix; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SURFINGINTERACTIONFOAM__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SURFINGINTERACTIONFOAM_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SURFINGINTERACTIONFOAM_UPDATE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SURFINGINTERACTIONFOAM_ONDISABLE_OFFSET))(this);
	}
};

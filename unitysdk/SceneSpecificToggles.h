#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SCENESPECIFICTOGGLES_INITSCENEPARAMS_OFFSET UNITYSDK_OFFSET(0x17635330)
#define SCENESPECIFICTOGGLES_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17635610)
#define SCENESPECIFICTOGGLES_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17635580)
#define SCENESPECIFICTOGGLES_ONENABLE_OFFSET UNITYSDK_OFFSET(0x176352E0)
#define SCENESPECIFICTOGGLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x176356C0)
#define SCENESPECIFICTOGGLES__CTOR_OFFSET UNITYSDK_OFFSET(0x176356A0)

inline static constexpr unsigned int SceneSpecificToggles_TypeDefinitionIndex = 28976;

class SceneSpecificToggles : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Boolean* StaticGet_hizCulling()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneSpecificToggles_TypeDefinitionIndex)->GetStaticField(0x6720);
	}
	::System::Boolean m_disableHizCulling; // 0x18
	::System::Boolean originalHizCulling; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENESPECIFICTOGGLES__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENESPECIFICTOGGLES__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENESPECIFICTOGGLES_ONENABLE_OFFSET))(this);
	}

	::System::Void InitSceneParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENESPECIFICTOGGLES_INITSCENEPARAMS_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENESPECIFICTOGGLES_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENESPECIFICTOGGLES_ONDESTROY_OFFSET))(this);
	}
};

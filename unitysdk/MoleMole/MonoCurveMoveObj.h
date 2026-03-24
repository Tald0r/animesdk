#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOCURVEMOVEOBJ_AWAKE_OFFSET UNITYSDK_OFFSET(0xB99A060)
#define MOLEMOLE_MONOCURVEMOVEOBJ_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB99A0D0)
#define MOLEMOLE_MONOCURVEMOVEOBJ_METHOD_8_DFBBBBB761BF1414_OFFSET UNITYSDK_OFFSET(0xB99AB70)
#define MOLEMOLE_MONOCURVEMOVEOBJ_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0xB99A240)
#define MOLEMOLE_MONOCURVEMOVEOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0xB99AC80)
#define MOLEMOLE_MONOCURVEMOVEOBJ___BASE_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0xB99AD40)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCurveMoveObj_TypeDefinitionIndex = 51359;

	class MonoCurveMoveObj : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::UnityEngine::GameObject* modelGo; // 0x30
		::UnityEngine::GameObject* collider; // 0x38
		::System::Single minHeight; // 0x40
		::System::Single maxHeight; // 0x44
		::System::Single colliderOpenHeight; // 0x48
		::System::Single timeOffset; // 0x4C
		::System::Single Field_8_6; // 0x50
		::Il2CppArray<::System::Single>* timePeriods; // 0x58
		::Il2CppArray<::System::Single>* Field_8_8; // 0x60
		::System::String* UpCurveKey; // 0x68
		::System::String* DownCurveKey; // 0x70
		::UnityEngine::AnimationCurve* Field_8_11; // 0x78
		::UnityEngine::AnimationCurve* Field_8_12; // 0x80
		::System::String* SoundUpEvent; // 0x88
		::System::String* SoundDownEvent; // 0x90
		::System::Int32 Field_8_15; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJ__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJ_AWAKE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJ_INITIALIZE_OFFSET))(this);
		}

		::System::Void OnDoUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJ_ONDOUPDATE_OFFSET))(this, a1);
		}

		::System::Void __base_OnDoUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJ___BASE_ONDOUPDATE_OFFSET))(this, a1);
		}

		::System::Int32 Method_8_DFBBBBB761BF1414(::System::Single a1, ::System::Single& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJ_METHOD_8_DFBBBBB761BF1414_OFFSET))(this, a1, a2);
		}
	};
}

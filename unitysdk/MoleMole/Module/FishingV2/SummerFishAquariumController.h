#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_GETFISHTANKTRANSFORM_OFFSET UNITYSDK_OFFSET(0x67AF9A0)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_GETFISHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x67AF620)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x67AFB30)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_2C1FE282BA2BA531_OFFSET UNITYSDK_OFFSET(0x67B0220)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x67AEB80)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_4434761CB9BE21F7_OFFSET UNITYSDK_OFFSET(0x67B03A0)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x67AE210)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_6C5219D256048011_OFFSET UNITYSDK_OFFSET(0x67B0330)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_9BFE7737D26CFA72_OFFSET UNITYSDK_OFFSET(0x67AFBB0)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_AA08720895458700_OFFSET UNITYSDK_OFFSET(0x67B0290)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x67AF0C0)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x67ADBF0)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x67B0200)

namespace MoleMole::Module::FishingV2
{
	inline static constexpr unsigned int SummerFishAquariumController_TypeDefinitionIndex = 57136;

	class SummerFishAquariumController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_7; // 0x0
		// static const ::System::String* Field_5_8; // 0x0
		// static const ::System::String* Field_5_9; // 0x0
		// static const ::System::String* Field_5_10; // 0x0
		// static const ::System::String* Field_5_11; // 0x0
		::Cinemachine::CinemachineVirtualCamera* Field_5_0; // 0x18
		::System::Int32 Field_5_1; // 0x20
		::UnityEngine::Transform* Field_5_2; // 0x28
		::UnityEngine::Transform* Field_5_3; // 0x30
		::UnityEngine::Vector3 Field_5_4; // 0x38
		::UnityEngine::Vector3 Field_5_5; // 0x44
		::System::Boolean Field_5_6; // 0x50
		::System::Single Field_5_12; // 0x54
		::UnityEngine::Vector3 Field_5_13; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetFishTransform(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_GETFISHTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetFishTankTransform(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_GETFISHTANKTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_2C1FE282BA2BA531(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_2C1FE282BA2BA531_OFFSET))(this, a1);
		}

		::System::Void Method_5_9BFE7737D26CFA72(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_9BFE7737D26CFA72_OFFSET))(this, a1);
		}

		::System::Void Method_5_4389275F4099DE36()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_4389275F4099DE36_OFFSET))(this);
		}

		::System::Void Method_5_AA08720895458700(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_AA08720895458700_OFFSET))(this, a1);
		}

		::System::Void Method_5_66CC9828DB1F478F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_66CC9828DB1F478F_OFFSET))(this);
		}

		::System::Void Method_5_6C5219D256048011(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_6C5219D256048011_OFFSET))(this, a1);
		}

		::System::Void Method_5_4434761CB9BE21F7(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_4434761CB9BE21F7_OFFSET))(this, a1);
		}
	};
}

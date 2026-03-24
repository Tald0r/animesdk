#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_METHOD_5_52466F3CA46AC7C4_OFFSET UNITYSDK_OFFSET(0xC7CF050)
#define MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_METHOD_5_86365E2EC5AEA470_OFFSET UNITYSDK_OFFSET(0xC7CF260)
#define MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_METHOD_5_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xC7CDFE0)
#define MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0xC7CDFB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelDoorFxAutoLayout_TypeDefinitionIndex = 50512;

	class MonoLevelDoorFxAutoLayout : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single yOffset; // 0x18
		::UnityEngine::GameObject* fx_jinzhitongxiong; // 0x20
		::System::Single fx_jinzhitongxing_width; // 0x28
		::UnityEngine::GameObject* fx_jinzhi; // 0x30
		::System::Single fx_jinzhi_width; // 0x38
		::UnityEngine::GameObject* fx_cha; // 0x40
		::System::Single fx_cha_width; // 0x48
		::UnityEngine::GameObject* fx_dian; // 0x50
		::UnityEngine::GameObject* fx_screenEffect; // 0x58
		::UnityEngine::GameObject* fx_Light; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_B2C0ADBFEA309440()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_METHOD_5_B2C0ADBFEA309440_OFFSET))(this);
		}

		::System::Void Method_5_86365E2EC5AEA470(::UnityEngine::ParticleSystem* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_METHOD_5_86365E2EC5AEA470_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* Method_5_52466F3CA46AC7C4(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_METHOD_5_52466F3CA46AC7C4_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0xC9DB010)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xC9DC1A0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_3A1BC9FEAE4C080B_OFFSET UNITYSDK_OFFSET(0xC9DC050)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0xC9DBF90)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_82DDD4717FD4ECF8_OFFSET UNITYSDK_OFFSET(0xC9DB990)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC9DB3E0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC9DB2A0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC9DB170)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xC9DAFB0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC9DB450)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC9DC2E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBuddyStairAnimCorrector_TypeDefinitionIndex = 43241;

	class MonoBuddyStairAnimCorrector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* RootTransform; // 0x18
		::UnityEngine::Transform* Pelvis; // 0x20
		::System::Single BubbyLegHeight; // 0x28
		::System::Int32 ConfigLayers; // 0x2C
		::System::String* ConfigTag; // 0x30
		::System::Single DampingHalfLife; // 0x38
		::System::Single BubbyFootRadius; // 0x3C
		::UnityEngine::Vector3 Offset; // 0x40
		::System::Boolean Field_5_8; // 0x4C
		::UnityEngine::Animator* Field_5_9; // 0x50
		::System::Single Field_5_10; // 0x58
		::Il2CppArray<::UnityEngine::RaycastHit>* Field_5_11; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR__CTOR_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Single Method_5_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_3A1BC9FEAE4C080B(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_3A1BC9FEAE4C080B_OFFSET))(this, a1);
		}

		::UnityEngine::RaycastHit Method_5_82DDD4717FD4ECF8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean& a4)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_82DDD4717FD4ECF8_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}
	};
}

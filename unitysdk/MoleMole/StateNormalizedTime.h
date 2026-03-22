#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

class Class_3_F33F9DC5F4112336;
namespace UnityEngine { class Animator; }

#define MOLEMOLE_STATENORMALIZEDTIME_METHOD_4_03037A8F3F9539FB_OFFSET UNITYSDK_OFFSET(0xB8C73F0)
#define MOLEMOLE_STATENORMALIZEDTIME_METHOD_4_2DB8CABC5F9281CC_1_OFFSET UNITYSDK_OFFSET(0xB8C7AE0)
#define MOLEMOLE_STATENORMALIZEDTIME_METHOD_4_2DB8CABC5F9281CC_OFFSET UNITYSDK_OFFSET(0xB8C7AD0)
#define MOLEMOLE_STATENORMALIZEDTIME_METHOD_4_A00C48FA484938DC_OFFSET UNITYSDK_OFFSET(0xB8C6EF0)
#define MOLEMOLE_STATENORMALIZEDTIME_METHOD_4_E1484A21E77FE213_OFFSET UNITYSDK_OFFSET(0xB8C6B10)
#define MOLEMOLE_STATENORMALIZEDTIME_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xB8C68A0)
#define MOLEMOLE_STATENORMALIZEDTIME_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB8C7340)
#define MOLEMOLE_STATENORMALIZEDTIME__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8C7A90)
#define MOLEMOLE_STATENORMALIZEDTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C7A60)

namespace MoleMole
{
	inline static constexpr unsigned int StateNormalizedTime_TypeDefinitionIndex = 75989;

	class StateNormalizedTime : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		static ::System::Int32* StaticGet_normalizedTimeParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StateNormalizedTime_TypeDefinitionIndex)->GetStaticField(0xEE70);
		}
		static ::System::Int32* StaticGet_frameCountParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StateNormalizedTime_TypeDefinitionIndex)->GetStaticField(0xEE74);
		}
		::Class_3_F33F9DC5F4112336* cachedAnimatorComponent; // 0x18
		::System::Boolean paramHashInitialize; // 0x20
		::System::Single cachedTotalFrameCount; // 0x24
		::System::Int32 cachedAnimatorHash; // 0x28
		::System::Int32 cachedShortNameHash; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME__CCTOR_OFFSET))();
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_A00C48FA484938DC(::Class_3_F33F9DC5F4112336* a1, ::UnityEngine::Animator* a2, ::UnityEngine::AnimatorStateInfo a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_METHOD_4_A00C48FA484938DC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_4_E1484A21E77FE213(::UnityEngine::Animator* a1, ::Class_3_F33F9DC5F4112336*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::Class_3_F33F9DC5F4112336*&))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_METHOD_4_E1484A21E77FE213_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_2DB8CABC5F9281CC(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_METHOD_4_2DB8CABC5F9281CC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_2DB8CABC5F9281CC_1(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_METHOD_4_2DB8CABC5F9281CC_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_03037A8F3F9539FB(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo&, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_METHOD_4_03037A8F3F9539FB_OFFSET))(this, a1, a2, a3);
		}
	};
}

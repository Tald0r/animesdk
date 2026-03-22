#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_CHANGEUSAGEMSG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F76350)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_CHANGEUSAGEMSG___C__CREATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x19F763A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_CHANGEUSAGEMSG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F76390)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_ChangeUsageMsg___c_TypeDefinitionIndex = 27546;

	class InputRemoting_ChangeUsageMsg___c : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg___c**)Il2CppClass::FromTypeDefinitionIndex(InputRemoting_ChangeUsageMsg___c_TypeDefinitionIndex)->GetStaticField(0x20050);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputRemoting_ChangeUsageMsg___c_TypeDefinitionIndex)->GetStaticField(0x20058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_CHANGEUSAGEMSG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_CHANGEUSAGEMSG___C__CTOR_OFFSET))(this);
		}

		::System::String* _Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_CHANGEUSAGEMSG___C__CREATE_B__1_0_OFFSET))(this, x);
		}
	};
}

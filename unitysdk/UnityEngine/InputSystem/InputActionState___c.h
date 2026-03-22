#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_GlobalState.h"

namespace System { class Action; }
namespace UnityEngine::InputSystem::Utilities { template <typename T> class SavedStructState_1_TypedRestore; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ECB640)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19ECB680)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__SAVEANDRESETSTATE_B__121_0_OFFSET UNITYSDK_OFFSET(0x19ECB690)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__SAVEANDRESETSTATE_B__121_1_OFFSET UNITYSDK_OFFSET(0x19ECB6B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionState___c_TypeDefinitionIndex = 27457;

	class InputActionState___c : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::InputActionState_GlobalState>** StaticGet___9__121_0()
		{
			return (::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::InputActionState_GlobalState>**)Il2CppClass::FromTypeDefinitionIndex(InputActionState___c_TypeDefinitionIndex)->GetStaticField(0x1FF00);
		}
		static ::UnityEngine::InputSystem::InputActionState___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::InputActionState___c**)Il2CppClass::FromTypeDefinitionIndex(InputActionState___c_TypeDefinitionIndex)->GetStaticField(0x1FF08);
		}
		static ::System::Action** StaticGet___9__121_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(InputActionState___c_TypeDefinitionIndex)->GetStaticField(0x1FF10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__CTOR_OFFSET))(this);
		}

		::System::Void _SaveAndResetState_b__121_0(::UnityEngine::InputSystem::InputActionState_GlobalState& state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_GlobalState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__SAVEANDRESETSTATE_B__121_0_OFFSET))(this, state);
		}

		::System::Void _SaveAndResetState_b__121_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__SAVEANDRESETSTATE_B__121_1_OFFSET))(this);
		}
	};
}

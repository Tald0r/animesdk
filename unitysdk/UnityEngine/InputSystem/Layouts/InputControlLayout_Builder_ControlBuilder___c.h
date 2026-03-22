#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1979B880)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1979B8C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER___C__WITHUSAGES_B__14_0_OFFSET UNITYSDK_OFFSET(0x1979B8D0)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_Builder_ControlBuilder___c_TypeDefinitionIndex = 27867;

	class InputControlLayout_Builder_ControlBuilder___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_Builder_ControlBuilder___c_TypeDefinitionIndex)->GetStaticField(0x20630);
		}
		static ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder___c**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_Builder_ControlBuilder___c_TypeDefinitionIndex)->GetStaticField(0x20638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::InternedString _WithUsages_b__14_0(::System::String* x)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER___C__WITHUSAGES_B__14_0_OFFSET))(this, x);
		}
	};
}

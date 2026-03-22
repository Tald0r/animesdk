#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_19B7C5138FC90FBC_Class_3_CE116D382D9EF84C;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class InputField_OnValidateInput; }

#define MOLEMOLE_UIINPUTFIELDEX_CLASS_1_640B090AA43C41B2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8A55FB0)
#define MOLEMOLE_UIINPUTFIELDEX_CLASS_1_640B090AA43C41B2__CTOR_2_OFFSET UNITYSDK_OFFSET(0x8A55FD0)
#define MOLEMOLE_UIINPUTFIELDEX_CLASS_1_640B090AA43C41B2__CTOR_3_OFFSET UNITYSDK_OFFSET(0x8A56080)
#define MOLEMOLE_UIINPUTFIELDEX_CLASS_1_640B090AA43C41B2__CTOR_OFFSET UNITYSDK_OFFSET(0x8A55FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInputFieldEx_Class_1_640B090AA43C41B2_TypeDefinitionIndex = 48479;

	class UIInputFieldEx_Class_1_640B090AA43C41B2 : public ::System::Object
	{
	public:
		::System::Action* Field_1_1; // 0x10
		::UnityEngine::UI::InputField* Field_1_4; // 0x18
		::System::Action* Field_1_0; // 0x20
		::UnityEngine::UI::InputField_OnValidateInput* Field_1_2; // 0x28
		::UnityEngine::Events::UnityAction_1<::System::String*>* Field_1_3; // 0x30

		::System::Void _ctor(::UnityEngine::Events::UnityAction_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_CLASS_1_640B090AA43C41B2__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Action* a1, ::System::Action* a2, ::UnityEngine::UI::InputField_OnValidateInput* a3, ::UnityEngine::Events::UnityAction_1<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::UnityEngine::UI::InputField_OnValidateInput*, ::UnityEngine::Events::UnityAction_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_CLASS_1_640B090AA43C41B2__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::System::Action* a1, ::System::Action* a2, ::Class_2_19B7C5138FC90FBC_Class_3_CE116D382D9EF84C* a3, ::UnityEngine::Events::UnityAction_1<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::Class_2_19B7C5138FC90FBC_Class_3_CE116D382D9EF84C*, ::UnityEngine::Events::UnityAction_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_CLASS_1_640B090AA43C41B2__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_3(::System::Action* a1, ::System::Action* a2, ::Class_2_19B7C5138FC90FBC_Class_3_CE116D382D9EF84C* a3, ::UnityEngine::Events::UnityAction_1<::System::String*>* a4, ::UnityEngine::UI::InputField* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::Class_2_19B7C5138FC90FBC_Class_3_CE116D382D9EF84C*, ::UnityEngine::Events::UnityAction_1<::System::String*>*, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINPUTFIELDEX_CLASS_1_640B090AA43C41B2__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}

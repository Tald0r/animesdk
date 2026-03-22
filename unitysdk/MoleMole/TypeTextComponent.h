#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class TypeTextComponent_Class_3_50D343C44D28BEFB_3; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_TYPETEXTCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xBD68E00)
#define MOLEMOLE_TYPETEXTCOMPONENT_ISSKIPPABLE_OFFSET UNITYSDK_OFFSET(0xBD697C0)
#define MOLEMOLE_TYPETEXTCOMPONENT_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xBD68E70)
#define MOLEMOLE_TYPETEXTCOMPONENT_METHOD_5_18B30D43E962854B_OFFSET UNITYSDK_OFFSET(0xBD692B0)
#define MOLEMOLE_TYPETEXTCOMPONENT_METHOD_5_4C2E64117BF47D64_OFFSET UNITYSDK_OFFSET(0xBD69A30)
#define MOLEMOLE_TYPETEXTCOMPONENT_SETONCOMPLETE_OFFSET UNITYSDK_OFFSET(0xBD69830)
#define MOLEMOLE_TYPETEXTCOMPONENT_SETREALTEXT_OFFSET UNITYSDK_OFFSET(0xBD69030)
#define MOLEMOLE_TYPETEXTCOMPONENT_SETTEXT_OFFSET UNITYSDK_OFFSET(0xBD690A0)
#define MOLEMOLE_TYPETEXTCOMPONENT_SKIPTYPETEXT_OFFSET UNITYSDK_OFFSET(0xBD69620)
#define MOLEMOLE_TYPETEXTCOMPONENT_TYPETEXT_OFFSET UNITYSDK_OFFSET(0xBD69570)
#define MOLEMOLE_TYPETEXTCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xBD68FB0)
#define MOLEMOLE_TYPETEXTCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD698D0)
#define MOLEMOLE_TYPETEXTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBD698A0)

namespace MoleMole
{
	inline static constexpr unsigned int TypeTextComponent_TypeDefinitionIndex = 57014;

	class TypeTextComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_6()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TypeTextComponent_TypeDefinitionIndex)->GetStaticField(0x36880);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_5()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TypeTextComponent_TypeDefinitionIndex)->GetStaticField(0x36888);
		}
		// static const ::System::String* Field_5_14; // 0x0
		// static const ::System::String* Field_5_15; // 0x0
		::System::Single _defaultSpeed; // 0x18
		::UnityEngine::UI::Text* Field_5_1; // 0x20
		::System::String* Field_5_2; // 0x28
		::System::String* Field_5_3; // 0x30
		::UnityEngine::Coroutine* Field_5_4; // 0x38
		::MoleMole::TypeTextComponent_Class_3_50D343C44D28BEFB_3* Field_5_7; // 0x40
		::System::Single Field_5_8; // 0x48
		::System::Single Field_5_9; // 0x4C
		::System::Text::StringBuilder* Field_5_10; // 0x50
		::System::Boolean Field_5_11; // 0x58
		::System::String* Field_5_12; // 0x60
		::System::Int32 Field_5_13; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_UPDATE_OFFSET))(this);
		}

		::System::Void SetRealText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_SETREALTEXT_OFFSET))(this, a1);
		}

		::System::Void SetText(::System::String* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_SETTEXT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SkipTypeText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_SKIPTYPETEXT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* TypeText(::System::String* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_TYPETEXT_OFFSET))(this, a1);
		}

		::System::Boolean IsSkippable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_ISSKIPPABLE_OFFSET))(this);
		}

		::System::Void SetOnComplete(::MoleMole::TypeTextComponent_Class_3_50D343C44D28BEFB_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TypeTextComponent_Class_3_50D343C44D28BEFB_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_SETONCOMPLETE_OFFSET))(this, a1);
		}

		::System::String* Method_5_4C2E64117BF47D64(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_METHOD_5_4C2E64117BF47D64_OFFSET))(this, a1);
		}

		::System::String* Method_5_18B30D43E962854B(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_METHOD_5_18B30D43E962854B_OFFSET))(this, a1);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3AD860)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__9_0_OFFSET UNITYSDK_OFFSET(0xC3AD8B0)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__9_1_OFFSET UNITYSDK_OFFSET(0xC3AD980)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__9_2_OFFSET UNITYSDK_OFFSET(0xC3ADA50)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3AD8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageContext___c_TypeDefinitionIndex = 77528;

	class UIRoleInfoPageContext___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x301E0);
		}
		static ::System::Action** StaticGet___9__9_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x301E8);
		}
		static ::MoleMole::UIRoleInfoPageContext___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleInfoPageContext___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x301F0);
		}
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x301F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Void _Construct_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__9_0_OFFSET))(this);
		}

		::System::Void _Construct_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__9_1_OFFSET))(this);
		}

		::System::Void _Construct_b__9_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__9_2_OFFSET))(this);
		}
	};
}

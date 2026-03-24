#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_34;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC341D0)
#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAC34210)
#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_0_OFFSET UNITYSDK_OFFSET(0xAC34220)
#define MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_1_OFFSET UNITYSDK_OFFSET(0xAC343D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooDreamResultPageController___c_TypeDefinitionIndex = 63529;

	class UIBangBooDreamResultPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangBooDreamResultPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangBooDreamResultPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooDreamResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F040);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_34*>** StaticGet___9__11_1()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_34*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooDreamResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F048);
		}
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooDreamResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x3F050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPrepareShow_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_0_OFFSET))(this);
		}

		::System::Void _OnPrepareShow_b__11_1(::Class_3_48A3D3A34C52331D_34* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_34*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMRESULTPAGECONTROLLER___C__ONPREPARESHOW_B__11_1_OFFSET))(this, msg);
		}
	};
}

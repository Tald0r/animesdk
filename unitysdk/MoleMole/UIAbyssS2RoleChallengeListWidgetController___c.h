#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8FA700)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE8FA740)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__INITTABGROUP_B__7_0_OFFSET UNITYSDK_OFFSET(0xE8FA750)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RoleChallengeListWidgetController___c_TypeDefinitionIndex = 78833;

	class UIAbyssS2RoleChallengeListWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssS2RoleChallengeListWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2RoleChallengeListWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeListWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37050);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeListWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitTabGroup_b__7_0(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__INITTABGROUP_B__7_0_OFFSET))(this, index);
		}
	};
}

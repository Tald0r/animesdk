#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_16;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B97370)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8B973B0)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__ONBEGINBATTLE_B__23_0_OFFSET UNITYSDK_OFFSET(0x8B97480)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__ONMAINBTNCLICK_B__14_0_OFFSET UNITYSDK_OFFSET(0x8B973C0)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C___CTOR_B__52_0_OFFSET UNITYSDK_OFFSET(0x8B97490)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex = 56065;

	class UIAbyssS2RoleChallengeWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2DFF0);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_16*>** StaticGet___9__23_0()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_16*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2DFF8);
		}
		static ::MoleMole::UIAbyssS2RoleChallengeWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2RoleChallengeWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2E000);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RoleChallengeWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2E008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnMainBtnClick_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__ONMAINBTNCLICK_B__14_0_OFFSET))(this);
		}

		::System::Void _OnBeginBattle_b__23_0(::Class_3_48A3D3A34C52331D_16* beginHollowData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_16*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__ONBEGINBATTLE_B__23_0_OFFSET))(this, beginHollowData);
		}

		::System::Boolean __ctor_b__52_0(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C___CTOR_B__52_0_OFFSET))(this, i);
		}
	};
}

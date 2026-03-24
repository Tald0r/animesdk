#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_49EE7E97681F5D41;
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__BINDTWEENSLOT_B__105_2_OFFSET UNITYSDK_OFFSET(0xBB67910)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB678D0)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBB67900)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__PLAYMISSIONTIPFADEIN_B__301_0_OFFSET UNITYSDK_OFFSET(0xBB679D0)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C___SORTMISSIONTIPS_B__297_0_OFFSET UNITYSDK_OFFSET(0xBB67920)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMainPageController___c_TypeDefinitionIndex = 71728;

	class UIInLevelMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_49EE7E97681F5D41*>** StaticGet___9__297_0()
		{
			return (::System::Comparison_1<::Class_1_49EE7E97681F5D41*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x2E5B0);
		}
		static ::System::Func_1<::System::Int32>** StaticGet___9__105_2()
		{
			return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x2E5B8);
		}
		static ::System::Comparison_1<::Class_1_49EE7E97681F5D41*>** StaticGet___9__301_0()
		{
			return (::System::Comparison_1<::Class_1_49EE7E97681F5D41*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x2E5C0);
		}
		static ::MoleMole::UIInLevelMainPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelMainPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x2E5C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BindTweenSlot_b__105_2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__BINDTWEENSLOT_B__105_2_OFFSET))(this);
		}

		::System::Int32 __SortMissionTips_b__297_0(::Class_1_49EE7E97681F5D41* a, ::Class_1_49EE7E97681F5D41* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_49EE7E97681F5D41*, ::Class_1_49EE7E97681F5D41*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C___SORTMISSIONTIPS_B__297_0_OFFSET))(this, a, b);
		}

		::System::Int32 _PlayMissionTipFadeIn_b__301_0(::Class_1_49EE7E97681F5D41* a, ::Class_1_49EE7E97681F5D41* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_49EE7E97681F5D41*, ::Class_1_49EE7E97681F5D41*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__PLAYMISSIONTIPFADEIN_B__301_0_OFFSET))(this, a, b);
		}
	};
}

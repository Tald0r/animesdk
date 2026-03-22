#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_49EE7E97681F5D41;
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__BINDTWEENSLOT_B__105_2_OFFSET UNITYSDK_OFFSET(0xA3AFDB0)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3AFD70)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3AFDA0)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__PLAYMISSIONTIPFADEIN_B__295_0_OFFSET UNITYSDK_OFFSET(0xA3AFE70)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C___SORTMISSIONTIPS_B__291_0_OFFSET UNITYSDK_OFFSET(0xA3AFDC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMainPageController___c_TypeDefinitionIndex = 39632;

	class UIInLevelMainPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelMainPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelMainPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x2D1E0);
		}
		static ::System::Comparison_1<::Class_1_49EE7E97681F5D41*>** StaticGet___9__295_0()
		{
			return (::System::Comparison_1<::Class_1_49EE7E97681F5D41*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x2D1E8);
		}
		static ::System::Func_1<::System::Int32>** StaticGet___9__105_2()
		{
			return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x2D1F0);
		}
		static ::System::Comparison_1<::Class_1_49EE7E97681F5D41*>** StaticGet___9__291_0()
		{
			return (::System::Comparison_1<::Class_1_49EE7E97681F5D41*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x2D1F8);
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

		::System::Int32 __SortMissionTips_b__291_0(::Class_1_49EE7E97681F5D41* a, ::Class_1_49EE7E97681F5D41* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_49EE7E97681F5D41*, ::Class_1_49EE7E97681F5D41*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C___SORTMISSIONTIPS_B__291_0_OFFSET))(this, a, b);
		}

		::System::Int32 _PlayMissionTipFadeIn_b__295_0(::Class_1_49EE7E97681F5D41* a, ::Class_1_49EE7E97681F5D41* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_49EE7E97681F5D41*, ::Class_1_49EE7E97681F5D41*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER___C__PLAYMISSIONTIPFADEIN_B__295_0_OFFSET))(this, a, b);
		}
	};
}

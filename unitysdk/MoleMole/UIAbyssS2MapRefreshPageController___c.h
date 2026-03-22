#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_18814BC9826CDED5_1;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD7E090)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBD7E0D0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__SORTPROPS_B__26_0_OFFSET UNITYSDK_OFFSET(0xBD7E0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPageController___c_TypeDefinitionIndex = 65197;

	class UIAbyssS2MapRefreshPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssS2MapRefreshPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2MapRefreshPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2MapRefreshPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A780);
		}
		static ::System::Comparison_1<::Class_1_18814BC9826CDED5_1*>** StaticGet___9__26_0()
		{
			return (::System::Comparison_1<::Class_1_18814BC9826CDED5_1*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2MapRefreshPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortProps_b__26_0(::Class_1_18814BC9826CDED5_1* a, ::Class_1_18814BC9826CDED5_1* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_18814BC9826CDED5_1*, ::Class_1_18814BC9826CDED5_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__SORTPROPS_B__26_0_OFFSET))(this, a, b);
		}
	};
}

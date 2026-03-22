#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1CD9E0)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD1CDA20)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___C__REFRESHSHOWTABLE_B__31_0_OFFSET UNITYSDK_OFFSET(0xD1CDA30)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityChainV2WidgetController___c_TypeDefinitionIndex = 63679;

	class UIActivityChainV2WidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityChainV2WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityChainV2WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityChainV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44040);
		}
		static ::System::Comparison_1<::Class_1_D375C91CCE5D3999*>** StaticGet___9__31_0()
		{
			return (::System::Comparison_1<::Class_1_D375C91CCE5D3999*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityChainV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44048);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshShowTable_b__31_0(::Class_1_D375C91CCE5D3999* x, ::Class_1_D375C91CCE5D3999* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___C__REFRESHSHOWTABLE_B__31_0_OFFSET))(this, x, y);
		}
	};
}

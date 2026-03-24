#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AE02BC8285203464_22;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB72AA00)
#define MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB72AA40)
#define MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0xB72AA50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCheckinPopWindowController___c_TypeDefinitionIndex = 68204;

	class UIActivityCheckinPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityCheckinPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityCheckinPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x41BB0);
		}
		static ::System::Func_2<::Class_3_AE02BC8285203464_22*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::Class_3_AE02BC8285203464_22*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x41BB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__8_0(::Class_3_AE02BC8285203464_22* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_AE02BC8285203464_22*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET))(this, x);
		}
	};
}

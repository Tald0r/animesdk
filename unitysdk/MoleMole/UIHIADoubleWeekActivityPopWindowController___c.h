#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_3_1699D6295DC3F818_3;
class Class_3_9F8B7B204F0D8E1D;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCAE8440)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCAE8480)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0xCAE8490)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__TRYTAKEALLBINGOREWARDS_B__23_1_OFFSET UNITYSDK_OFFSET(0xCAE84C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPopWindowController___c_TypeDefinitionIndex = 46339;

	class UIHIADoubleWeekActivityPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_3_9F8B7B204F0D8E1D*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::Class_3_9F8B7B204F0D8E1D*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2FEF0);
		}
		static ::MoleMole::UIHIADoubleWeekActivityPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHIADoubleWeekActivityPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2FEF8);
		}
		static ::System::Func_2<::Class_3_1699D6295DC3F818_3*, ::Class_1_0D6706375CDAAE8C*>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::Class_3_1699D6295DC3F818_3*, ::Class_1_0D6706375CDAAE8C*>**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2FF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__11_0(::Class_3_9F8B7B204F0D8E1D* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_9F8B7B204F0D8E1D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__11_0_OFFSET))(this, reward);
		}

		::Class_1_0D6706375CDAAE8C* _TryTakeAllBingoRewards_b__23_1(::Class_3_1699D6295DC3F818_3* reward)
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID, ::Class_3_1699D6295DC3F818_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__TRYTAKEALLBINGOREWARDS_B__23_1_OFFSET))(this, reward);
		}
	};
}

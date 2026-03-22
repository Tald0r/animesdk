#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_3_1699D6295DC3F818_3;
class Class_3_9F8B7B204F0D8E1D;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC05A6C0)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC05A700)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__REFRESHVIEW_B__12_0_OFFSET UNITYSDK_OFFSET(0xC05A710)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__TRYTAKEALLBINGOREWARDS_B__24_1_OFFSET UNITYSDK_OFFSET(0xC05A740)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPageController___c_TypeDefinitionIndex = 67692;

	class UIHIADoubleWeekActivityPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_3_1699D6295DC3F818_3*, ::Class_1_0D6706375CDAAE8C*>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::Class_3_1699D6295DC3F818_3*, ::Class_1_0D6706375CDAAE8C*>**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x32630);
		}
		static ::System::Func_2<::Class_3_9F8B7B204F0D8E1D*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::Class_3_9F8B7B204F0D8E1D*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x32638);
		}
		static ::MoleMole::UIHIADoubleWeekActivityPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIHIADoubleWeekActivityPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x32640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__12_0(::Class_3_9F8B7B204F0D8E1D* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_9F8B7B204F0D8E1D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__REFRESHVIEW_B__12_0_OFFSET))(this, reward);
		}

		::Class_1_0D6706375CDAAE8C* _TryTakeAllBingoRewards_b__24_1(::Class_3_1699D6295DC3F818_3* reward)
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID, ::Class_3_1699D6295DC3F818_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__TRYTAKEALLBINGOREWARDS_B__24_1_OFFSET))(this, reward);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7E6E8DD3EAC12A67_19;
class Class_3_AE02BC8285203464_27;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB95AA10)
#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__DISPLAYCLASS57_0__ONOPENSTYLISHRECORD_B__0_OFFSET UNITYSDK_OFFSET(0xB95AA20)
#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__DISPLAYCLASS57_0__ONOPENSTYLISHRECORD_B__1_OFFSET UNITYSDK_OFFSET(0xB95B310)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLPageController___c__DisplayClass57_0_TypeDefinitionIndex = 61181;

	class UIActivityBattleYCLPageController___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::System::Func_2<::Class_3_AE02BC8285203464_27*, ::System::Boolean>* __9__1; // 0x10
		::System::Int32 questID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOpenStylishRecord_b__0(::Class_3_7E6E8DD3EAC12A67_19* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_7E6E8DD3EAC12A67_19*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__DISPLAYCLASS57_0__ONOPENSTYLISHRECORD_B__0_OFFSET))(this, rsp);
		}

		::System::Boolean _OnOpenStylishRecord_b__1(::Class_3_AE02BC8285203464_27* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_AE02BC8285203464_27*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__DISPLAYCLASS57_0__ONOPENSTYLISHRECORD_B__1_OFFSET))(this, match);
		}
	};
}

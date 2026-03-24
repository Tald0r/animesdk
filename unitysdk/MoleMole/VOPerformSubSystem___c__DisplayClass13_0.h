#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

class Class_1_9BB4AD5956D1660B;
namespace MoleMole { class VOPerformSubSystem; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x88A0250)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS13_0___CLOSEBLACKCURTAIN_B__0_OFFSET UNITYSDK_OFFSET(0x88A0260)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS13_0___CLOSEBLACKCURTAIN_B__1_OFFSET UNITYSDK_OFFSET(0x88A0390)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c__DisplayClass13_0_TypeDefinitionIndex = 55332;

	class VOPerformSubSystem___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF>* callback; // 0x10
		::MoleMole::VOPerformSubSystem* __4__this; // 0x18
		::System::String* pendingCurtainName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void __CloseBlackCurtain_b__0(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS13_0___CLOSEBLACKCURTAIN_B__0_OFFSET))(this, reason);
		}

		::System::Void __CloseBlackCurtain_b__1(::Class_1_9BB4AD5956D1660B* t)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9BB4AD5956D1660B*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS13_0___CLOSEBLACKCURTAIN_B__1_OFFSET))(this, t);
		}
	};
}

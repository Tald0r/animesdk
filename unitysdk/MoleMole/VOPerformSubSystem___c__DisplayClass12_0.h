#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

class Class_1_9BB4AD5956D1660B;
namespace MoleMole { class VOPerformSubSystem; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x644E110)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS12_0___OPENBLACKCURTAIN_B__1_OFFSET UNITYSDK_OFFSET(0x644E120)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c__DisplayClass12_0_TypeDefinitionIndex = 62432;

	class VOPerformSubSystem___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::VOPerformSubSystem* __4__this; // 0x10
		::System::Action_1<::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void __OpenBlackCurtain_b__1(::Class_1_9BB4AD5956D1660B* t)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9BB4AD5956D1660B*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS12_0___OPENBLACKCURTAIN_B__1_OFFSET))(this, t);
		}
	};
}

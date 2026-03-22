#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7140F4786C00178;

#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D5EDE0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS44_0__TRYSELECTVM_B__0_OFFSET UNITYSDK_OFFSET(0x9D5EDF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCasePageController___c__DisplayClass44_0_TypeDefinitionIndex = 64836;

	class UIDisplayCasePageController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Int32 itemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TrySelectVM_b__0(::Class_1_E7140F4786C00178* i)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E7140F4786C00178*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS44_0__TRYSELECTVM_B__0_OFFSET))(this, i);
		}
	};
}

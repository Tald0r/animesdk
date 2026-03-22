#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7140F4786C00178;
class Class_1_FAB330A19FB8EDA0;

#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D5EE40)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS45_0__TRYSELECTVM_B__0_OFFSET UNITYSDK_OFFSET(0x9D5EE50)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCasePageController___c__DisplayClass45_0_TypeDefinitionIndex = 64838;

	class UIDisplayCasePageController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::Class_1_FAB330A19FB8EDA0* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TrySelectVM_b__0(::Class_1_E7140F4786C00178* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E7140F4786C00178*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS45_0__TRYSELECTVM_B__0_OFFSET))(this, a);
		}
	};
}

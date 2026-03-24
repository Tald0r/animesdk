#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA;
class Class_2_208CC9941471731A_874;

#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA1411E0)
#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS100_0__NEEDMONSTERINFOBTN_B__0_OFFSET UNITYSDK_OFFSET(0xA1411F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaPageController___c__DisplayClass100_0_TypeDefinitionIndex = 39323;

	class UIYorozuyaPageController___c__DisplayClass100_0 : public ::System::Object
	{
	public:
		::Class_2_0A55B5A82A61DAFA* cfg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _NeedMonsterInfoBtn_b__0(::Class_2_208CC9941471731A_874* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_874*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS100_0__NEEDMONSTERINFOBTN_B__0_OFFSET))(this, x);
		}
	};
}

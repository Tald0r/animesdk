#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_650;

#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFCA7E0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS25_0__REFRESHORIGINALBADGETYPELIST_B__0_OFFSET UNITYSDK_OFFSET(0xBFCA7F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemCollectPageController___c__DisplayClass25_0_TypeDefinitionIndex = 74798;

	class UIHollowCardItemCollectPageController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Int32 typeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshOriginalBadgeTypeList_b__0(::Class_2_208CC9941471731A_650* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_650*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS25_0__REFRESHORIGINALBADGETYPELIST_B__0_OFFSET))(this, x);
		}
	};
}

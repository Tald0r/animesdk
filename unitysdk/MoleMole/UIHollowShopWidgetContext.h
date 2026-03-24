#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_2EF69FD7F867E7F6;
class Class_2_A8B97606E71328D6;
class Class_3_82925E4A102A439B;
class Class_5_49230FCDC9826905;

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4AEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetContext_TypeDefinitionIndex = 57525;

	class UIHollowShopWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_A8B97606E71328D6* graph; // 0x28
		::Class_3_82925E4A102A439B* shopInfo; // 0x30
		::Class_5_49230FCDC9826905* shopNode; // 0x38
		::Class_1_2EF69FD7F867E7F6* scriptContext; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

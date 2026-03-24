#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_B640B8B6C20C4AB0_Class_1_6F12E11FBB9A2E65;
namespace MoleMole { class UISummerFishingCollectItemWidgetController; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UISUMMERFISHINGCOLLECTITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAAF7C60)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishingCollectItemContext_TypeDefinitionIndex = 71477;

	class UISummerFishingCollectItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_B640B8B6C20C4AB0_Class_1_6F12E11FBB9A2E65* data; // 0x28
		::System::Action_2<::Class_2_B640B8B6C20C4AB0_Class_1_6F12E11FBB9A2E65*, ::MoleMole::UISummerFishingCollectItemWidgetController*>* clickAction; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGCOLLECTITEMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

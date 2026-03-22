#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MatAnimation;
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x75197B0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__DISPLAYCLASS29_0__ONCLICKMATITEM_B__0_OFFSET UNITYSDK_OFFSET(0x75197C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyLevelupController___c__DisplayClass29_0_TypeDefinitionIndex = 70079;

	class UISuibianTempleBuddyLevelupController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::MatAnimation* matAnim; // 0x10
		::UnityEngine::Animation* anim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickMatItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__DISPLAYCLASS29_0__ONCLICKMATITEM_B__0_OFFSET))(this);
		}
	};
}

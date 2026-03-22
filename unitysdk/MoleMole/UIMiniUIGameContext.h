#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2271A294FCCB3EAE.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MOLEMOLE_UIMINIUIGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC13E330)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniUIGameContext_TypeDefinitionIndex = 43427;

	class UIMiniUIGameContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_3<::System::Boolean, ::System::Int32, ::System::Action*>* OnGameEnd; // 0x28
		::Il2CppArray<::System::String*>* LightKey; // 0x30
		::System::Action* OnUIClose; // 0x38
		::Enum_3_2271A294FCCB3EAE GameType; // 0x40
		::UnityEngine::Quaternion LightRot; // 0x44
		::System::Boolean needNewbie; // 0x54
		::System::Boolean IsGroup; // 0x55
		::System::Int32 LevelID; // 0x58
		::UnityEngine::Vector3 LightPos; // 0x5C
		::System::Int32 GroupID; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMECONTEXT__CTOR_OFFSET))(this);
		}
	};
}

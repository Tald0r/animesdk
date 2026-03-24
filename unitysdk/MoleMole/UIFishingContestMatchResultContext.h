#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_451601B8BB62C38C_4;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFISHINGCONTESTMATCHRESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD120C50)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestMatchResultContext_TypeDefinitionIndex = 56845;

	class UIFishingContestMatchResultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C_4*>* PlayerInfos; // 0x28
		::System::Action_1<::System::Boolean>* OnClose; // 0x30
		::System::Boolean IsLocalPlayerWin; // 0x38
		::System::Int32 LevelId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTMATCHRESULTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace Foundation::Unreal { class GameplayTagList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION_COLLECT_OFFSET UNITYSDK_OFFSET(0x1AE782B0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE78310)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagCollection_TypeDefinitionIndex = 8769;

	class GameplayTagCollection : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::Unreal::GameplayTagList*>* TagList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* Collect()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION_COLLECT_OFFSET))(this);
		}
	};
}

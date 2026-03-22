#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace Newtonsoft::Json { class JsonSerializerSettings; }

#define STATETREESERIALIZE_STATETREESERIALIZESETTINGS_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1A4B7210)
#define STATETREESERIALIZE_STATETREESERIALIZESETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B7FC0)

namespace StateTreeSerialize
{
	inline static constexpr unsigned int StateTreeSerializeSettings_TypeDefinitionIndex = 35344;

	class StateTreeSerializeSettings : public ::System::Object
	{
	public:
		static ::Unity::Collections::Allocator* StaticGet_DeserializeAllocator()
		{
			return (::Unity::Collections::Allocator*)Il2CppClass::FromTypeDefinitionIndex(StateTreeSerializeSettings_TypeDefinitionIndex)->GetStaticField(0x8560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREESERIALIZESETTINGS__CCTOR_OFFSET))();
		}

		static ::Newtonsoft::Json::JsonSerializerSettings* get_Settings()
		{
			return ((::Newtonsoft::Json::JsonSerializerSettings*(*)())((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREESERIALIZESETTINGS_GET_SETTINGS_OFFSET))();
		}
	};
}

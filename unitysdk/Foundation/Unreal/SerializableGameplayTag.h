#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAG_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A71EC10)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAG_GET_VALUEREF_OFFSET UNITYSDK_OFFSET(0x1A71E9A0)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAG_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A71EE80)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAG_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A71EE70)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A71EE90)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int SerializableGameplayTag_TypeDefinitionIndex = 9004;

	class SerializableGameplayTag : public ::System::Object
	{
	public:
		::Foundation::Unreal::FGameplayTag _value; // 0x10
		::System::Boolean _isDeserialized; // 0x18
		::System::String* _serializedString; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAG__CTOR_OFFSET))(this);
		}

		::Foundation::Unreal::FGameplayTag& get_ValueRef()
		{
			return ((::Foundation::Unreal::FGameplayTag&(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAG_GET_VALUEREF_OFFSET))(this);
		}

		::System::Void Deserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAG_DESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAG_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAG_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}

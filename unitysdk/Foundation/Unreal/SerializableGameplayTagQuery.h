#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace System { class String; }

#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B45A4D0)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY_GET_VALUEREF_OFFSET UNITYSDK_OFFSET(0x1B45A320)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B45A680)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B45A7C0)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B45A7B0)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B45A7D0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int SerializableGameplayTagQuery_TypeDefinitionIndex = 8898;

	class SerializableGameplayTagQuery : public ::System::Object
	{
	public:
		::Foundation::Unreal::FGameplayTagQuery* _value; // 0x10
		::System::Boolean _isDeserialized; // 0x18
		::Il2CppArray<::System::Byte>* _token; // 0x20
		::Il2CppArray<::System::String*>* _tags; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY__CTOR_OFFSET))(this);
		}

		::Foundation::Unreal::FGameplayTagQuery*& get_ValueRef()
		{
			return ((::Foundation::Unreal::FGameplayTagQuery*&(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY_GET_VALUEREF_OFFSET))(this);
		}

		::System::Void Deserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY_DESERIALIZE_OFFSET))(this);
		}

		::System::Void Serialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY_SERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}

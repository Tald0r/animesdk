#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGCONTAINER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AA8D4B0)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGCONTAINER_GET_VALUEREF_OFFSET UNITYSDK_OFFSET(0x1AA8D100)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGCONTAINER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AA8D870)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGCONTAINER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AA8D860)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA8D880)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int SerializableGameplayTagContainer_TypeDefinitionIndex = 8845;

	class SerializableGameplayTagContainer : public ::System::Object
	{
	public:
		::Foundation::Unreal::FGameplayTagContainer _value; // 0x10
		::System::Boolean _isDeserialized; // 0x80
		::Il2CppArray<::System::String*>* _serializedStrings; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGCONTAINER__CTOR_OFFSET))(this);
		}

		::Foundation::Unreal::FGameplayTagContainer& get_ValueRef()
		{
			return ((::Foundation::Unreal::FGameplayTagContainer&(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGCONTAINER_GET_VALUEREF_OFFSET))(this);
		}

		::System::Void Deserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGCONTAINER_DESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGCONTAINER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGCONTAINER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}

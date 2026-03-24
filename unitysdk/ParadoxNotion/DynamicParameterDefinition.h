#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_GET_ID_OFFSET UNITYSDK_OFFSET(0x19FECB50)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19FFD540)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x19FFD560)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_SET_ID_OFFSET UNITYSDK_OFFSET(0x19FFD530)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x19FFD550)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x19FFD570)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19FFD4C0)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19FFD490)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FFD590)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFD580)

namespace ParadoxNotion
{
	inline static constexpr unsigned int DynamicParameterDefinition_TypeDefinitionIndex = 27278;

	class DynamicParameterDefinition : public ::System::Object
	{
	public:
		::System::String* _ID; // 0x10
		::System::String* _name; // 0x18
		::System::String* _type; // 0x20
		::System::Type* _type_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION__CTOR_1_OFFSET))(this, name, type);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::String* get_ID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_SET_NAME_OFFSET))(this, value);
		}

		::System::Type* get_type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_SET_TYPE_OFFSET))(this, value);
		}
	};
}

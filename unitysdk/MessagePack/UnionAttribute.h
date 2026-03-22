#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define MESSAGEPACK_UNIONATTRIBUTE_GET_KEY_OFFSET UNITYSDK_OFFSET(0x183EF4E0)
#define MESSAGEPACK_UNIONATTRIBUTE_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x183EF500)
#define MESSAGEPACK_UNIONATTRIBUTE_SET_KEY_OFFSET UNITYSDK_OFFSET(0x183EF4F0)
#define MESSAGEPACK_UNIONATTRIBUTE_SET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x183EF510)
#define MESSAGEPACK_UNIONATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x183EF530)
#define MESSAGEPACK_UNIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x183EF520)

namespace MessagePack
{
	inline static constexpr unsigned int UnionAttribute_TypeDefinitionIndex = 26695;

	class UnionAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _SubType_k__BackingField; // 0x10
		::System::Int32 _Key_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 key, ::System::Type* subType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNIONATTRIBUTE__CTOR_OFFSET))(this, key, subType);
		}

		::System::Void _ctor_1(::System::Int32 key, ::System::String* subType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNIONATTRIBUTE__CTOR_1_OFFSET))(this, key, subType);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNIONATTRIBUTE_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNIONATTRIBUTE_SET_KEY_OFFSET))(this, value);
		}

		::System::Type* get_SubType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNIONATTRIBUTE_GET_SUBTYPE_OFFSET))(this);
		}

		::System::Void set_SubType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNIONATTRIBUTE_SET_SUBTYPE_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9043B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x904380)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x904420)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_GET_ENDINDEX_OFFSET UNITYSDK_OFFSET(0x2D38E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_GET_ISHARDEDGE_OFFSET UNITYSDK_OFFSET(0x31FD90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_GET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19F91650)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19F91680)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x904440)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x36D7F0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int DuplicateSamplePoint_TypeDefinitionIndex = 35798;

	struct alignas(4) DuplicateSamplePoint
	{
		::System::Int32 _StartIndex_k__BackingField; // 0x10
		::System::Int32 _EndIndex_k__BackingField; // 0x14
		::System::Boolean _IsHardEdge_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 startIndex, ::System::Int32 endIndex, ::System::Boolean isHardEdge)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT__CTOR_OFFSET))(this, startIndex, endIndex, isHardEdge);
		}

		::System::Int32 get_StartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_GET_STARTINDEX_OFFSET))(this);
		}

		::System::Int32 get_EndIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_GET_ENDINDEX_OFFSET))(this);
		}

		::System::Boolean get_IsHardEdge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_GET_ISHARDEDGE_OFFSET))(this);
		}

		::System::Boolean Equals(::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint left, ::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint, ::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint left, ::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint, ::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_DUPLICATESAMPLEPOINT_TOSTRING_OFFSET))(this);
		}
	};
}

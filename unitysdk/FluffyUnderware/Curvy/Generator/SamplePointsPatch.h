#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9703B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x316060)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8E1CD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_GET_END_OFFSET UNITYSDK_OFFSET(0x931E60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_GET_TRIANGLECOUNT_OFFSET UNITYSDK_OFFSET(0x970390)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1ADE7460)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1ADE7470)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_SET_END_OFFSET UNITYSDK_OFFSET(0x970380)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9703A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x311E30)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int SamplePointsPatch_TypeDefinitionIndex = 36832;

	struct alignas(4) SamplePointsPatch
	{
		::System::Int32 Start; // 0x10
		::System::Int32 Count; // 0x14

		::System::Void _ctor(::System::Int32 start)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH__CTOR_OFFSET))(this, start);
		}

		::System::Int32 get_End()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_SET_END_OFFSET))(this, value);
		}

		::System::Int32 get_TriangleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_GET_TRIANGLECOUNT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::FluffyUnderware::Curvy::Generator::SamplePointsPatch other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::SamplePointsPatch))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::Curvy::Generator::SamplePointsPatch left, ::FluffyUnderware::Curvy::Generator::SamplePointsPatch right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::SamplePointsPatch, ::FluffyUnderware::Curvy::Generator::SamplePointsPatch))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::Curvy::Generator::SamplePointsPatch left, ::FluffyUnderware::Curvy::Generator::SamplePointsPatch right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::SamplePointsPatch, ::FluffyUnderware::Curvy::Generator::SamplePointsPatch))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSPATCH_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}

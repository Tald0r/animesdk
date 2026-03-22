#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x941E90)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0x941CE0)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x941EA0)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GET_ENDBIAS_OFFSET UNITYSDK_OFFSET(0x35DA00)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GET_ENDCONTINUITY_OFFSET UNITYSDK_OFFSET(0x2D8630)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GET_ENDTENSION_OFFSET UNITYSDK_OFFSET(0x2C4B10)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GET_STARTBIAS_OFFSET UNITYSDK_OFFSET(0x2D8620)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GET_STARTCONTINUITY_OFFSET UNITYSDK_OFFSET(0x2C4B30)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GET_STARTTENSION_OFFSET UNITYSDK_OFFSET(0x2C4AF0)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A7F1030)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A7F11E0)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_SET_ENDBIAS_OFFSET UNITYSDK_OFFSET(0x35DA40)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_SET_ENDCONTINUITY_OFFSET UNITYSDK_OFFSET(0x33FDA0)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_SET_ENDTENSION_OFFSET UNITYSDK_OFFSET(0x2C4B20)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_SET_STARTBIAS_OFFSET UNITYSDK_OFFSET(0x3084C0)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_SET_STARTCONTINUITY_OFFSET UNITYSDK_OFFSET(0x2C4B40)
#define FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_SET_STARTTENSION_OFFSET UNITYSDK_OFFSET(0x2C4B00)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int TcbParameters_TypeDefinitionIndex = 35675;

	struct alignas(4) TcbParameters
	{
		::System::Single _StartTension_k__BackingField; // 0x10
		::System::Single _EndTension_k__BackingField; // 0x14
		::System::Single _StartContinuity_k__BackingField; // 0x18
		::System::Single _EndContinuity_k__BackingField; // 0x1C
		::System::Single _StartBias_k__BackingField; // 0x20
		::System::Single _EndBias_k__BackingField; // 0x24

		::System::Single get_StartTension()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GET_STARTTENSION_OFFSET))(this);
		}

		::System::Void set_StartTension(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_SET_STARTTENSION_OFFSET))(this, value);
		}

		::System::Single get_EndTension()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GET_ENDTENSION_OFFSET))(this);
		}

		::System::Void set_EndTension(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_SET_ENDTENSION_OFFSET))(this, value);
		}

		::System::Single get_StartContinuity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GET_STARTCONTINUITY_OFFSET))(this);
		}

		::System::Void set_StartContinuity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_SET_STARTCONTINUITY_OFFSET))(this, value);
		}

		::System::Single get_EndContinuity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GET_ENDCONTINUITY_OFFSET))(this);
		}

		::System::Void set_EndContinuity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_SET_ENDCONTINUITY_OFFSET))(this, value);
		}

		::System::Single get_StartBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GET_STARTBIAS_OFFSET))(this);
		}

		::System::Void set_StartBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_SET_STARTBIAS_OFFSET))(this, value);
		}

		::System::Single get_EndBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GET_ENDBIAS_OFFSET))(this);
		}

		::System::Void set_EndBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_SET_ENDBIAS_OFFSET))(this, value);
		}

		::System::Boolean Equals(::FluffyUnderware::Curvy::TcbParameters other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::TcbParameters))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::Curvy::TcbParameters left, ::FluffyUnderware::Curvy::TcbParameters right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::TcbParameters, ::FluffyUnderware::Curvy::TcbParameters))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::Curvy::TcbParameters left, ::FluffyUnderware::Curvy::TcbParameters right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::TcbParameters, ::FluffyUnderware::Curvy::TcbParameters))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TCBPARAMETERS_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}

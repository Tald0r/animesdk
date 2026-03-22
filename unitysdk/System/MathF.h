#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_MATHF_ACOS_OFFSET UNITYSDK_OFFSET(0x1A2C2560)
#define SYSTEM_MATHF_COS_OFFSET UNITYSDK_OFFSET(0x1A2C2580)
#define SYSTEM_MATHF_SIN_OFFSET UNITYSDK_OFFSET(0x1A2C25A0)
#define SYSTEM_MATHF_SQRT_OFFSET UNITYSDK_OFFSET(0x1A2C25C0)

namespace System
{
	inline static constexpr unsigned int MathF_TypeDefinitionIndex = 6471;

	class MathF : public ::System::Object
	{
	public:
		static ::System::Single Acos(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATHF_ACOS_OFFSET))(x);
		}

		static ::System::Single Cos(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATHF_COS_OFFSET))(x);
		}

		static ::System::Single Sin(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATHF_SIN_OFFSET))(x);
		}

		static ::System::Single Sqrt(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATHF_SQRT_OFFSET))(x);
		}
	};
}

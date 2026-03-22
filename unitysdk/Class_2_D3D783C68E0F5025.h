#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDDDDB46A99CFF4C.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D3D783C68E0F5025_METHOD_2_9D455FE4693966A8_1_OFFSET UNITYSDK_OFFSET(0x758CB70)
#define CLASS_2_D3D783C68E0F5025_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x758CA40)
#define CLASS_2_D3D783C68E0F5025__CTOR_OFFSET UNITYSDK_OFFSET(0x758CAC0)

inline static constexpr unsigned int Class_2_D3D783C68E0F5025_TypeDefinitionIndex = 53305;

class Class_2_D3D783C68E0F5025 : public ::Class_1_BDDDDB46A99CFF4C
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3D783C68E0F5025__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3D783C68E0F5025_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3D783C68E0F5025_METHOD_2_9D455FE4693966A8_1_OFFSET))(this);
	}
};

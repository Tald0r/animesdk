#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDDDDB46A99CFF4C.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_BBA6262D07B91BBD_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x79C6660)
#define CLASS_2_BBA6262D07B91BBD_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x79C6A00)
#define CLASS_2_BBA6262D07B91BBD__CTOR_OFFSET UNITYSDK_OFFSET(0x79C69C0)

inline static constexpr unsigned int Class_2_BBA6262D07B91BBD_TypeDefinitionIndex = 36811;

class Class_2_BBA6262D07B91BBD : public ::Class_1_BDDDDB46A99CFF4C
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_2; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_5; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_4; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_3; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBA6262D07B91BBD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBA6262D07B91BBD_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBA6262D07B91BBD_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}
};

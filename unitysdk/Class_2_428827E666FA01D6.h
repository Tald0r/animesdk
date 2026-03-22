#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_103;
template <typename T> class Class_0_16E4307DCC41950C_11;

#define CLASS_2_428827E666FA01D6_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0xD7713E0)
#define CLASS_2_428827E666FA01D6_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD771290)
#define CLASS_2_428827E666FA01D6__CTOR_OFFSET UNITYSDK_OFFSET(0xD771340)

inline static constexpr unsigned int Class_2_428827E666FA01D6_TypeDefinitionIndex = 37140;

class Class_2_428827E666FA01D6 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC41950C_11<::System::Int32>* Field_2_0; // 0x60
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_1; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_428827E666FA01D6__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_428827E666FA01D6_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_428827E666FA01D6_METHOD_2_218124418542E081_OFFSET))(this);
	}
};

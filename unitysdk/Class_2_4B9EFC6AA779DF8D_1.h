#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

template <typename T> class Class_0_16E4307DCC419505_103;

#define CLASS_2_4B9EFC6AA779DF8D_1_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7480C0)
#define CLASS_2_4B9EFC6AA779DF8D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD7481D0)

inline static constexpr unsigned int Class_2_4B9EFC6AA779DF8D_1_TypeDefinitionIndex = 79210;

class Class_2_4B9EFC6AA779DF8D_1 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_3; // 0x60
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_0; // 0x68
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_1; // 0x70
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_2; // 0x78
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_1__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B9EFC6AA779DF8D_1_ONCREATEPROPERTY_OFFSET))(this);
	}
};

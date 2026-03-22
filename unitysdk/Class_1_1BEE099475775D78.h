#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_56CBE8115A123EF5.h"
#include "unitysdk/System/Object.h"

class Class_2_89D7FAFCE6B7DF8D;
namespace System { class String; }

#define CLASS_1_1BEE099475775D78__CTOR_OFFSET UNITYSDK_OFFSET(0x6FCAAD0)

inline static constexpr unsigned int Class_1_1BEE099475775D78_TypeDefinitionIndex = 74742;

class Class_1_1BEE099475775D78 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Class_2_89D7FAFCE6B7DF8D* Field_1_0; // 0x18
	::Enum_3_56CBE8115A123EF5 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BEE099475775D78__CTOR_OFFSET))(this);
	}
};

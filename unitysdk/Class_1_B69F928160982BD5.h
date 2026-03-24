#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

class Class_1_F5DB2C23D9A5E36D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B69F928160982BD5__CTOR_OFFSET UNITYSDK_OFFSET(0x8E12020)

inline static constexpr unsigned int Class_1_B69F928160982BD5_TypeDefinitionIndex = 39102;

class Class_1_B69F928160982BD5 : public ::System::Object
{
public:
	::Class_1_F5DB2C23D9A5E36D* Field_1_8; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x20
	::Class_1_F5DB2C23D9A5E36D* Field_1_9; // 0x28
	::System::Int32 Field_1_6; // 0x30
	::System::Int32 Field_1_4; // 0x34
	::System::Int32 Field_1_3; // 0x38
	::MoleMole::Level::RatingType Field_1_7; // 0x3C
	::System::Int32 Field_1_0; // 0x40
	::System::Int64 Field_1_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B69F928160982BD5__CTOR_OFFSET))(this);
	}
};

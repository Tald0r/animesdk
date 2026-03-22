#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_4_1213C9D20050C979;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_1213C9D20050C979_CLASS_1_840255FE48460818_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA2C83F0)

inline static constexpr unsigned int Class_4_1213C9D20050C979_Class_1_840255FE48460818_1_TypeDefinitionIndex = 77363;

class Class_4_1213C9D20050C979_Class_1_840255FE48460818_1 : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_3; // 0x10
	::Class_4_1213C9D20050C979* Field_1_0; // 0x40
	::Struct_2_FE9BD044832BC9C3 Field_1_4; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x78
	::System::UInt32 Field_1_1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1213C9D20050C979_CLASS_1_840255FE48460818_1__CTOR_OFFSET))(this);
	}
};

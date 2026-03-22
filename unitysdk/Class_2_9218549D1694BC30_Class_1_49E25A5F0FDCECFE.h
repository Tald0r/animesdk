#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9218549D1694BC30_CLASS_1_49E25A5F0FDCECFE_METHOD_1_D81B3CC3C19F3719_OFFSET UNITYSDK_OFFSET(0xBC1E6B0)
#define CLASS_2_9218549D1694BC30_CLASS_1_49E25A5F0FDCECFE__CTOR_OFFSET UNITYSDK_OFFSET(0xBC1E6A0)

inline static constexpr unsigned int Class_2_9218549D1694BC30_Class_1_49E25A5F0FDCECFE_TypeDefinitionIndex = 40414;

class Class_2_9218549D1694BC30_Class_1_49E25A5F0FDCECFE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30_CLASS_1_49E25A5F0FDCECFE__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D81B3CC3C19F3719(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30_CLASS_1_49E25A5F0FDCECFE_METHOD_1_D81B3CC3C19F3719_OFFSET))(this, a1);
	}
};

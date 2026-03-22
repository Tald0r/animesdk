#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_16DD8F52D1A9C74B__CTOR_OFFSET UNITYSDK_OFFSET(0x69F0DD0)

inline static constexpr unsigned int Class_2_16DD8F52D1A9C74B_TypeDefinitionIndex = 43714;

class Class_2_16DD8F52D1A9C74B : public ::System::EventArgs
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16DD8F52D1A9C74B__CTOR_OFFSET))(this);
	}
};

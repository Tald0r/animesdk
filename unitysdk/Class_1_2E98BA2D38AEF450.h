#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DB31062B5932CACE.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2E98BA2D38AEF450__CTOR_OFFSET UNITYSDK_OFFSET(0x15ABA7C0)

inline static constexpr unsigned int Class_1_2E98BA2D38AEF450_TypeDefinitionIndex = 49136;

class Class_1_2E98BA2D38AEF450 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_DB31062B5932CACE>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E98BA2D38AEF450__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D89CCC627A66D0AD;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_BE16AD5EE326FCBB_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x79CE690)
#define CLASS_1_BE16AD5EE326FCBB__CTOR_OFFSET UNITYSDK_OFFSET(0x79CE660)

inline static constexpr unsigned int Class_1_BE16AD5EE326FCBB_TypeDefinitionIndex = 49161;

class Class_1_BE16AD5EE326FCBB : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_2_D89CCC627A66D0AD*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE16AD5EE326FCBB__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE16AD5EE326FCBB_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};

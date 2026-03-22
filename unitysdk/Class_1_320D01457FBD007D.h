#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_320D01457FBD007D_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9045B70)
#define CLASS_1_320D01457FBD007D_METHOD_1_406174A47F38EDFD_OFFSET UNITYSDK_OFFSET(0x9045BF0)
#define CLASS_1_320D01457FBD007D__CTOR_OFFSET UNITYSDK_OFFSET(0x9045B60)

inline static constexpr unsigned int Class_1_320D01457FBD007D_TypeDefinitionIndex = 77938;

class Class_1_320D01457FBD007D : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_320D01457FBD007D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_320D01457FBD007D_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_406174A47F38EDFD(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_320D01457FBD007D_METHOD_1_406174A47F38EDFD_OFFSET))(this, a1);
	}
};

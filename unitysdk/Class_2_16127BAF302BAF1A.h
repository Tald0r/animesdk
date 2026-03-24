#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9F0098D327651E7.h"
#include "unitysdk/Enum_3_96F6662CA3713095_11.h"

class Class_3_DE5C2CE2978AA8BF_5;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_16127BAF302BAF1A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B0B1830)
#define CLASS_2_16127BAF302BAF1A__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B0B1920)
#define CLASS_2_16127BAF302BAF1A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B1640)

inline static constexpr unsigned int Class_2_16127BAF302BAF1A_TypeDefinitionIndex = 81594;

class Class_2_16127BAF302BAF1A : public ::Class_1_D9F0098D327651E7
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_3; // 0x68
	::Enum_3_96F6662CA3713095_11 Field_2_0; // 0x70
	::System::Int32 Field_2_1; // 0x74
	::System::UInt64 Field_2_2; // 0x78

	::System::Void _ctor(::Class_3_DE5C2CE2978AA8BF_5* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DE5C2CE2978AA8BF_5*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_16127BAF302BAF1A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_16127BAF302BAF1A__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16127BAF302BAF1A__CTOR_2_OFFSET))(this);
	}
};

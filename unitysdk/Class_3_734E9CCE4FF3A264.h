#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_41.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/Struct_2_FA6F1CFCFAC0D4A9.h"

class Class_3_96CE54D1B5F2FEE8;
class Class_4_C3281F1010689A02;

#define CLASS_3_734E9CCE4FF3A264_METHOD_3_F52C35CFABCB147C_OFFSET UNITYSDK_OFFSET(0x1A0CBBD0)
#define CLASS_3_734E9CCE4FF3A264__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0CBB40)

inline static constexpr unsigned int Class_3_734E9CCE4FF3A264_TypeDefinitionIndex = 79355;

class Class_3_734E9CCE4FF3A264 : public ::Class_2_A48F3719AA1CF200_41
{
public:
	::Il2CppArray<::System::UInt32>* Field_3_1; // 0x20
	::Il2CppArray<::System::UInt64>* Field_3_3; // 0x28
	::Il2CppArray<::Struct_2_FA6F1CFCFAC0D4A9>* Field_3_2; // 0x30
	::Il2CppArray<::MoleMole::Arcade::BallsRace::BrEntityType>* Field_3_0; // 0x38

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_734E9CCE4FF3A264__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_F52C35CFABCB147C(::Class_3_96CE54D1B5F2FEE8* a1, ::Class_4_C3281F1010689A02* a2, ::System::Int32 a3, ::System::UInt64 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_96CE54D1B5F2FEE8*, ::Class_4_C3281F1010689A02*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_3_734E9CCE4FF3A264_METHOD_3_F52C35CFABCB147C_OFFSET))(this, a1, a2, a3, a4);
	}
};

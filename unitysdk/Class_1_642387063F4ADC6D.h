#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_9.h"
#include "unitysdk/System/Object.h"

class Class_3_8F63A57C1693E5AC_19;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_642387063F4ADC6D_METHOD_1_1CB1190C053D2912_OFFSET UNITYSDK_OFFSET(0x7E5A370)
#define CLASS_1_642387063F4ADC6D__CTOR_OFFSET UNITYSDK_OFFSET(0x7E5A360)

inline static constexpr unsigned int Class_1_642387063F4ADC6D_TypeDefinitionIndex = 51837;

class Class_1_642387063F4ADC6D : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* Field_1_2; // 0x10
	::System::Int64 Field_1_3; // 0x18
	::System::Int64 Field_1_4; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Int32 Field_1_0; // 0x2C
	::Enum_3_ED790DAC948A65A9_9 Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_642387063F4ADC6D__CTOR_OFFSET))(this);
	}

	static ::Class_1_642387063F4ADC6D* Method_1_1CB1190C053D2912(::Class_3_8F63A57C1693E5AC_19* a1)
	{
		return ((::Class_1_642387063F4ADC6D*(*)(::Class_3_8F63A57C1693E5AC_19*))((::PBYTE)hIl2Cpp + CLASS_1_642387063F4ADC6D_METHOD_1_1CB1190C053D2912_OFFSET))(a1);
	}
};

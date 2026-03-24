#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UILineupSelectPageController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_44EFB945CAE441A3_METHOD_1_74B606B7F04F3BC3_OFFSET UNITYSDK_OFFSET(0xB4E6EB0)
#define CLASS_1_44EFB945CAE441A3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4E6F90)
#define CLASS_1_44EFB945CAE441A3__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E6E80)

inline static constexpr unsigned int Class_1_44EFB945CAE441A3_TypeDefinitionIndex = 46601;

class Class_1_44EFB945CAE441A3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x10
	::MoleMole::UILineupSelectPageController* Field_1_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::SByte, ::Class_2_D89CCC627A66D0AD*>* Field_1_4; // 0x20
	::Il2CppArray<::System::Int32>* Field_1_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::SByte, ::System::Int32>* Field_1_3; // 0x30
	::System::Boolean Field_1_2; // 0x38
	::System::Int32 Field_1_1; // 0x3C

	::System::Void _ctor(::MoleMole::UILineupSelectPageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UILineupSelectPageController*))((::PBYTE)hIl2Cpp + CLASS_1_44EFB945CAE441A3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_74B606B7F04F3BC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EFB945CAE441A3_METHOD_1_74B606B7F04F3BC3_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EFB945CAE441A3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DB4B27FBA0545EF9.h"

class Class_2_208CC9941471731A_90;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7172454F79B1BDAE_METHOD_2_426202FF040835DA_OFFSET UNITYSDK_OFFSET(0xA3F09B0)
#define CLASS_2_7172454F79B1BDAE__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F09A0)

inline static constexpr unsigned int Class_2_7172454F79B1BDAE_TypeDefinitionIndex = 40371;

class Class_2_7172454F79B1BDAE : public ::Class_1_DB4B27FBA0545EF9
{
public:
	::System::String* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x30
	::System::Int32 Field_2_1; // 0x38
	::System::Int32 Field_2_2; // 0x3C
	::System::Single Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7172454F79B1BDAE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_426202FF040835DA(::Class_2_208CC9941471731A_90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_90*))((::PBYTE)hIl2Cpp + CLASS_2_7172454F79B1BDAE_METHOD_2_426202FF040835DA_OFFSET))(this, a1);
	}
};

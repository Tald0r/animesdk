#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C22186B6BA05726D;
class Class_3_C22186B6BA05726D_1;
namespace System { class String; }

#define CLASS_1_613D3FC72C01EA96__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7B52CA0)
#define CLASS_1_613D3FC72C01EA96__CTOR_OFFSET UNITYSDK_OFFSET(0x7B52C70)

inline static constexpr unsigned int Class_1_613D3FC72C01EA96_TypeDefinitionIndex = 56668;

class Class_1_613D3FC72C01EA96 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor(::Class_3_C22186B6BA05726D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C22186B6BA05726D_1*))((::PBYTE)hIl2Cpp + CLASS_1_613D3FC72C01EA96__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_3_C22186B6BA05726D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C22186B6BA05726D*))((::PBYTE)hIl2Cpp + CLASS_1_613D3FC72C01EA96__CTOR_1_OFFSET))(this, a1);
	}
};

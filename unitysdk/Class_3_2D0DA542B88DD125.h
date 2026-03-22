#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3D452FA003157C19_Class_2_2B2DA72811ABBD65.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class String; }

#define CLASS_3_2D0DA542B88DD125_METHOD_3_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0xD5A4260)
#define CLASS_3_2D0DA542B88DD125_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xD5A4200)
#define CLASS_3_2D0DA542B88DD125_METHOD_3_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xD5A44C0)
#define CLASS_3_2D0DA542B88DD125_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xD5A45A0)
#define CLASS_3_2D0DA542B88DD125_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD5A4530)
#define CLASS_3_2D0DA542B88DD125_METHOD_3_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0xD5A4600)
#define CLASS_3_2D0DA542B88DD125__CTOR_OFFSET UNITYSDK_OFFSET(0xD5A41E0)

inline static constexpr unsigned int Class_3_2D0DA542B88DD125_TypeDefinitionIndex = 47636;

class Class_3_2D0DA542B88DD125 : public ::Class_1_3D452FA003157C19_Class_2_2B2DA72811ABBD65
{
public:
	::System::String* Field_3_0; // 0x28
	::MoleMole::Config::ValueCompareType Field_3_1; // 0x30
	::System::Single Field_3_2; // 0x34

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ValueCompareType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ValueCompareType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125_METHOD_3_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Int32 Method_3_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125_METHOD_3_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D0DA542B88DD125_METHOD_3_FBF2CB29FD3B55E6_OFFSET))(this);
	}
};

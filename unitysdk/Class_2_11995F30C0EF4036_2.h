#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_280.h"
#include "unitysdk/Share/EAffixLevel.h"
#include "unitysdk/Share/EArcanaType.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_536.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_11995F30C0EF4036_2_METHOD_2_6B4964DB47EED0BC_OFFSET UNITYSDK_OFFSET(0x13008D40)
#define CLASS_2_11995F30C0EF4036_2_METHOD_2_A3D94657D95A2B5E_OFFSET UNITYSDK_OFFSET(0x13008B10)
#define CLASS_2_11995F30C0EF4036_2_METHOD_2_AD423FC77E05EC39_OFFSET UNITYSDK_OFFSET(0x13008B70)
#define CLASS_2_11995F30C0EF4036_2_METHOD_2_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x13008B20)
#define CLASS_2_11995F30C0EF4036_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13008B00)

inline static constexpr unsigned int Class_2_11995F30C0EF4036_2_TypeDefinitionIndex = 17559;

class Class_2_11995F30C0EF4036_2 : public ::Class_1_EBCA2A4357C4C8BF_280
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_536 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_536, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_2__CTOR_OFFSET))(this, a1, a2);
	}

	::Share::EAffixLevel Method_2_A3D94657D95A2B5E()
	{
		return ((::Share::EAffixLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_2_METHOD_2_A3D94657D95A2B5E_OFFSET))(this);
	}

	::System::Void Method_2_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_2_METHOD_2_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::Share::EArcanaType Method_2_6B4964DB47EED0BC()
	{
		return ((::Share::EArcanaType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_2_METHOD_2_6B4964DB47EED0BC_OFFSET))(this);
	}

	::System::Void Method_2_AD423FC77E05EC39(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_11995F30C0EF4036_2_METHOD_2_AD423FC77E05EC39_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_31.h"

class Class_3_3C27FB03C7F640D0_18;
class Class_3_5079209B53B3FADC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_86B3C791290970F4_METHOD_2_607508F85072F4C4_OFFSET UNITYSDK_OFFSET(0xB8E2050)
#define CLASS_2_86B3C791290970F4_METHOD_2_710D0F93472E6738_OFFSET UNITYSDK_OFFSET(0xB8E1960)
#define CLASS_2_86B3C791290970F4_METHOD_2_7A310FDCDE635116_OFFSET UNITYSDK_OFFSET(0xB8E1F20)
#define CLASS_2_86B3C791290970F4_METHOD_2_8AF85FA7544DCE26_OFFSET UNITYSDK_OFFSET(0xB8E1CB0)
#define CLASS_2_86B3C791290970F4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8E1900)
#define CLASS_2_86B3C791290970F4__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E18F0)

inline static constexpr unsigned int Class_2_86B3C791290970F4_TypeDefinitionIndex = 48784;

class Class_2_86B3C791290970F4 : public ::Class_1_8A3658A741325FC2
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_5079209B53B3FADC*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_710D0F93472E6738(::Class_3_3C27FB03C7F640D0_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3C27FB03C7F640D0_18*))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4_METHOD_2_710D0F93472E6738_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_31 Method_2_8AF85FA7544DCE26(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Enum_3_0A3761FE34514D6C_31(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4_METHOD_2_8AF85FA7544DCE26_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7A310FDCDE635116(::System::UInt32 a1, ::Class_3_5079209B53B3FADC*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_3_5079209B53B3FADC*&))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4_METHOD_2_7A310FDCDE635116_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_607508F85072F4C4(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4_METHOD_2_607508F85072F4C4_OFFSET))(this, a1, a2);
	}
};

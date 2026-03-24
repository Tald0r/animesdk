#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0A976FBB3E6CCAE3;
class Class_2_785FDC7D0DA58280;
class Class_3_8F63A57C1693E5AC_12;
class Class_3_98C806684F7CC372_2;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B0950A7FC6D3AF7A_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1B503F30)
#define CLASS_1_B0950A7FC6D3AF7A_METHOD_1_35B4D778EF976A79_OFFSET UNITYSDK_OFFSET(0x1B5043F0)
#define CLASS_1_B0950A7FC6D3AF7A_METHOD_1_74203CD993864486_OFFSET UNITYSDK_OFFSET(0x1B504600)
#define CLASS_1_B0950A7FC6D3AF7A_METHOD_1_C638341A2A4874E5_OFFSET UNITYSDK_OFFSET(0x1B5046A0)
#define CLASS_1_B0950A7FC6D3AF7A_METHOD_1_D87A43CFAEB40267_OFFSET UNITYSDK_OFFSET(0x1B504170)
#define CLASS_1_B0950A7FC6D3AF7A_METHOD_1_F93D9A10EE4F9821_OFFSET UNITYSDK_OFFSET(0x1B504000)
#define CLASS_1_B0950A7FC6D3AF7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B503E80)

inline static constexpr unsigned int Class_1_B0950A7FC6D3AF7A_TypeDefinitionIndex = 25726;

class Class_1_B0950A7FC6D3AF7A : public ::System::Object
{
public:
	::Class_3_98C806684F7CC372_2* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Class_3_8F63A57C1693E5AC_12*>* Field_1_0; // 0x18
	::Class_3_98C806684F7CC372_2* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x28
	::System::UInt64 Field_1_3; // 0x30
	::System::UInt64 Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0950A7FC6D3AF7A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0950A7FC6D3AF7A_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_F93D9A10EE4F9821(::Class_2_785FDC7D0DA58280* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B0950A7FC6D3AF7A_METHOD_1_F93D9A10EE4F9821_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_35B4D778EF976A79(::Class_2_785FDC7D0DA58280* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B0950A7FC6D3AF7A_METHOD_1_35B4D778EF976A79_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_74203CD993864486(::Class_2_785FDC7D0DA58280* a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B0950A7FC6D3AF7A_METHOD_1_74203CD993864486_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D87A43CFAEB40267(::Class_2_785FDC7D0DA58280* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B0950A7FC6D3AF7A_METHOD_1_D87A43CFAEB40267_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C638341A2A4874E5(::Class_2_0A976FBB3E6CCAE3* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0A976FBB3E6CCAE3*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B0950A7FC6D3AF7A_METHOD_1_C638341A2A4874E5_OFFSET))(this, a1, a2, a3);
	}
};

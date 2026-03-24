#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_4_425BBC3CBFD638A0;
class Class_4_5B5E82918BC44D6E;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_620AC223FD763757_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x706CD10)
#define CLASS_3_620AC223FD763757_METHOD_3_556DB850615E0921_OFFSET UNITYSDK_OFFSET(0x706CEF0)
#define CLASS_3_620AC223FD763757_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x706D770)
#define CLASS_3_620AC223FD763757__CTOR_OFFSET UNITYSDK_OFFSET(0x706D6C0)

inline static constexpr unsigned int Class_3_620AC223FD763757_TypeDefinitionIndex = 76509;

class Class_3_620AC223FD763757 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_1; // 0x18
	::Class_4_425BBC3CBFD638A0* Field_3_0; // 0x20
	::Class_4_5B5E82918BC44D6E* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_620AC223FD763757__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_620AC223FD763757_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_556DB850615E0921(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_620AC223FD763757_METHOD_3_556DB850615E0921_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_620AC223FD763757_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

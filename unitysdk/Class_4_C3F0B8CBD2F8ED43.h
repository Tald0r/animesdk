#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_4_5B5E82918BC44D6E;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_C3F0B8CBD2F8ED43_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x5E8E5E0)
#define CLASS_4_C3F0B8CBD2F8ED43_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x5E8E140)
#define CLASS_4_C3F0B8CBD2F8ED43_METHOD_4_42AE4B7779F3CD9E_OFFSET UNITYSDK_OFFSET(0x5E8E2A0)
#define CLASS_4_C3F0B8CBD2F8ED43__CTOR_OFFSET UNITYSDK_OFFSET(0x5E8E530)

inline static constexpr unsigned int Class_4_C3F0B8CBD2F8ED43_TypeDefinitionIndex = 57129;

class Class_4_C3F0B8CBD2F8ED43 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x28
	::Class_4_5B5E82918BC44D6E* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C3F0B8CBD2F8ED43__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C3F0B8CBD2F8ED43_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_42AE4B7779F3CD9E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_C3F0B8CBD2F8ED43_METHOD_4_42AE4B7779F3CD9E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C3F0B8CBD2F8ED43_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};

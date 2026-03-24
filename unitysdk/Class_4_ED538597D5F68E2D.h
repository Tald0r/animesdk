#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_4_425BBC3CBFD638A0_2;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_ED538597D5F68E2D_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xA9E7400)
#define CLASS_4_ED538597D5F68E2D_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA9E6D00)
#define CLASS_4_ED538597D5F68E2D_METHOD_4_BFD9C6B0B8BAEFA7_OFFSET UNITYSDK_OFFSET(0xA9E6F70)
#define CLASS_4_ED538597D5F68E2D__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E72C0)

inline static constexpr unsigned int Class_4_ED538597D5F68E2D_TypeDefinitionIndex = 73075;

class Class_4_ED538597D5F68E2D : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_4_2; // 0x28
	::Class_4_D0B094D0B900A9F0<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_4_3; // 0x30
	::Class_4_425BBC3CBFD638A0_2* Field_4_1; // 0x38
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_ED538597D5F68E2D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_ED538597D5F68E2D_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_BFD9C6B0B8BAEFA7(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_ED538597D5F68E2D_METHOD_4_BFD9C6B0B8BAEFA7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_ED538597D5F68E2D_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_631700BC8A8FBE1D.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_01A26C1CBD4846A2;
class Class_1_8FBDD7D8E0EE0B49;
class Class_3_24D8B6D1AB5590E1;
namespace System::Collections { class IList; }

#define CLASS_4_425BBC3CBFD638A0_1_METHOD_4_14382E1EA2C39697_OFFSET UNITYSDK_OFFSET(0x99CB140)
#define CLASS_4_425BBC3CBFD638A0_1_METHOD_4_A495A59559F5ED4D_OFFSET UNITYSDK_OFFSET(0x99CB210)
#define CLASS_4_425BBC3CBFD638A0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x99CB200)

inline static constexpr unsigned int Class_4_425BBC3CBFD638A0_1_TypeDefinitionIndex = 38565;

class Class_4_425BBC3CBFD638A0_1 : public ::Class_3_631700BC8A8FBE1D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_425BBC3CBFD638A0_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_14382E1EA2C39697(::Struct_2_FE667B282E242C72& a1, ::Struct_2_FE667B282E242C72& a2, ::Class_3_24D8B6D1AB5590E1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::Struct_2_FE667B282E242C72&, ::Class_3_24D8B6D1AB5590E1*))((::PBYTE)hIl2Cpp + CLASS_4_425BBC3CBFD638A0_1_METHOD_4_14382E1EA2C39697_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IList* Method_4_A495A59559F5ED4D(::Struct_2_FE667B282E242C72& a1, ::Struct_2_E147DFD2A4EE8B0B& a2)
	{
		return ((::System::Collections::IList*(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::Struct_2_E147DFD2A4EE8B0B&))((::PBYTE)hIl2Cpp + CLASS_4_425BBC3CBFD638A0_1_METHOD_4_A495A59559F5ED4D_OFFSET))(this, a1, a2);
	}
};

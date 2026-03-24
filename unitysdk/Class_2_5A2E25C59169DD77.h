#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapLeftTastListRow02Context; }
namespace System { class String; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_5A2E25C59169DD77_METHOD_2_00D9C214C63942A7_OFFSET UNITYSDK_OFFSET(0x741B070)
#define CLASS_2_5A2E25C59169DD77_METHOD_2_0D9C76C4B2D944F5_OFFSET UNITYSDK_OFFSET(0x741ACE0)
#define CLASS_2_5A2E25C59169DD77_METHOD_2_30E8E54FF0E3467D_OFFSET UNITYSDK_OFFSET(0x741B110)
#define CLASS_2_5A2E25C59169DD77_METHOD_2_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0x741B260)
#define CLASS_2_5A2E25C59169DD77_METHOD_2_F080B0977F4BF070_OFFSET UNITYSDK_OFFSET(0x741B1B0)
#define CLASS_2_5A2E25C59169DD77__CTOR_OFFSET UNITYSDK_OFFSET(0x741B020)

inline static constexpr unsigned int Class_2_5A2E25C59169DD77_TypeDefinitionIndex = 49186;

class Class_2_5A2E25C59169DD77 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapLeftTastListRow02Context*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A2E25C59169DD77__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0D9C76C4B2D944F5(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_5A2E25C59169DD77_METHOD_2_0D9C76C4B2D944F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_00D9C214C63942A7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A2E25C59169DD77_METHOD_2_00D9C214C63942A7_OFFSET))(this);
	}

	::System::String* Method_2_30E8E54FF0E3467D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A2E25C59169DD77_METHOD_2_30E8E54FF0E3467D_OFFSET))(this);
	}

	::System::Void Method_2_F080B0977F4BF070(::MoleMole::UIUrbanMapLeftTastListRow02Context* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow02Context*))((::PBYTE)hIl2Cpp + CLASS_2_5A2E25C59169DD77_METHOD_2_F080B0977F4BF070_OFFSET))(this, a1);
	}

	::System::String* Method_2_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A2E25C59169DD77_METHOD_2_C101CD8C5CF89A5A_OFFSET))(this);
	}
};

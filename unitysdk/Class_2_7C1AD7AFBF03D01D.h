#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapRightListRowHintContext; }
namespace System { class String; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_7C1AD7AFBF03D01D_METHOD_2_1FC94BA33A151EF7_OFFSET UNITYSDK_OFFSET(0x81864A0)
#define CLASS_2_7C1AD7AFBF03D01D_METHOD_2_242AC69B0D43B266_OFFSET UNITYSDK_OFFSET(0x8186760)
#define CLASS_2_7C1AD7AFBF03D01D_METHOD_2_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0x81866D0)
#define CLASS_2_7C1AD7AFBF03D01D__CTOR_OFFSET UNITYSDK_OFFSET(0x8186680)

inline static constexpr unsigned int Class_2_7C1AD7AFBF03D01D_TypeDefinitionIndex = 41727;

class Class_2_7C1AD7AFBF03D01D : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightListRowHintContext*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C1AD7AFBF03D01D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1FC94BA33A151EF7(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_7C1AD7AFBF03D01D_METHOD_2_1FC94BA33A151EF7_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C1AD7AFBF03D01D_METHOD_2_C101CD8C5CF89A5A_OFFSET))(this);
	}

	::System::Void Method_2_242AC69B0D43B266(::MoleMole::UIUrbanMapRightListRowHintContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightListRowHintContext*))((::PBYTE)hIl2Cpp + CLASS_2_7C1AD7AFBF03D01D_METHOD_2_242AC69B0D43B266_OFFSET))(this, a1);
	}
};

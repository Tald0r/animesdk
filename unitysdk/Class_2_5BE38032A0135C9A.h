#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapLeftLocationRowContext; }
namespace System { class String; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_5BE38032A0135C9A_METHOD_2_1FC94BA33A151EF7_OFFSET UNITYSDK_OFFSET(0x7DEAF80)
#define CLASS_2_5BE38032A0135C9A_METHOD_2_B299D7C7C3F84864_OFFSET UNITYSDK_OFFSET(0x7DEB1B0)
#define CLASS_2_5BE38032A0135C9A_METHOD_2_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0x7DEB260)
#define CLASS_2_5BE38032A0135C9A__CTOR_OFFSET UNITYSDK_OFFSET(0x7DEB160)

inline static constexpr unsigned int Class_2_5BE38032A0135C9A_TypeDefinitionIndex = 79869;

class Class_2_5BE38032A0135C9A : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapLeftLocationRowContext*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BE38032A0135C9A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1FC94BA33A151EF7(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_5BE38032A0135C9A_METHOD_2_1FC94BA33A151EF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B299D7C7C3F84864(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_5BE38032A0135C9A_METHOD_2_B299D7C7C3F84864_OFFSET))(this, a1);
	}

	::System::String* Method_2_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BE38032A0135C9A_METHOD_2_C101CD8C5CF89A5A_OFFSET))(this);
	}
};

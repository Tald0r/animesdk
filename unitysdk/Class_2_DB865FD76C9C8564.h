#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIMainCitySidebarItemGatherContext; }
namespace System { class String; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_DB865FD76C9C8564_METHOD_2_45E0FAD92C78B6E2_OFFSET UNITYSDK_OFFSET(0x75CCE70)
#define CLASS_2_DB865FD76C9C8564_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x75CCD30)
#define CLASS_2_DB865FD76C9C8564_METHOD_2_75EE971FC92BCFEE_OFFSET UNITYSDK_OFFSET(0x75CCA20)
#define CLASS_2_DB865FD76C9C8564_METHOD_2_C1BC8397B9F46052_OFFSET UNITYSDK_OFFSET(0x75CCDC0)
#define CLASS_2_DB865FD76C9C8564__CTOR_OFFSET UNITYSDK_OFFSET(0x75CCCE0)

inline static constexpr unsigned int Class_2_DB865FD76C9C8564_TypeDefinitionIndex = 64700;

class Class_2_DB865FD76C9C8564 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIMainCitySidebarItemGatherContext*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB865FD76C9C8564__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_75EE971FC92BCFEE(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_DB865FD76C9C8564_METHOD_2_75EE971FC92BCFEE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB865FD76C9C8564_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_C1BC8397B9F46052(::MoleMole::UIMainCitySidebarItemGatherContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCitySidebarItemGatherContext*))((::PBYTE)hIl2Cpp + CLASS_2_DB865FD76C9C8564_METHOD_2_C1BC8397B9F46052_OFFSET))(this, a1);
	}

	::System::String* Method_2_45E0FAD92C78B6E2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB865FD76C9C8564_METHOD_2_45E0FAD92C78B6E2_OFFSET))(this);
	}
};

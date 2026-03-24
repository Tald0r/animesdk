#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UISocialCircleNewsRowContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_ED1C7538B54681A0_METHOD_2_1FC94BA33A151EF7_OFFSET UNITYSDK_OFFSET(0x64493C0)
#define CLASS_2_ED1C7538B54681A0_METHOD_2_8AC97570F969A230_OFFSET UNITYSDK_OFFSET(0x6449950)
#define CLASS_2_ED1C7538B54681A0_METHOD_2_FA3A7ED06536730C_OFFSET UNITYSDK_OFFSET(0x64498A0)
#define CLASS_2_ED1C7538B54681A0__CTOR_OFFSET UNITYSDK_OFFSET(0x64495A0)

inline static constexpr unsigned int Class_2_ED1C7538B54681A0_TypeDefinitionIndex = 70166;

class Class_2_ED1C7538B54681A0 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UISocialCircleNewsRowContext*>* Field_2_1; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED1C7538B54681A0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1FC94BA33A151EF7(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_ED1C7538B54681A0_METHOD_2_1FC94BA33A151EF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA3A7ED06536730C(::MoleMole::UISocialCircleNewsRowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISocialCircleNewsRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_ED1C7538B54681A0_METHOD_2_FA3A7ED06536730C_OFFSET))(this, a1);
	}

	::System::String* Method_2_8AC97570F969A230()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED1C7538B54681A0_METHOD_2_8AC97570F969A230_OFFSET))(this);
	}
};

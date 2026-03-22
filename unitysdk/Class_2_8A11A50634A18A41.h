#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_8A11A50634A18A41_METHOD_2_1DDD10252C795DC3_OFFSET UNITYSDK_OFFSET(0x8B910E0)
#define CLASS_2_8A11A50634A18A41_METHOD_2_5C3BCA5651ECC4D9_OFFSET UNITYSDK_OFFSET(0x8B90D80)
#define CLASS_2_8A11A50634A18A41_METHOD_2_DE42A547DF2A4B91_OFFSET UNITYSDK_OFFSET(0x8B91000)
#define CLASS_2_8A11A50634A18A41__CTOR_OFFSET UNITYSDK_OFFSET(0x8B91090)

inline static constexpr unsigned int Class_2_8A11A50634A18A41_TypeDefinitionIndex = 43048;

class Class_2_8A11A50634A18A41 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A11A50634A18A41__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5C3BCA5651ECC4D9(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_8A11A50634A18A41_METHOD_2_5C3BCA5651ECC4D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE42A547DF2A4B91(::MoleMole::UIUrbanMapPointWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_8A11A50634A18A41_METHOD_2_DE42A547DF2A4B91_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DDD10252C795DC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A11A50634A18A41_METHOD_2_1DDD10252C795DC3_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class StackFrame; }

#define CLASS_1_FD94529AEC23BBED_CLASS_1_7F887305F1FA7173_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x1A997F90)
#define CLASS_1_FD94529AEC23BBED_CLASS_1_7F887305F1FA7173_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A998270)
#define CLASS_1_FD94529AEC23BBED_CLASS_1_7F887305F1FA7173__CTOR_OFFSET UNITYSDK_OFFSET(0x1A997F80)

inline static constexpr unsigned int Class_1_FD94529AEC23BBED_Class_1_7F887305F1FA7173_TypeDefinitionIndex = 7821;

class Class_1_FD94529AEC23BBED_Class_1_7F887305F1FA7173 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Diagnostics::StackFrame* Field_1_4; // 0x28
	::System::Int32 Field_1_1; // 0x30

	::System::Void _ctor(::System::Diagnostics::StackFrame* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + CLASS_1_FD94529AEC23BBED_CLASS_1_7F887305F1FA7173__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD94529AEC23BBED_CLASS_1_7F887305F1FA7173_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD94529AEC23BBED_CLASS_1_7F887305F1FA7173_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

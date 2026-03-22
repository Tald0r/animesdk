#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NewConfigUICommon; }
namespace System { class Action; }

#define CLASS_1_8E08E6DFEA57683D_CLASS_1_36FE46B4E8484E0E_METHOD_1_CC7478338B23B938_OFFSET UNITYSDK_OFFSET(0x6083C80)
#define CLASS_1_8E08E6DFEA57683D_CLASS_1_36FE46B4E8484E0E_METHOD_1_CEE6B8CD83EF801B_OFFSET UNITYSDK_OFFSET(0x60838E0)
#define CLASS_1_8E08E6DFEA57683D_CLASS_1_36FE46B4E8484E0E__CTOR_OFFSET UNITYSDK_OFFSET(0x60838D0)

inline static constexpr unsigned int Class_1_8E08E6DFEA57683D_Class_1_36FE46B4E8484E0E_TypeDefinitionIndex = 78737;

class Class_1_8E08E6DFEA57683D_Class_1_36FE46B4E8484E0E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_CLASS_1_36FE46B4E8484E0E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CEE6B8CD83EF801B(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_CLASS_1_36FE46B4E8484E0E_METHOD_1_CEE6B8CD83EF801B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC7478338B23B938(::MoleMole::NewConfigUICommon* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NewConfigUICommon*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_CLASS_1_36FE46B4E8484E0E_METHOD_1_CC7478338B23B938_OFFSET))(this, a1);
	}
};
